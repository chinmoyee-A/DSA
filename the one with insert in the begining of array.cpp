#include<stdio.h>
int main()
{
	int a[20],n,i,num;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	
	printf("enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number you wanna insert : ");
	scanf("%d",&num);
	for(i=n-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=num;
	n++;
	printf("array is :");
     for(i=0;i<n;i++)
     {
     	printf(" %d ",a[i]);
	 }
	return 0;
}
