#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int u; // multiplied by 2 algarisms' sum
    int uu = 0; // non multiplied sum
    int d; // digit (Multiplied)
    int dd; // non multiplied digit
    long c = 1; // multiplied by 2 numbers' divider
    long cc;
    int i; // counter index
    int sum;

    long n = 1;
    n = get_long("Number: ");
    if (n > 999999999999 && n < 10000000000000000) // 13 to 16 algarism numbers only
    {

        for (i = 1; n / c >= 1; i++) // 10 powering mechanism
        {
            c = c * 100;
            d = ((n % c) - (n % (c / 10))) / (c / 10); // isolating the algarism
            if (d >= 5)
            {
                u = u + 1 + ((d * 2) % 10);
            }
            else
            {
                u = u + (d * 2);
            }

            cc = c / 10;
            dd = ((n % cc) - (n % (cc / 10))) / (cc / 10);
            uu = uu + dd;
        }
        sum = uu + u; // sum of both results
        if (sum % 10 == 0)
        {
            if ((n >= 340000000000000 && n < 350000000000000) || (n >= 370000000000000 && n < 380000000000000))
            {
                printf("AMEX\n");
            }
            else if (n >= 5100000000000000 && n < 5600000000000000)
            {
                printf("MASTERCARD\n");
            }
            else if ((n >= 4000000000000 && n < 5000000000000) || (n >= 40000000000000 && n < 50000000000000) || (n >= 400000000000000
                     && n < 500000000000000) || (n >= 4000000000000000 && n < 5000000000000000))
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n"); 
            }
        }
        else
        {
            printf("INVALID\n"); 
        }
    }
    else
    { 
        printf("INVALID\n");
    }
}