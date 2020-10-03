//insertion in array
#include<stdio.h>
int main()
{
	int n, a[20],num,pos ;
	printf("\n enter size : ");
	scanf("%d",&n);
	printf("enter the element you want to insert : ");
	scanf("%d",&num);
	printf("enter position to be inserted : ");
	scanf("%d",&pos);
	printf("enter elements : \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	if(pos<0 || pos>n+1)
	{
		printf("\n Invalid!");
	}
	else
	{
		for(int i=n-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=num;
		n++;
	  printf("Print the array : ");
	 for(int i=0;i<n;i++)
	 {
		printf(" %d ",a[i]);
	 }
	
}
 
	return 0;
}
