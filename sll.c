#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* root=NULL;

void display();
void create();

int main()
{

int i,n;

while(1)
     {
        printf("\n1.Create\n2.display\n0.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: create();
                    break;
            case 2: display();
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
