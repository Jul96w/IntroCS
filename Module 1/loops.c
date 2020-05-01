//for (int i = 0; i < 5; i++)
//  for (int j = 0; j < 5; j++)
//        printf("i = %d, j = %d\n", i, j);
// Transfer the code above into a programm that uses only one for loop instead of a double for loop
// Hint: maybe division and modulo can be helpful

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 25; i++)
    {
        printf("i = %d, j = %d\n", i/5, i%5);
    }
 
}


// -------------------------- OLD SOLUTIONS ----------------------------------- 
// 
// int main(void)
// {
//     for (int i = 0, j = 0; j < 5; j++)
//     {
//         if (i == 5)
//         {return 0;}

//         printf("i = %d, j = %d\n", i, j);
//         if (j == 4)
//         {
//             i++;
//             j = -1;
//         }
//     }   
// }

// int main(void)
// {
//     for (int i = 1, j = 0; i < 6; i++)
//     {
//         if (j < 5)
//         {i = i - 1;}
//         if (j == 5)
//         {j = 0;}
//         if (i == 5)
//         {return 0;}
//         printf("i = %d, j = %d\n", i, j);
//         j = (j + 1) % 6;

//     }   
// }