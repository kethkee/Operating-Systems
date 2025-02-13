#include<stdio.h>
int main()
{
  int i,limit,total=0,x,counter=0,time_quantum;
  int wt=0,tt=0,bt[10],temp[10];
  float avgwt,avgtt;
  printf("\nEnter total number of processes:\t");
  scanf("%d",&limit);
  x=limit;
  for(i=0;i<limit;i++)
  {
      printf("\nEnter details of Process[%d]\n",i+1);
      printf("Burst time:\t");
      scanf("%d",&bt[i]);
      temp[i]=bt[i];
  }
printf("\nEnter Time Quantum:\t");
scanf("%d",&time_quantum);
printf("\nProcess ID\t\tBurst Time\tTurnaround Time\tWaiting Time\n");
for(total=0,i=0;x!=0;)
{
  if(temp[i]<=time_quantum && temp[i]>0)
{
  total += temp[i];
  temp[i]=0;
  counter=1;
}
else if(temp[i]>0)
{
  temp[i]-=time_quantum;
  total+=time_quantum;
}
if(temp[i]==0 && counter==1)
{
  x--;
  printf("\nProcess[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],total,total-bt[i]);
  wt+=total-bt[i];
  tt+=total;
  counter=0;
}
if(i==limit-1)
{
  i=0;
}
else
{
  i++;
}
}
avgwt=wt*1.0/limit;
avgtt=tt*1.0/limit;
printf("\n\nAverage waiting time:\t%f",avgwt);
printf("\nAverage turnaround time:\t%f\n",avgtt);
}



  
  
