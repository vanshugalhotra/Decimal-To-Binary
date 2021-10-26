#include <stdio.h>
#include <conio.h>

int main()
{

    int n, rem, size, arr_size, run;
    do
    {

        printf("Enter the number: \n");
        scanf("%d", &n);

        int bin[n];
        size = n;

        for (int i = 0; i < size; i++)
        {
            rem = n % 2;
            n = n / 2;
            bin[i] = rem;
            if (n == 1)
            {
                arr_size = i;
                // printf("%d \n", arr_size);
                break;
            }
        }
        bin[arr_size + 1] = 1;
        printf("The Binary representation of \"%d\" is ", size);
        for (int j = arr_size + 1; j >= 0; j--)
        {
            printf("%d", bin[j]);
        }

        do
        {
            printf("\n Wanna Run Again? (yes/no) (1/0): \n");
            scanf("%d", &run);

            if (run == 1 || run == 0)
            {
                if (run == 0)
                    printf("Bye!.....");
            }

            else
            {
                printf("Wrong option Enter only 1/0: \n");
                run = 2;
            }

        } while (run==2);

    } while (run != 0);

    getch();
    return 0;
}