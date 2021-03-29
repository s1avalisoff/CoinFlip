#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    int fn, i;
    if(argv[1] == NULL){
        printf("Enter number of flips: ");
        scanf("%i", &fn);
        printf("\n");
    }
    else{
        fn = atoi(argv[1]);
    }
    srand(time(NULL));
    for(int f = 0; f < fn; f+=1){
        i = rand();
        if(i % 2 == 0){
            printf("Heads!\n");
        }
        else{
            printf("Tails!\n");
        }
    }
    return 0;
}
