#include<stdio.h>
int main(){

char string[100];
gets(string);
int a = 1;
int flag = 0;

if (string[0] == '_' || (string[0] >= 'a' && string[0] <= 'z') || (string[0] >= 'A' && string[0] <= 'Z'))
    {
        while(string[a] != '\0'){
        if(string[a] == '_' || (string[a] >= 'a' && string[a] <= 'z') || (string[a] >= 'A' && string[a] <= 'Z')){
            flag = 1;
        }else{

            break;
        }
        a++;
}
    if(flag==1){
        printf("identifier");
    }else{
         printf("Not an Identifier");
            flag = 0;
    }
    }else{
     printf("Not an Identifier");
    }

    return 0;

}
