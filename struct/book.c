
#include <stdio.h>
struct Book{
    char title[50];
    char author[50];
    int price;
};

int main()
{
 struct Book B[5];
 for(int i=0;i<5;i++){
     scanf("%s %s %d",B[i].title,B[i].author,&B[i].price);
 }
for(int i=0;i<5;i++){
     printf("Title: %s\nAuthor: %s\nPrice: %d\n",B[i].title,B[i].author,B[i].price);
 }
    return 0;
}

