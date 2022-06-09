#include <stdio.h>

// Question 5: Write a program in C to compare two strings without using string library functions

int main(void){
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    int i, is_match = 0;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0';i++){
        if(str1[i]!=str2[i]){
            is_match = 1;
            break;
        }
    }
    if(is_match!=0){
        printf("Strings are not same\n");
    }
    else
    {
        printf("Strings are same\n");
    }
}