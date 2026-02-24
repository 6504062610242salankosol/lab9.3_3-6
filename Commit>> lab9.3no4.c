#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size);
void countVowels(char str[]);

int main() 
{
	int num=0;

	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	
	char user[64];
	scanf("%63s", user);
	
	char logpa[64];
	scanf("%63s", logpa);
			
	num = checkLogin(user, logpa, login, password, 5);
	
	if(num)
	{
		printf("Welcome\n");
	}
	else
	{
		printf("Incorrect login or password\n");
	}

	// เพิ่มการนับสระจาก username
	printf("\nVowel count in username:\n");
	countVowels(user);

	return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size)
{
	for(int i=0;i<size;i++)
	{
		if(strcmp(login, logindb[i]) == 0 && strcmp(passwd, passdb[i]) == 0)
		{
			return 1;   
		}
	}
	return 0;
}

void countVowels(char str[])
{
	int a=0,e=0,i=0,o=0,u=0;

	for(int j=0; str[j] != '\0'; j++)
	{
		char c = tolower(str[j]);

		if(c=='a') a++;
		else if(c=='e') e++;
		else if(c=='i') i++;
		else if(c=='o') o++;
		else if(c=='u') u++;
	}

	printf("a = %d\n", a);
	printf("e = %d\n", e);
	printf("i = %d\n", i);
	printf("o = %d\n", o);
	printf("u = %d\n", u);
}
