#include <stdio.h>

int main(void){
    // how many numbers do them view and their solutions and how many problems do they solve
    int number,sol_p,sol_V,sol_T,count = 0;
    scanf("%d",&number);
    for( int i = 0; i < number; i++){
        scanf("%d%d%d",&sol_p,&sol_T,&sol_V);
        if (sol_p + sol_T + sol_V >= 2){
            count++;

        }

    }
    printf("%d\n",count);
    return 0;
    
}