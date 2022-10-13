#include<stdio.h>
#include<math.h>
int main()
{   int n,i;
	printf("Enter the number of elements of the array ");
	scanf("%d",&n);
	int arr[n];
	int *p=arr;
	printf("Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	int N,j,check1,check2;
	float value1,value2;
	for(i=0;i<n;i++)
	{
		N=*(p+i);
		if(N==0)
		{
			printf(" 0 is a fibonacci number");
			
		}
		else
		{
		check1=5*N*N-4;
		check=5*N*N+4;
		value1=sqrt(check1);
		j=value1;
		if(j==value1)
		{
		  printf("The number %d is a fibonacci number",*(p+i));	 
		}
		else
		{
			value2=sqrt(check2);
			j=value2;
			if(j==value2)
			{
				printf("The number %d is a fibonacci number",*(p+i));
			}
		}
	  }
		
		
		
	 } 
	 
	
	return 0;
}
