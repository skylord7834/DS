#include<stdio.h>
void insertion(int a[],int size)
{
	for (int i=1;i<size;i++){
	int t=a[i];
	int j=i-1;
	while(a[j]>t && j>=0){
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=t;
	}
}

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
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
	insertion(a,size);	
	printf("\nThe sorted array is : ");
	for (int i=0;i<size;i++)
		{
	printf("%d ",a[i]);
		}
	return 0;
}
