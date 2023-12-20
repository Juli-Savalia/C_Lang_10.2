#include<stdio.h>

int add(int b[100] , int c)
{

	int sum=0,i;
	for(i=0;i<c;i++)
	{
		sum=sum+b[i];
	}
	return sum;
}

void main()
{
	int i,n;
	printf("Enter the Size of an array:-");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("The sum of array is:-%d",add(arr,n));
}
