#include<stdio.h>
void linear(int *a,int size,int target)
{
int flag=0;
	for (int i=0;i<size;i++)
	{
		if (a[i]==target){
			printf("\nElement is found at index %d",i);
			flag=1;
			break;
		}
	
	}
	if (flag==0){
		printf("Target not found");
	}
}

int main()
{
	int size ,target;
	printf("Enter the size: ");
	scanf("%d",&size);
	printf("enter target:");
	scanf("%d",&target);
	int a[size];
	for(int i=0;i<size;i++)
		{
		printf("Enter element :");
		scanf("%d",&a[i]);
		}
		printf("\narray is  :");
	for(int i=0;i<size;i++)
		{
		printf("%d ",a[i]);
			
		 
		}
	linear(a,size,target);	

	return 0;
}
