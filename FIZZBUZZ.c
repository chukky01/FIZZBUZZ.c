//Start with including stdio.h. Always do this
#include <stdio.h>

int main(void)
{
    //Cycle through from 1 to 100
    for(int i = 1; i <= 100; i++)
    {
        //if i is divisible by both 5 and 3
        //print FIZZBUZZ
        if(i % 15 == 0)
        {
            printf("%d FIZZBUZZ\n", i);

        }
        //if i is divisible by 3 but not by 5
        //print FIZZ
        else if (i % 3 == 0)
        {
            printf("%d FIZZ\n", i);

        }
        //if i is divisible by 5 but not by 3
        //print BUZZ
        else if (i % 5 == 0)
        {
            printf("%d BUZZ\n", i);

        }
        //if it is not divisible by any of the numbers 3,5, 15(that is both 5 and )
        else{
            printf("%d\n", i);

        }
    }

    return 0;
}
