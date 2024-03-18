#include<stdio.h>
int binary(int *a,int size,int target)
{
int high,low,mid;
low=0;
high=size;
while(low<high){
	mid=low+(high-low)/2;
	if(a[mid]==target){
		return mid;
	}
	if (target>a[mid]){
		low=mid+1;
	}
	else{
	high=mid;
	}
	 
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
	int index=binary(a,size,target);	
	printf("target found at %d",index);

	return 0;
}
