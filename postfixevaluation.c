#include <stdio.h>
#include <ctype.h>
typedef struct conversion
{
	int a[30];
	int top;
}stack;

void push(int, stack *s);

int pop(stack *s);

int continuity(int a, int b, char exp);

int (char expression[]);

int main()
{
	char postfix[30];
	printf("\n enter an expression containing only brackets\n");
	scanf("%s",exp);
	checkContinuity(char exp[])
}

int pop(stack *s)
{
    int d,top=s->top;
    if(top!=-1)
    {
		d=s->a[top];
        s->top=s->top-1;
		return d;
    }
}

void push(int e, stack *s)
{
    int top=s->top;
    if(top<29)
	{
		s->a[++(s->top)]=e;
	}
}
void checkcontinuity(char exp[])
int isMatchingPair(char left,char right);
int i,c;
stack s;
s.top=-1
       for(i=0;exp[i]='\0';i++)
       {
		   
	   }
{
	switch(left)
	{
		case'(':if(right==')')
		return 1;
		else 
		return 0;
		case'{':if(right=='}')
		return 1;
		else
		return 0;
		case'[':if(right==']')
		return 1;
		else 
		return 
	}
	}
{
	return pop(&s);
}
