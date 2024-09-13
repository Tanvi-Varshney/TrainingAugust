#include <stdio.h>
struct Student{
    char name[50];
    int age;
    char grade;
};

int main()
{
    struct Student S1;
    scanf("%s",S1.name);
scanf("%d",&S1.age);
scanf("%s",&S1.grade);

printf("%s  %d  %c",S1.name,S1.age,S1.grade);
    return 0;
}
