#include<stdio.h>
#include<string.h>
int main(){
	char username[20],pass[20];
	char secret[20],password[20];
	char ch,ch1;
	printf("\nEnter your username:");
	scanf("%s",&username);
	printf("\nEnter your password:");
	scanf("%s",&pass);        
	FILE *fp;
	fp=fopen("password.txt","r");
	
	
/*	fprintf(fp,"%s",secret);
	fprintf(fp,"%s",password); */ 
	
	fscanf(fp,"%s",&secret);
	fscanf(fp,"%s",&password);
	if((strcmp(secret,username)==0) && (strcmp(password,pass)==0))
	{
		
		while(1)
		{
			ch=fgetc(fp);
			printf("%c",ch);
			if(ch==EOF)
				break;
		}
		getchar();
			
	
		
	}
	else{
		printf("\nInvalid username or Password");
		fclose(fp);
	}
	
/*	printf("\n%s",secret);
	printf("\n%s",password);  */
	
	fclose(fp);
	
	return 0;
	
}
