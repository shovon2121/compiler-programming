/*

** Write a Program to implement a basic lexical analyzer for separate tokens

Sample Input :
	#include <stdio.h>
	 Int main(){
		Int a, b, c;
		A = 2;
                  B = 3;
		C = a + b;
	}
Output:
	Keywords : #include, int, main
	Punc:     < , >, (,),{,}
	Identifier: a , b, c
	Constant : 2, 3
	Operator: +


*/
#include<stdio.h>
#include<string.h>
 int keyword(char ch[])
 {
    int lengthOFword = strlen(ch);
     int flag = 1;
     int i;
     int j = 1;
     int k = 0; // here k for iterating the char ch
     char word[lengthOFword];
     int w=0;

     char key[32][10] = {"auto","const","double","float","int","short","struct","unsigned","break","continue","else","for","long","signed","switch","void","case","default","enum","goto","register","sizeof",
     "typedef","volatile","char","do","extern","if","return","static","union","while"};

    for (i = 0; i < 32 ; i++)
    {
        k = 0;
        if(key[i][0] == ch[k])
        {
            w = 0;
            word[w]=ch[k];
            k++;
            for(j = 1; j < lengthOFword; j++)
            {
                if(key[i][j] == ch[k]){
                  w++;
                  word[w] = ch[k];
                  k++;

                }
            }
        }
    }


    for(i = 0; i < lengthOFword; i++)
    {
        if (ch[i] == word[i])
        {
            flag = 0;
        }
        printf("%c", ch[i]);
    }
    return flag;



 }

 int main()
 {
     char ch[] = "unsigned";
     char operators[] = "+-*/%=";
     char brackets[] = ""


     keyword(ch);



 return 0;
 }




