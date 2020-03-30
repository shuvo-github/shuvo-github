
#include<stdio.h>
int main()
{
	int p[20],bt[20],at[20], su[20], wt[20],tat[20],i, k, n, temp;
	float wtavg, tatavg;
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i] = i;printf("Enter the Arrival Time of Process %d : ", i);
		scanf("%d",&at[i]);
		printf("Enter the Burst Time of Process %d : ", i);
		scanf("%d",&bt[i]);
		printf("Select Priority (0/1) ? : ");
		scanf("%d", &su[i]);
	}
