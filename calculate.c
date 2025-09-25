#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float a = 0;
    float sum = 0;
    int counter = 0;
    float times = 0;
    float wantedscore = -1;

    printf("Only type from 0 - 100, -1 if you are done\n");
    while(true)
    {
        printf("Enter your score: ");
        scanf("%f", &a);
        if (a == -1)
        {
            break;
        }
        else if ((a < 0) || (a > 100))
        {
            printf("Only type from 0 - 100\n");
        }
        else
        {
            sum += a;
            counter++;
        }
    }

    printf("You did %i attempts\n", counter);
    printf("Your average is %.2lf\n", sum / (float) counter);

    printf("What is your average score do you want? (from 0 - 100): ");

    while((wantedscore < 0) || (wantedscore > 100))
    {
        scanf("%f", &wantedscore);
        if ((wantedscore < 0) || (wantedscore > 100))
        {
            printf("You have to enter from 0 - 100: ");
        }
    }

    times = (wantedscore * (float) counter - sum) / (100 - wantedscore);

    times = ceil(times);

    if (times <= 0)
    {
        printf("You passed your aim, you don't need to do anymore\n");
    }
    else
    {
        printf("You need to do at least %0.lf attempts with 100%% score to get the average of %0.2lf%%\n", times, wantedscore);
    }

    printf("Press any key to quit...\n");
    _getch();
    return 0;
}


