#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int other_sum, even_sum = 0;
    long number = get_long("Number: ");
    long number2 = number;
    long first = number;
    long number3 = number;
    // printf("Number: %ld\n", number);

    //Calculating the sum of every other digit multiplied by 2
    while (number > 9)
    {
        int other_digit = ((number / 10) % 10) * 2;
        //printf("Sum: %i\n", other_digit);
        int other_products = other_digit / 10 + other_digit % 10;
        //printf("Sum: %i\n", other_products);
        other_sum = other_sum + other_products;
        number = number / 100;
    }
    printf("Other Sum: %d\n", other_sum);

    while (number2 > 0)
    {
        int even_digit = number2 % 10;
        even_sum = even_sum + even_digit;
        number2 = number2 / 100;
    }
    printf("Even Sum: %i\n", even_sum);

    //check if total modulo 10 is congruent to 0
    int total = (other_sum + even_sum) % 10;
    if (total != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    //get the first two numbers
    while (first > 99)
    {
        first = first / 10;
    }
    
    //if total = 20 and the first two numbers are correct, then print out the credit card name
    if (first == 34 || first == 37)
    {
      printf("AMEX\n");  
    }
    else if (first >= 51 && first <= 55)
    {
      printf("MASTERCARD\n");  
    }     
    else if (first >=40 && first <= 49)
    {
      printf("VISA\n");  
    } 
    else {
        printf("INVALID\n");
    }

}
