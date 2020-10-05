#include<stdio.h>
int main()
{
	int arr[50],pos,c,n;
	printf("enter number of elements in array : ");
	scanf("%d",&n);
	printf("Enter %d element\n",n);
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 	
	 }
	printf("enter the location where you want to delete it : \n");
	scanf("%d",&pos);
	 
	 if(pos<0||pos>n)
	 {
	 	printf("deletion not possible.");
	 }
	 else
	 {
	 	for(int i=pos-1;i<n-1;i++)
	 	{
	 		arr[i]=arr[i+1];
		 }
	 	printf("resultant array : \n");
	 	for(int i=0;i<n-1;i++){
	 		printf("%d \n",arr[i]);
		 }
	 }
	 return 0;
}
