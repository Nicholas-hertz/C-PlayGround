#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max = 10;
    int min = 1;
    unsigned int seed = time(0);

    int randomNumber = rand_r(&seed) % (max - min + 1) + min;
    int choice = 0;

    while(randomNumber != choice){
        printf("Guess your a number: ");
        scanf("%d", &choice);

        if(choice > randomNumber){
            printf("Your guess was too high...\n");
        }
        else if (choice < randomNumber) {
            printf("Your guess was too low...\n");
        }
    }

    printf("You guess correctly! The number %d was the correct choice!\n", choice);

    return 0;
}