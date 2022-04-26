#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* root=NULL;

void display();
void create();
void sort();

int main()
{

int i,n;

while(1)
     {
        printf("\n1.Create\n2.display\n3.sort\n4.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
	    case 3:sort();
		   break;
            default: exit(0);
        }
    }

return 0;
     }

void create()
{
      struct node* temp;
      temp=(struct node *)malloc(sizeof(struct node));
      printf("enter the data \n");
      scanf("%d",&temp->data);
      temp->link=NULL;

             if(root==NULL)
             {
             root=temp;
             }
                             else
                             {
                             struct node* p;
                             p=root;
                             while(p->link!=NULL)
                             {
                             p=p->link;
                             }
                             p->link=temp;
                             }

}

void display()
{
printf("Elements in an linked list: \n");
{
           struct node* temp;
           temp=root;
           if(temp==NULL)
	   {
		   printf("list is empty\n");
	   }
                             else
			     {
                              while(temp!=NULL)
                              {
                              printf("%d->",temp->data);
                              temp=temp->link;
			      }
			     }
			     printf("\n");
}
//return 0;
}

void sort()
{
struct node *p,*q;
int temp;
p=root;
while(p->link!=NULL)
{
q=p->link;
while(q!=NULL)
{
	if(p->data>q->data)
	{
		temp=p->data;
		p->data=q->data;
		q->data=temp;
}
q=q->link;
}
p=p->link;
}
}

