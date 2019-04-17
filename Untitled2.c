#include<stdio.h>
#include<conio.h>

int main()
{
    int BT[10],p[10],n,temp,i,j,wt[10],sum=0,s=0,turntime[10];
    float avg;
    printf("enter total no process:");
    scanf("%d",&n);
    printf("\n enter burst time for each process:");
    
    for(i=0;i<n;i++)
    {
      printf("\nburst time of process P %d:",i);
      scanf("%d",&BT[i]);
      p[i]=i;
    }

      for(i=0;i<n-1;i++)
       {
         for(j=i+1;j<n;j++)
          { 
            if(BT[i]>BT[j])
                {
                 	temp=BT[i];
                 	BT[i]=BT[j];
                 	BT[j]=temp;
                 	temp=p[i];
                 	p[i]=p[j];
                 	p[j]=temp;
                  }
           }

        }
      wt[0]=0;
      for(i=1;i<n;i++)
       {
	 sum+=wt[i];
       } 
      
    avg=(float)sum/n;
    printf("\n waiting time for each process:");
     for(i=0;i<n;i++)
	{
           printf("\n waiting time for process p%d is %d sec.",p[i],wt[i]);  

	}

         printf("\n Average waiting time is %f sec.",avg);
         
    for (i=1;i<n;i++)
    {
    	turntime[i]=BT[i]+wt[i];
    	printf("\nTurnaround time for p[%d] is : %d ",i,turntime[i]);
    	s=s+turntime[i];
    	
	}
	
	int avgturn= s/n;
	printf("\nAverage turn around time : %d ",avgturn);
   	 getch();
	 return 0;
}     
     
