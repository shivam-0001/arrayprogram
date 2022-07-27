#include<stdio.h>
#include<conio.h>
int main(void)
{

int i,j,n,a[10][10],sumr=0,suml=0;
printf("enter the terms= ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("\nenter the element");
		scanf("\n%d",&a[i][j]);
		
	}
	}
	for(i=0;i<n;i++)
	
{
	for(j=0;j<n;j++)
	{
		printf("\t%d",a[i][j]);
		if(i==j)
			suml+=a[i][j];
		if((i+j)==2)
			sumr+=a[i][j];	
	}
	printf("\n");

}
printf("\n tranpose matrix");
	
	for(i=0;i<n;i++)
	
{
	for(j=0;j<n;j++)
	{   
		printf("\t%d",a[j][i]);
	
		
		
	}
	printf("\n");

}
printf("left diagonal=%d",suml);
printf("right diagonal =%d",sumr);
	return 0;
}
