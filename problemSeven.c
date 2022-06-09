#include <stdio.h>
#include <string.h>


//Question 7: Write a program in C to find maximum occurring character in a string

void maxOccChar(char *str){
    int i,j,max,len=strlen(str);
    char maxChar = str[0];
    int freq[len];
    for (i = 0; i < len;i++){
        freq[i] = 1;
        for (j = i + 1; j < len;j++){
            if(str[i]==str[j] && str[i]!=' ' && str[i]!='0'){
                freq[i]++;
                str[j] = '0';
            }
        }
    }
    max = freq[0];
    for (i = 0; i < len;i++){
        if(max<freq[i]){
            max = freq[i];
            maxChar = str[i];
        }
    }
    printf("Maximum occuring character: %c and count is: %d\n", maxChar, max);
}


int main(void){
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    maxOccChar(str);
}
