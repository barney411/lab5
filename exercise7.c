#include <stdio.h>

//is_prime returns "true" on 1, "false" on 0 --- C Bool type kludge
int is_prime(int i, int flag)
{
int j, prime_counter; //may deprecate counter if not needed.

        // Loop to check if i is divisible by any number other than 1 and itself
        for (j = 2; j <= i / 2 && flag == 1; j++) 
        {
            if (i % j == 0) 
            {   
                flag = 0; //NOT PRIME, Flag OFF
                return 0;
            }
           
            if (flag == 1) 
            {
                prime_counter++;  
                return 1; 
                   
            }
        }

}

//MAIN
int main() 
{
    int i, j, flag, prime_counter = 0;

    // Label
    printf("The prime numbers -between- 1 and 199 are:\n");

    // Loop to check prime numbers from 2 to 199
    for (i = 2; i < 199; i++) 
    {
        
        flag = 1; //2 is the smallest prime number, flag ON
        if (is_prime(i, flag))
        {
            printf("%3d is prime.\n", i);
        }
        
    }
    
    printf("\n");

    return 0;
}