#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int vowels=0,digits=0,letters=0,symbols=0,spaces=0;
	char ch;
	FILE *fp;
	fp=fopen("program3.txt","r");
	if(fp==NULL){
		printf("Error while opening the file");
		
	}
	while((ch=fgetc(fp))!=EOF){
		if(ch=='a'||ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			vowels++;
		}
		if(ch>=47 && ch<=56)
		{	digits++;    }
		if(ch>=97 && ch<=123 || ch>=65 && ch<=90){
			letters++;
		}
		if(ch==' ')
		{
			spaces++;
		}
		if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' ||ch=='&')
		{
			symbols++;
		}
	}
	printf("Vowels: %d\n",vowels);
	printf("Digits: %d\n", digits);
	printf("Spaces: %d\n", spaces);
	printf("Symbols : %d\n",symbols);

	fclose(fp);

return 0;
getch();
}

