#include <stdio.h>

void main()
{
    int n, i, j, time = 0;
    int p[10], at[10], bt[20], tat[10], ct[10], wt[10];
    float avg_tat = 0.0, avg_wt = 0.0;
    printf("Enter The No Of Process: ");
    scanf("%d", &n);

    printf("Enter the process no: \n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &p[i]);
    }
    printf("Enter the process Arrival Time: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the AT of process- %d\n", i);
        scanf("%d", &at[i]);
    }

    printf("Enter the BT Of Every Process: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the BT of process- %d\n", i);
        scanf("%d", &bt[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (at[j] > at[j + 1])
            {
                int temp = at[j];
                at[j] = at[j + 1];
                at[j + 1] = temp;

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (at[i] > time)
        {
            time++;
            i--;
            continue;
        }
        time += bt[i];

        ct[i] = time;
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("\nProcess\t\tAT\t\tBT\t\tCT\t\tWT\t\tTAT");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", p[i], at[i], bt[i], ct[i], wt[i], tat[i]);
    }

    printf("Average WT: %d\n", avg_wt / n);
    printf("Average TAT: %d\n", avg_tat / n);
}