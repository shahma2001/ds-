#include <stdio.h>
int stack[10];
int top=-1;
int n;
void push();
void pop();
void display();
int main()
{
printf("enter the size of stack:");
scanf("%d",&n);
int choice;
do
{
        printf("enter the choice1:push 2:pop 3:peek 4:display 5:exit");
scanf("%d",&choice);
switch(choice) {
case 1:push();
break;
case 2:
pop();
break;
case 3:
printf("peek element of stack %d:",stack[top]);
break;
case 4: display();
break;
default:printf("invalid choice");
}
}
while(choice !=5);
}
void push()
{
if(top<n)
{
printf("enter the data:");
scanf("%d",&stack[++top]);
}
else
{
printf("stack over flow");
}
}
void pop()
{
if(top==-1)
{
printf("under flow");
}
else{
printf("deleted element is %d",stack[top]);
top--;
}
}
void display()
{
int i;
if(top==-1)
{
printf("under flow");
}
else{

for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}}}
