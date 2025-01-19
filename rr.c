#include<stdio.h>

void main(){

    int n,tq,bt[10],wt[10],tat[10],count=0,rem_bt[10],ct[10];
    int i;
    float avg_wt=0,avg_tat=0;
    int time=0;

    printf("Enter The No Of Process: ");
    scanf("%d" , &n);

    printf("Enter the BT Of Every Process: \n");
    for(i=0;i<n;i++){
        printf("Enter the BT of process- %d\n",i);
        scanf("%d",&bt[i]);
        rem_bt[i] = bt[i];
    }

    printf("Enter The Time Quantum: ");
    scanf("%d",&tq);

    while (1)
    {
        for(i=0;i<n;i++){
            if(rem_bt[i]<=0){
                count++;
                continue;
            }
            if(rem_bt[i]>0 && rem_bt[i]<=tq){
                time += rem_bt[i];
                ct[i] = time;
                rem_bt[i]=0;
            }
            else{
                time += tq;
                rem_bt[i] -= tq;
            }
        }

        if(count==n){
            break;
        }
    }
    
    for(i=0;i<n;i++){
        tat[i] = ct[i]-0;
        wt[i] = tat[i]-bt[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    printf("\nProcess\t\tBT\t\tCT\t\tWT\t\tTAT");
    for ( i = 0; i < n; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,bt[i],ct[i],wt[i],tat[i]);
    }
    

    printf("Average WT: %d\n" , avg_wt/n);
    printf("Average TAT: %d\n" , avg_tat/n);


}