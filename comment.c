#include<stdio.h>
#include<conio.h>

void main()
{
    char comment[100];
int i = 2, a = 0;
gets(comment);

if (comment[0] == '/')
    {
        if (comment[1] == '/')
        {
            printf("\nComment");
        }
        else if (comment[1] == '*')
        {
            for (i = 2; i < 100;i++)
            {
                if (comment[i] == '*' && comment[i+1] == '/')
                {
                    printf("comment");
                    a = 1;
                    break;
                }else{
                    continue;
                }
            }
            if (a == 0)
            {
                printf("not comment");
            }
        }
        else{
            printf("not comment");
        }
    }
        else{
            printf("not comment");
        }

}





