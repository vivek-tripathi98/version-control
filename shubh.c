#define max 100
int push(int [], int);
int pop(int [], int);
void disp(int[], int);
int main()
{
    int stack[max], top=-1,choice;
    do
    {
    printf("\n 1.push 2.pop 3.display 4.exit");
    printf("\n enter your choice---");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
        top=push(stack, top);
        case 2:
        top=pop(stack, top);
        break;
        case 3:
        display(stack, top);
        break;
        }
    }
    while(choice<=3);
    }
int push(int stack[max],int top);
{
int x;
if (top==max-1)
    {
    printf("\n overflow \n");
    }
    else
    {
    printf("enter your choice");
    scanf("%d",&x);
    top++;
    {
    stack[top]=x;
    }
    return(top);
    }

    }
    int pop(int stack[max], int top);
{
if (top==-1)
    {
    printf("\n stack is empty \n");
    }
    else
    {
    top=top-1;
    {
    stack[top]=top;
    }
    return (top);
    }
    }
void disp(int stack[max], int top);
    {
    if
    }
