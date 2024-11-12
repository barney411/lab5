//Sarah Barney
//ECE 1400
//Lab5, Exercise6

#include <stdio.h>
#include <math.h>



// Factorial
double factorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } else 
    {
        return n * factorial(n - 1);
    }
}

//MAIN
int main() 
{
    int num_coins = 6;
    float prob_heads = 0.5; // Probability heads 
    //float total_outcomes = pow(2, num_coins); // 2^n possible outcomes for n coin tosses 
    int rolled_heads = 0; // 
     for(int rolled_heads = 0; rolled_heads < 7; rolled_heads++)
        {double probability =  ((factorial(num_coins)) /  ((64)*((factorial(rolled_heads) * factorial(num_coins - rolled_heads)))));
            printf("Probability of getting %d heads out of %d coins tossed: %.4f\n", rolled_heads, num_coins, probability);
        }
    return 0;
}

