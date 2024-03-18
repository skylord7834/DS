#include<stdio.h>
#define size 100
int binary(int a[],int target,int low, int high){
    int mid;
	if (low>high){
		return -1;	
	}		
	
	else{
		mid=(low+(high-low))/2;
		
		
		if (a[mid]==target){
			return mid;
		}
		else if (target>a[mid]){
			return binary(a,target,mid+1,high);
		}
		else{
			return binary(a,target,low,mid-1);
		}
		
	}
}
int main()
{
	int a[size];
	int s,target;
	printf("Enter the size: ");
	scanf("%d",&s);
	
	printf("enter target:");
	scanf("%d",&target);
	
	
	for(int i=0;i<s;i++)
		{
		printf("Enter element :");
		scanf("%d",&a[i]);
		}
		printf("\narray is  :");
		
	for(int i=0;i<s;i++)
		{
		printf("%d ",a[i]); 
		}
		
		
	int low=0;
	int high=s-1;
	
	int index=binary(a,target,low,high);	
	
	if (index==-1){
		printf("element not found");}
	else{
		
	printf("target found at");
	}

	return 0;
	}
