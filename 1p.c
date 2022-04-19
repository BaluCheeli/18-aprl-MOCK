#include <stdio.h>
#include<stdlib.h>

typedef struct stu
{
    int data;
    struct stu *link;
}node;

node *head=NULL;

void Create_LL(int);
void check_CLL();

int main()
{
    int n,len;
    while(1)
    {
        printf("\n1.Create_LL\n2.check list is crcular or not\n0.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: printf("Enter length of list: ");
                    scanf("%d",&len);
                    Create_LL(len);
                    break;
            case 2: check_CLL();
                    break;
            default: exit(0);
        }
    }
    return 0;
}


void Create_LL(int len)
{
    int i;
    node *new,*temp=NULL;
    for(i=1;i<=len;i++)
    {
        new=(node *)malloc(sizeof(node));
        printf("Enter data%d: \n",i);
        scanf("%d",&new->data);
        new->link=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
            temp->link=new;
            temp=new;
        }
        temp->link=head;
    }
}


void check_CLL()
{
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        node *temp=head;
        
        while((temp->link)!=head)
        {
            temp=temp->link;
        }
        if((temp->link)==head)
        {
            printf("List is Circular list\n");
        }
        else
        {
            printf("List not a Circular List\n");
        }
    }
}
