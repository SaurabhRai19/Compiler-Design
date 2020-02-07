/*	E->TE'
	E'->+TE'/NULL
	T->FT'
	T'->*FT'/NULL
	F->(E)/a
*/

#include<stdio.h>
#include<string.h>
void E();
void Eds();
void T();
void Tds();
void F();
char input[100];
int i,err;
int main()
{
	printf("Enter string:");
	gets(input);
	E();
	if(i==strlen(input)&& err==0)
	{
		printf("String Accepted\n");
	}
	else
	{
		printf("String not accepted\n");
	}
}
void E()
{
	T();
	Eds();
}
void T()
{
	F();
	Tds();
}
void Eds()
{
	if(input[i]=='+')
	{
		i++;
		T();
		Eds();
	}
}
void Tds()
{
	if(input[i]=='*')
	{
		i++;
		F();
		Tds();
	}
}
void F()
{
	if(input[i]=='a')
	{
		i++;
	}
	else if(input[i]=='(')
	{
		i++;
		E();
		if(input[i]==')')
		{
			i++;
		}
		else
		{
			err=1;
		}
	}
	else
	{
		err=1;
	}
}

