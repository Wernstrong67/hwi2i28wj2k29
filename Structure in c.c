#include <stdio.h>
#include<string.h>
int main()
{
   
struct employees 
{
  int  id;
 char name[20];
int  salary;
};
// input the number of employees 
int a;
printf("Enter the total number of employees ");
scanf("%d",&a); 

//input the information of employees 

struct employees info[100];
for(int i=0; i<a; i++)
{
  printf("%d. ",i+1) ;      //for serial number 
printf("Enter the ID number : ");
scanf("%d",&info[i].id);
printf("    Enter the name : ") ;
scanf("%s",&info[i].name);
printf("    Enter the salary :");
scanf("%d",&info[i].salary);

} 

//display the output 

for(int i=0; i<a; i++)
{
printf(" \n%d. ",i+1) ;
printf(" I'd      : %d \n",info[i].id);
printf("    Name: %s \n",info[i].name);
printf("    Salary: %d \n",info[i].salary);
} 
   return 0;
}
