//impliment infix presidence
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
char stack[10],item,inf[10];
int top=-1;
char push();
char pop();
char display();
char push(inf[10]);
{
    if(top>=9)
    {
        printf("stack is  full \n");
    }
    else
    {
        top=top+1;
        gets(item);
        stack[top]=item;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        item=stack[top];
        top=top-1;
    }
}
char display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
    }
    else
    {
        printf("stack is \n");
        stack[top]=item;
        for(i=top;i>=10;i--)
        {
            puts(stack);
            printf("\n");
        }
    }
}
char main()
{
    char ch;
    int i,c;
    printf("\n enter operands or variable\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 1:
        {
            if(ch==#)
            return 0;
            break;
        }
    case 2:
        {
            if(ch==+ || ch==-)
                return 1;
            break;
        }
    case 3:
        {
            if(ch==* || ch==/)
                return 2;
            break;
        }
    default
        {
            return 4;
            break;
        }
    }



}

