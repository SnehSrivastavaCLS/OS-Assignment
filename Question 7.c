	//Question 7
	#include<stdio.h>
	int main(void)
	{
		int p, t[20],n;
		int rTime[20];
		printf("Number of processes:\n ");
		scanf("%d",&n);
		printf("Enter the data for the processes\n");
		for(p=0;p<n;p++)
		{
			printf("Response time of Processes %d (in milliseconds):\n ",p);
			scanf("%d",&rTime[p]);
			if(rTime[p]<1000)
			{
				t[p]=1;
			}
			else
			{
				t[p]=0;
			}
	
		}
		printf("Process Number\tResponse Time\tType\t\tPriority");
		for(p=0;p<n;p++)
		{
			printf("\nP%d\t\t%dms\t\t",p,rTime[p]);
			if(t[p]==1)
			{
				printf("Interactive\tHigh");
			}
			else
			{
				printf("Non-Interactive\tLow");
			}
	
		}
		return 0;
	}
