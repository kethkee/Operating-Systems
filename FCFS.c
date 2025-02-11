#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number of processes:");
scanf("%d",&n);
int btime[n];
int wtime[n];
int ttime[n];
wtime[0]=0;
float avgwt=0,avgtt=0;
printf("Enter the burst time:\n");
for(i = 0;i < n;i++)
{
printf("Process-%d burst time : ",i+1);
scanf("%d",&btime[i]);

}
for(i=1;i<n;i++)
{
wtime[i]=wtime[i-1]+btime[i-1];
avgwt+=wtime[i];
}
avgwt/=n;
for(i=0;i<n;i++)
{
ttime[i]=wtime[i]+btime[i];
avgtt+=ttime[i];
}
avgtt/=n;
printf("Process\tBurst Time\tWait Time\tTurn Around Time\n");
for(i=0;i<n;i++)
{
printf("P%d\t%d\t\t%d\t\t%d\n",i+1,btime[i],wtime[i],ttime[i]);
}
printf("\n========================================================================\n");
printf("The average waiting time:=%f\n",avgwt);
printf("The average turn around time:=%f\n",avgtt);
int temp=0;
printf("\n========================================================================\n");
printf("Gantt Chart\n\t");
for(i=0;i<n;i++)
{
printf(" P[%d]\t",i+1);
}
printf("\n");
printf("\n========================================================================\n");
for(i=0;i<=n;i++)
{
printf("\t%d",temp);
temp=temp+btime[i];
}
printf("\n");
return 0;
}
