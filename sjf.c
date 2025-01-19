#include <stdio.h>

void main()
{
    int n, i, j, temp;
    int p[10], bt[10], wt[10], tat[10], ct[10];

    float avg_wt = 0.0, avg_tat = 0.0;

    printf("Enter The No Of Process: ");
    scanf("%d", &n);

    printf("Enter the process no: \n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &p[i]);
    }

    printf("Enter the BT Of Every Process: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the BT of process- %d\n", i);
        scanf("%d", &bt[i]);
    }

    // Sort the processes according the burst time
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    int time = 0;

    for (i = 0; i < n; i++)
    {
        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i] - 0;
        wt[i] = tat[i] - bt[i];
    }

    printf("\nProcess\t\tBT\t\tCT\t\tWT\t\tTAT");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d", p[i], bt[i], ct[i], wt[i], tat[i]);
    }

    printf("Average WT: %d\n", avg_wt / n);
    printf("Average TAT: %d\n", avg_tat / n);
}