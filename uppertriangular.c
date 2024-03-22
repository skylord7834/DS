// write a program to print the upper triangular elements of a square matrix
#include<stdio.h>
int upperTriangle(int a[3][3]){
int i,j;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
		if (j>=i){
			printf(" %d ",a[i][j]);
		}
		else{
			printf("0");
			}
	}
	printf("\n");
}
}
int main(){
int a[3][3];

int i,j;
for(i=0;i<3;i++){
    for (j=0;j<3;j++){
    	printf("Enter element[%d][%d]",i,j);
    	scanf("%d",&a[i][j]);
    	}
    }
for(i=0;i<3;i++){
    for (j=0;j<3;j++){
    	printf("%d ",a[i][j]);
    	
    	}
    	printf("\n");
    }
upperTriangle(a);
return 0;
}
