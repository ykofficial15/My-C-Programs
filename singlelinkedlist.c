#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
int main()
{struct node *current=NULL;
    struct node *head=NULL;
head=malloc(sizeof(struct node));
current=malloc(sizeof(struct node));
    head->data=45;
    head->link=current;
head->data=98;
head->link=NULL;
    printf("%d",head->data);
return 0;
}
