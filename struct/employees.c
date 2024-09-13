
#include <stdio.h>
struct Employees{
    char name[50];
    int salary;
    int id;
};

void fun(struct Employees e1){
    printf("name: %s\nid: %d\nsalary: %d\n",e1.name,e1.id,e1.salary);
} 

int main()
{
 struct Employees e1;
 
     scanf("%s %d %d",e1.name,&e1.id,&e1.salary);
 
     fun(e1);
    return 0;
}



