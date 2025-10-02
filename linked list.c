#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
	{
		int info;
		struct Node *next;
	};typedef struct Node node;
	node *start;
	node* create_node()
	{
		node *p;
		p=(node*)malloc(sizeof(node));
		p->next=NULL;
		printf("\n Enter the information of the node:");
		scanf("%d",&p->info);
		return (p);
	}
	void beg_insertion()
	{
		node *p;
        p=create_node();
		if(start==NULL)
		start=p;
		else
		{
		p->next=start;
		start=p;
	                 }
	}
	void end_insertion()
	{
		node *p,*q;
        p=create_node();
		if(start==NULL)
		start=p;
		else
		{
		q=start;
	                while(q->next!=NULL)
	                 q=q->next;
	                 q->next=p;
	                 }
	}
void insertion_after()
{
 node *p,*q,*r;
 p=create_node();
 int key;
 printf("\n Enter the value  after which you want to insert:");
 scanf("%d",&key);
 if(start==NULL)
 start=p;
 else
     {
      q=start;
      while(q!=NULL && q->info!=key)
      {
       r=q;
       q=q->next;
      }
      if(q!=NULL)
      {
       p->next=q->next;
       q->next=p;
      }
      else
      r->next=p;
     }
}
  void insertion_before()
{
    node *p,*q,*r;
    p=create_node();
    int key;
    printf("\n Enter the value  before which you want to insert:");
    scanf("%d",&key);
    if(start==NULL)
	start=p;
	else
        {
         q=start;
         while(q!=NULL && q->info!=key)
            {
             r=q;
             q=q->next;
            }
            if(q!=NULL)
            {
             r->next=p;
             p->next=q;
            }   
            else
            r->next=p;
        }
}
void delete_beg()
{
  node *p;
  if(start==NULL)
  printf("\n No  such node to delete");
  else
      {
        p=start;
        start=p->next;
        free(p);
       }
}
void delete_end()
{
  node *p,*q;
  if(start==NULL)
  printf("\n No  such node to delete");
  else
      {
         p=start;
          while(p->next!=NULL)
          {
            q=p;
           p=p->next;
           }
           q->next=NULL;
           free(p);
        }
}
void delete_particular()
{
  node *p,*q;
  int key;
  printf("\n Enter the node info you want to delete:");
  scanf("%d",&key);
  if(start ==NULL)
  printf("\n No such node to delete");
  else
        {
          p=start;
          while(p!=NULL && p->info!=key)
           { 
              q=p;
              p=p->next;
            }
            if(p!=NULL)
            {
               q->next=p->next;
               free(p);
             } 
             else
             printf("\n No such node to delete");
        }
}
void reverse_list()
{
	node *p,*q,*r;
	if(start==NULL)
	printf("\n No list exists");
	else
	{
		q=start;
		p=q->next;
		q->next=NULL;
		while(p!=NULL)
		{
			r=p->next;
			p->next=q;
			q=p;
			p=r;
		}
	}
	start=q;
}
void display()
{
  node *p;
  p=start;
  printf("\n Elements of the list are\n ");
  while(p!=NULL)
  {
    printf("%d->",p->info);
    p=p->next;
   }
}
void main()
{
  start=NULL;
  int c,n;
  char choice,ch;
  do
  {
  	system("cls");
  printf("\nLINKED LIST OPERATIONS");
  printf("\n-----------------------");
  printf("\n 1. Insertion:");
  printf("\n\t A. Insertion from beginning");
  printf("\n\t B. Insertion from end");
  printf("\n\t C. Insertion after a node");
  printf("\n\t D. Insrtion before a node");
  printf("\n 2. Deletion:");
  printf("\n\t A. Deletion from beginning:");
  printf("\n\t B. Deletion from end");
  printf("\n\t C. Deletion from any position");
  printf("\n 3. Traversing");
  printf("\n 4. Reversing");
  printf("\n 5. Exit");
  printf("\n Enter your choice:");
  scanf("%d",&c);
  switch(c)
            {
                case 1:
                printf("\n Enter the way you want to perform the insertion operation:");
                choice=getche();
                switch(choice)
                                {
                                    case 'A':
                                    beg_insertion();
                                    display();
                                    break;
                                    case 'B':
                                    end_insertion();
                                    display();
                                    break;
                                    case 'C':
                                    insertion_after();
                                    display();
                                    break;
                                    case 'D':
                                    insertion_before();
                                    display();
                                    break;
                                    }
                    break;
                    case 2:
                    printf("\n Enter the way you want to perform the deletion operation:");
                    choice=getche();
                    switch(choice)
                                    {
                                        case 'A':
                                        delete_beg();
                                        display();
                                        break;
                                        case 'B':
                                        delete_end();
                                        display();
                                        break;
                                        case 'C':
                                        delete_particular();
                                        display();
                                        break; 
                                    }
                    break;
                    case 3:
                    display();
                    break;
                    case 4:
                    reverse_list();
					display();
					break;	
                    case 5:
                    exit(0);
                    break;
                    default:
                    printf("\n Invalid choice");
                    break;
                  }
                  printf("\n Do you want to continue?");
                  ch=getche();
                 }while(ch=='y' || ch=='Y');
}
                 
                 
                 
                 
                 
                 
                 
                 

