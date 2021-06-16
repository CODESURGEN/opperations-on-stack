  //R.manideep
// ec20b1073

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//defineing the struct of ax^n
struct Node
{
    int coeff;
    int exp;
    struct Node *next;
}*poly=NULL;

//Function the create the polynomial
void create()
{
    struct Node *t,*last=NULL;
    int num,i;
    
    printf("Enter number of terms");
    scanf("%d",&num);
    printf("Enter each term with coeff and exp\n");
    
    for(i=0;i<num;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        scanf("%d%d",&t->coeff,&t->exp);
        t->next=NULL;
        if(poly==NULL)
        {
            poly=last=t;
        }
        else
        {
            last->next=t;
            last=t;
        }
    }
}

// Function that display polynomial
void Display(struct Node *p)
{
    
    if(p == NULL){
        printf("there is no polynomial so 0");
    }
    else
{
    while(p)
    {
        printf("%dx%d +",p->coeff,p->exp);
        p=p->next;
    }
    printf("\n");
}


}

int main()
{
    create();
    Display(poly);
     
    return 0;
}