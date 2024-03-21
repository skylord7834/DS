// write a program to print the sum of upper and lower triangular elements of a square matrix
#include<stdio.h>
int sumUpperTriangle(int a[3][3]){
int i,j;
int sum=0;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
		if (j>=i){
			sum+= a[i][j];
		}	
	}
}
return sum;
}
int sumLowerTriangle(int a[3][3]){
int i,j;
int sum=0;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
		if (j<=i){			
			sum+= a[i][j];
		}		
	}	
}
return sum;
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
int sumupper= sumUpperTriangle(a);
printf("the sum of the upper triangular elements of matrix is %d",sumupper);
int sumlower= sumLowerTriangle(a);
printf("\nthe sum of the lower triangular elements of matrix is %d",sumlower);

return 0;
}
