#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0;

    int countDelete[256] = {0};  // นับจำนวนที่ลบ
    int countFound[256] = {0};   // ตรวจว่าพบไหม

    printf("Enter the First string:\n");
    gets(str1);

    printf("Enter the Second string:\n");
    gets(str2);

    // บันทึกตัวอักษรใน str2
    for(i = 0; str2[i] != '\0'; i++)
    {
        countFound[(unsigned char)str2[i]]++;
    }

    // ลบตัวอักษร
    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                countDelete[(unsigned char)str1[i]]++;
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k++;
            }
        }
        str_rem[k] = '\0';
        strcpy(str2, str_rem);
        k = 0;
    }

    printf("\nResult string: %s\n", str2);

    // แสดง summary
    printf("\nSummary:\n");

    for(i = 0; str1[i] != '\0'; i++)
    {
        char c = str1[i];

        if(countDelete[(unsigned char)c] > 0)
        {
            printf("'%c' deleted %d time(s)\n", c, countDelete[(unsigned char)c]);
        }
        else if(countFound[(unsigned char)c] == 0)
        {
            printf("'%c' not found\n", c);
        }
    }

    return 0;
}
