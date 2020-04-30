#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0, j = 0; j < 5; j++)
    {
        if (i == 5)
        {return 0;}

        printf("i = %d, j = %d\n", i, j);
        if (j == 4)
        {
            i++;
            j = -1;
        }
    }   
}


// -------------------------- OLD SOLUTION ----------------------------------- 
// 
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