#include<stdio.h>
struct login
{
	char username[20];
	char password[20];
};
regis()
{
	FILE *log;
	log=fopen("login.txt","w");
	struct login l;
	printf("Enter User name: ");
	scanf("%s",&l.username);
	printf("Enter Password: ");
	scanf("%s",&l.password);
	fwrite(&l,sizeof(l),1,log);
	fclose(log);
	printf("Now login with userId and Password\n");
	getch();
	login();
}
login()
{
	char username[20],password[20];
	FILE *log;
	log=fopen("login.txt","r");
	struct login l;
	printf("UserID:");
	scanf("%s",&username);
	printf("Password: ");
	scanf("%s",&password);
	while(fread(&l,sizeof(l),1,log))
	{
		if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
		{
			printf("Successful Login\n");
		}
		else{
			printf("Please enter correct username and password\n");
		}
	}
	fclose(log);
}
void main()
{
	int choice;
	printf("Press 1 for register \n Press 2 for login\nPress 3 to exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nRegister Here\n");
			regis();
			break;
		case 2:
			printf("Login:\n");
			login();
			break;
		default:
			printf("\n----Thank You:)------\n");
		
	}
}

