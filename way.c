#include <stdio.h>
#include <string.h>
// I create a container to store strings
typedef struct sentences

{
    char word[101];
}
sentences;


int main(void){
    // getting some input strings. how much do you want lol :)
    int number;
    scanf("%d",&number);
    sentences sentence[number];
    for(int i = 0; i < number; i++ ){
        scanf("%s",sentence[i].word);
    }
    for(int j = 0; j < number;j++){
        if(strlen(sentence[j].word) <= 10){
            printf("%s\n",sentence[j].word);

        }
        else{
            printf("%c",sentence[j].word[0]);
            printf("%ld",strlen(sentence[j].word)-2);
            printf("%c\n",sentence[j].word[strlen(sentence[j].word)-1]);

        }
    }
    return 0;


}