#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64], int size);
int main() 
{
	int num=0;
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	
	char user[64];
	scanf("%63s",user);
	
	char logpa[64];
    scanf("%63s",logpa);
			
	
	num = checkLogin(user, logpa, login, password, 5);
	
	if(num)
	{
		printf("Welcome");
	}
	else
	{
		printf("Incorrect login or password");
	}
	
    
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
}*/
