//R.manideep
//ec20b1073

#include<stdio.h>
#include<stdlib.h>
// we are Defining struct of stack
struct stack {
    
    int max;
    int top1;
    int top2;
    int * s;
};
//Function to creat a stack by pass by address method
void create (struct stack *st){
    
    printf("enter the value of max");
    scanf("%d" ,&st->max);
    st->top1 =-1;
    st->top2 = st->max;
    st->s =(int *)malloc(sizeof(int)*st->max);
}

//Function to display the elementsin stack1 by pass by value method
void display1(struct stack st){
    
    if (st.top1 == -1)
        printf("The stack is empty");
    for (int i = st.top1;i>=0 ;i--) {
        printf("\n%d" ,st.s[i]);
        printf("\n");
    }
}

//Function to display the elementsin stack2 by pass by value method
void display2(struct stack st){
    
    if (st.top2 == st.max)
        printf("The stack is empty\n");
    else {
        for (int i = st.top2;i<st.max;i++) {
            printf("\n%d" ,st.s[i]);
            printf("\n");
        }
    }
}

//Function to add a number to stack1
void push1(struct stack *st ,int x){
    
    if(st->top2 == st->top1+1 || st->top1 == st->max -1)
        printf("stack over flow\n");
    else{
        st->top1++;
        st->s[st->top1] = x;
    }
    
}

//Function to add a number to stack2
void push2(struct stack *st ,int x){
    
    if(st->top2-1 == st->top1 || st->top2 == 0)
        printf("stack over flow\n");
    else{
        st->top2--;
        st->s[st->top2] = x;
    }
    
}

//Function to delete last entered element in stack1
int pop1(struct stack *st){
    
    int x= -1;
    if (st->top1 == -1)
        printf("stack under flow\n");
    
    else {
        x =st->s[st->top1--];
    }
    return printf("the poped out element is %d" ,x);
    
}

//Function to delete last entered element in stack2
int pop2(struct stack *st){
    
    int x= st->max;
    if (st->top2 == st->max)
        printf("stack under flow\n");
    
    else {
        x =st->s[st->top2++];
    }
    return printf("the poped out element is %d" ,x);
    
}

//Function to look the last entered element in stack1
int peek1(struct stack st){
    
    int x =0;
    if (st.top1 ==-1)
        printf("stack is empty\n");
    
    else{
        x = st.s[st.top1];
        
    }
    return printf("\nthe last entered value is %d",x);
    
}

//Function to look the last entered element in stack2
int peek2(struct stack st){
    
    int x =0;
    if (st.top2 ==st.max)
        printf("stack is empty");
    
    else{
        x = st.s[st.top2];
        
    }
    return printf("the last entered value is %d",x);
    
}

int main( ) {
    int c;
    int x =0;
    struct stack st ;
    create(&st);
    while(1){
        printf("1.display1\n 2.display2\n 3.pop1\n 4.pop2\n 5.push1\n 6.push2\n 7.peek1\n 8.peek2\n 9.exit\n");
        printf("enter your choice");
        scanf("%d" ,&c);
        switch (c) {
            case 1:
                display1(st);
                break;
            case 2:
                display2(st);
                break;
            case 3:
                pop1(&st);
                break;
            case 4:
                pop2(&st);
                break;
            case 5:
                printf("enter the value to be pushed ");
                scanf("%d",&x);
                push1(&st, x);
                break;
            case 6:
                printf("enter the value to be pushed ");
                scanf("%d",&x);
                push2(&st, x);
                break;
            case 7:
                peek1(st);
                break;
            case 8:
                peek2(st);
                break;
            case 9:
                return 0;
                
            default:
                printf("enter the correct choice");
                break;
        }
    }
    
    
    return  0;
    
    
}











