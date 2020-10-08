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
	         
			a[n]=num;
			n++;
			
		
	printf("array is :");
     for(i=0;i<n;i++)
     {
     	printf(" %d ",a[i]);
	 }
	return 0;
}
