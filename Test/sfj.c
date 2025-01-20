#include<stdio.h>
void main(){
     int n, i, j, time = 0,temp;
    int bt[10], tat[10], wt[10], ct[10], p[10];

    printf("Enter the no of process");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
         printf("Enter the name of Process-%d\n",i);
        scanf("%d", &p[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the Bt of Process-%d\n",i);
        scanf("%d", &bt[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(bt[j]>bt[j+1]){
                temp = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = temp;

                temp=p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }

    for ( i = 0; i < n; i++)
    {
        time += bt[i];
        ct[i] = time;
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
    }
    
     printf("Process\tBT\tTAT\tWT\tCT\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\t%d\t%d\n",p[i],bt[i],tat[i],wt[i],ct[i]);
    }
}