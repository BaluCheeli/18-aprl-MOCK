#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* root=NULL;

void display();
void create();
void reverse();
int length();


int main()
{

int i,n,c;

while(1)
     {
        printf("\n1.Create\n2.display\n3.reverse\n4.length\n5.Quit\n");
        printf("Enter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
	    case 3:reverse();
		   break;
	    case 4:length();
		   //printf("%d is the length\n",c);
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


int length()
{
struct node * temp;
temp=root;
int c=0;
while(temp!=NULL)
{
	c++;
	temp=temp->link;
}
printf("%d is the length\n",c);

return c;
}


void reverse()
{
int i,j,len,k,temp;
struct node *p,*q;
len=length();
i=0;
j=len-1;
p=q=root;
while(i<j)
{
	k=0;
	while(k<j)
	{
		q=q->link;
		k++;
}
temp=p->data;
p->data=q->data;
q->data=temp;
i++;
j--;

p=p->link;
q=root;
}
}
