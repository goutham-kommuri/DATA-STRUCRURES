#include<stdio.h>
#include<stdlib.h>
#define max 2
int top=-1,stack[max];
void push();
void pop();
void display();
int main()
{
int ch;
while(1) 

{
	printf(" \n  stack Menu");
    printf("\n1.push  2.pop  3.display  4.exit");
    printf("\n\nenter your choice(1 to 4):");
    scanf("%d",&ch);
    switch(ch)
    {
    	case 1: push();
    	break;
    	case 2: pop();
		break;
		case 3: display();
		break;
		case 4: exit(0);
		default: printf("\ninvalid");
    }
}
}
void push()
{
int val;
if(top== max-1)
{
printf("\nstack is-full");
}
else
{
printf("element to add= ");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("\nstack is-empty");
}
else
{
printf("element to remove= %d",stack[top]);
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("\nstack is empty ");
}
else
{
printf("stack elements= \n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}

  
