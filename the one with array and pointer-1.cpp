#include<stdio.h>
int main()
{
	int a[5],i;
	int *q=a;
	printf("enter array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",i+a);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",*(a+i));//can also write as a[i],i[a],*(a+i),*(q+i)
	}
}
