//write a program using structure datatype for a student database.
#include<stdio.h>
struct student{
	char name[20];
	int age;
	int rollno;
	
};

int main()
{
int i;
int n;
printf("enter the value:");
scanf("%d",&n);
 struct student s[n];
for (i=0;i<n;i++){
	printf("Enter student %d name:",i+1);
	scanf("%s",s[i].name);
	printf("Enter student %d age: ",i+1);
	scanf("%d",&s[i].age);
	printf("Enter student %d rollno: ",i+1);
	scanf("%d",&s[i].rollno);
	printf("\n");
}
printf("\n Student database content: \n");
for (i=0;i<n;i++){
	printf(" \nstudent %d name:%s",i+1,s[i].name);
	printf(" \nstudent %d age: %d ",i+1,s[i].age);
	printf(" \nstudent %d rollno:%d ",i+1,s[i].rollno);
	printf("\n");
}
return 0;
}
