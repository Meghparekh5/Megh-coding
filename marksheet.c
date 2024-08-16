#include <stdio.h>

int main()
{
    int rollNo, sub1, sub2, sub3, total;
    char name[20];
    float avg;
    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("Enter your Roll-No:");
    scanf("%d", &rollNo);

    printf("Enter your name:");
    scanf("%s", &name);

    printf("Enter Your Sub1 Marks:");
    scanf("%d", &sub1);

    printf("Enter Your Sub2 Marks:");
    scanf("%d", &sub2);

    printf("Enter Your Sub3 Marks:");
    scanf("%d", &sub3);

    if (sub1 > 100 || sub2 > 100 || sub3 > 100)
    {
        printf("\n worng input");
    }
    else
    {
        printf("\ntotal is= %d", total);
        printf("\navg is =%.2f,avg");

        if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35)

        {
            printf("\npass");

            if (avg >= 80)
            {
                printf("\ngrade is A");
            }

            else if (avg >= 60)
            {
                printf("\ngrade is b");
            }
            else if (avg >= 50)
            {
                printf("\ngrade is c");
            }

            else
            {
                printf("\npass class");
            }
        }

        else
        {
            printf("\nfail");
        }
    }
}
