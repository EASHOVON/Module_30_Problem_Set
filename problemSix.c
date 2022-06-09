#include <stdio.h>


// Question 6: Write a program in C to copy one string to another string without using library functions

void my_strcpy(char *dest, char *src){
    int i;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';
}

int main(void){
    char str1[100], str2[100];
    scanf("%s", str1);
    my_strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}
