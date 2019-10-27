
#include<stdio.h>
#define SIZE 100
int stack[SIZE];


int top = -1;
int i;
void push(int x)

{
    if (top >= SIZE)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {

        top++;
        stack[top]= x;
        printf("push value = %d\n", stack[top]);
    }
}
void pop()
    {
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{

        printf("Deleted element is = %d\n",stack[top]);
        top=top-1;
	}
}

int main()
{
    int data[4];
    int i;

    printf("enter the  value of pus\n");
    for(i=0;i<5;i++) {
        scanf("%d",&data[i]);
        push(data[i]);
    }

    for(i=top;i>=0;i--)
    {
        pop();
    }

   return 0;
}

