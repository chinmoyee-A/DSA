//traversal of an array
#include<stdio.h>
int main()
{
	int n,a[20];
	printf("\n Enter a size of the array : ");
	scanf("%d",&n);
	printf("\n Enter elements for array : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Print the array : ");
	for(int i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}

