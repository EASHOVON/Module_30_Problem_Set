#include <stdio.h>

// Question 4: Wtite a program in c to find the length of a string without

int main(void){
    char str[20];
    scanf("%s", str);
    int len;
    while(str[len] != '\0'){
        len++;
    }
    printf("%d\n", len);
    return 0;
}