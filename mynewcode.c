#include<stdio.h>
void avgWt(int process[],int bt[],int wt[],int n)
{
	int rbt[n],ct=0,i;
	for(i=0;i<n;i++)
	{
		rbt[i]=bt[i];
	}
	while(1)
	{
		int flag=1,i;
		for( i=0;i<n;i++)
		{
			if(rbt[i]>0)//means process is pending
			{	flag=0;
				if(rbt[i]>1)//in ques quantam is 1
				{
					rbt[i]=rbt[i]-1;
					ct=ct+1;
				}
				else
				{	ct=ct+1;
					wt[i]=ct-bt[i];
					rbt[i]=0;					
				}
			}
		}
		if(flag==1)
		break;
	}
}
void findavgTime(int process[], int n, int bt[]) 
{
int wt[n],i, total_wt = 0; 
    avgWt(process, bt, wt,n); 
    printf("Processes	Arrival time   Burst time   Waiting time\n"); 
    for (i=0; i<n; i++) 
    { 
        total_wt = total_wt + wt[i]; 
        printf(" %d \t\t%d \t\t %d\t\t%d\n",i+1,i,bt[i],wt[i]);
         }
         float f=(float)total_wt / (float)n;
         printf("the average waiting time is %f",f);
     }

