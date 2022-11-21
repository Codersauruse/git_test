#include <stdio.h>

int main(void){
    int weight; // this is the weight of the water melon
    // get information about the weight of the watermelon
    scanf("%d",&weight);
    (weight % 2 == 0 && weight > 2)? printf("YES\n"): printf("NO\n");
    return 0;

}
