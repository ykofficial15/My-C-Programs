#include<stdio.h>
#include<conio.h>
#define MAX 50
int stack[MAX+1],top=0;
void main()
{
    void create(),traverse(),push(),pop();
    create();
    printf("\n stack is:\n");
    traverse();
    push();
    printf("after push an element the stack is:\n");
    traverse();
    pop();
    printf("after pop an element the stack is:\n");
    traverse();
    getch();
}
void create(){
    char ch;
    do{
        top++;
        printf("input element:");
        scanf("%d",&stack[top]);
        printf("press<y>for more element:\n");
        ch=getch();
    }
    while(ch=='y');
}
void traverse()
{
    int i;
    for(i=top;i>0;--i)
    printf("%d\n",stack[i]);
}
void push()
{
    int m;
    if(top==MAX)
    {
        printf("stack is overflow");
        return;
    }
    printf("input new element to insert");
    scanf("%d",&m);
    top++;
    stack[top]=m;
}
void pop()
{
    if(top==0)
    {
        printf("stack is underflow\n");
        return;
    }
    stack[top]='\0';
    top--;
}
