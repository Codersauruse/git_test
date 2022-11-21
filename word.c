#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char word[100];
    int numOfCapitalLetters = 0, numOfSimpleLetters = 0;
    scanf("%s",word);
    for (int i = 0; i < strlen(word);i++ ){
        if (isupper(word[i])){
            numOfCapitalLetters++;
        }
        else{
            numOfSimpleLetters++;
        }

    }
     for (int j = 0; j < strlen(word);j++ ){
        if (numOfCapitalLetters <= numOfSimpleLetters){
           word[j] = tolower(word[j]);
        }
        else{
            word[j] = toupper((word[j]));
        }

    } 
    printf("%s",word);  

}