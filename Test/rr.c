#include<stdio.h>


void main(){
    int n,i,time=0,tq;
    int bt[10],ct[10],tat[10],rem_bt[10],wt[10];

    printf("Enter the number of process: ");
    scanf("%d",&n);

    printf("Enter the BT: ");
    for(i=0;i<n;i++){
        printf("Enter the BT of %d \n",i);
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }

    printf("Enter the time quantum: ");
    scanf("%d",&tq);

    int count=0;

    while (1)
    {
        count=0;
        for ( i = 0; i < n; i++)
        {
            if(rem_bt[i]<= 0){
                count++;
                continue;
            }

            if(rem_bt[i] <= tq){
                time += rem_bt[i];
                ct[i] = time;
                rem_bt[i]=0;
                count++;
            }
            else{
                time += tq;
                rem_bt[i] -= tq;
            }
        }
        
        if(count == n){
            break;
        }
    }
    
    for(i=0;i<n;i++){
        tat[i] = ct[i];
        wt[i] = tat[i] - bt[i];
    }

    printf("Process\tBT\tTAT\tWT\tCT\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t%d\t%d\t%d\n",i,bt[i],tat[i],wt[i],ct[i]);
    }
}