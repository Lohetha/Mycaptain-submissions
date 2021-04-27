#include <stdio.h>

struct employee{
    unsigned int emp_no;
    char emp_name[30]; 
    char dept_name[20]; 
    unsigned int salary;
}e[20];

void display(){
    int i;
    printf("Emp_number   Emp_name   Dept_name   Salary\n");
    for(i=0;i<20;i++){
      printf("%i   %s   %s   %i\n",e[i].emp_no,e[i].emp_name,e[i].dept_name,e[i].salary);
    }
}

int main()
{   int i;
    printf("Enter employee details:");
    for(i=0;i<20;i++){
        scanf("%i%s%s%i",&e[i].emp_no,e[i].emp_name,e[i].dept_name,&e[i].salary);
    }
    display(e);
    return 0;
}
