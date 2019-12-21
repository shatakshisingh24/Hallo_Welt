//Matrix addition
#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(int);
int main()
{    int n,i,j;
     time_t s,e;
	 double tt;
	printf("Enter size of square matrix:");
	scanf("%d",&n);
	int a[n][n],b[n][n],sum[n][n];
	printf("Enter %d elements for matrix a:\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d elements for matrix b:\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	s=clock();
	printf("Sum of the given matrices is:\n");
	
		for(i=0;i<n;i++)
	{  
	    delay(2);
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	e=clock();
	tt=((double)(e-s))/CLOCKS_PER_SEC;
	printf("Time taken:%lf",tt);
	return 0;
}
void delay(int delay)
{
 int now=time(NULL);
 int later=now+delay;
 while(now<=later)now=time(NULL);
}
