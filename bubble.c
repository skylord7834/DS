#include<stdio.h>
void bubble(int a[],int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for (j=0;j<size-i-1;j++)
		{
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	bubble(a,size);	
	printf("\nThe sorted array is : ");
	for (int i=0;i<size;i++)
		{
	printf("%d ",a[i]);
		}
	return 0;
}
