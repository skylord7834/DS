#include<stdio.h>
void selection(int *a,int size)
{
	int min ,temp,i,j;
	for (i=0;i<size-1;i++){
		min=i;
		for (j=i+1;j<size;j++){
			if (a[min]>a[j]){
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
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
	selection(a,size);	
	printf("\nThe sorted array is : ");
	for (int i=0;i<size;i++)
		{
	printf("%d ",a[i]);
		}
	return 0;
}
