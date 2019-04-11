int main()
{
	int n,i;
	printf("Enter the no of process");
	scanf("%d",&n);
	int process[n];
	printf("now enter the arrival time of process");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&process[i]);
	}
	int bursttime[n];
	printf("now enter the burst time of process");
	for( i=0;i<n;i++)
	{
		scanf("\n%d",&bursttime[i]);
	}
     findavgTime(process, n, bursttime);
     return 0;
 }
