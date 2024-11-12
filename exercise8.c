#include <stdio.h>

int main() {
    int i;

    
    for (i = 1; i < 18; i++) {
        if(i%3!=0)
        {
            printf("Weber State!\n");

        }
        else if (i%3==0 & i%6!=0)
        {
            printf("Great, Great, Great!\n");
        }
        else if (i%6==0)
        {
            printf("Go Weber!\n");
        }
        else
        {
            printf("Bender Is Great!\n");
        }
    }

    return 0;
}