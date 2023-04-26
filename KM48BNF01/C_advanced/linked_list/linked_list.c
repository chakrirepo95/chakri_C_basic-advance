// Linked list creation
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int id;
	char name[50];
	struct student *next;
}student;
student * createnode(void)
{
	student *new=(student *)malloc(sizeof(student));
	printf("enter id, name:\n");
	scanf("%d %s",&new->id,new->name);
	new->next=NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d %s\n",p->id,p->name);
		p=p->next;
	}
}

student * insertatposition(student * t,int p)
{
	int i=1;
	student *n=NULL,*h=NULL;
	h=t;
	n=createnode();
	if(p==1)
	{
		n->next=h;
		return n;
	}
	else
	{
		while(i<(p-1) && t)
		{
			t=t->next;
			i++;
		}
		if(t==NULL)
		{
			printf("you have only %d nodes but you entered %d\n",i-1,p);
			return h;
		}
		n->next=t->next;
		t->next=n;
		return h;
	}
}
student * insertafterkey(student *t,int p)
{
	student *n=NULL,*h=NULL;
	h=t;
	n=createnode();
	while(p != t->id)
	{
		t=t->next;
		if(t==NULL)
		{
			printf("key %d is not in list\n",p);
			return h;
		}

	}
	n->next=t->next;
	t->next=n;
	return h;
}
void insertbeforekey(student **h,int p)
{
	student *n=NULL,*t=NULL;
	t=*h;
	n=createnode();
	if(t->id==p)
	{
		n->next=t;
		t=n;
		*h=t;
	}
	else
	{
		while(p!=t->next->id)
		{
			t=t->next;
			if((t->next)==NULL)
			{
				printf("key %d not in the list\n",p);
				goto one;
			}
		}
		n->next=t->next;
		t->next=n;
one: printf("\n");
	}
}
student * deletionbynode(student *h,int p)
{
	int i=1;
	student *t=h,*n=NULL;
	if(p==1)
	{
		n=h;
		h=h->next;
		free(n);
		return h;
	}
	else
	{
		if(t->next==NULL)
		{
			printf("you entered wrong node\n");
			return h;
		}
		while(i<(p-1) && t)
		{
			t=t->next;
			i++;
			if(t->next==NULL)
			{
				printf("you entered wrong node\n");
				return h;
			}
		}
		n=t->next;
		t->next=n->next;
		free(n);
		return h;
	}
}
void deletionbykey(student **h,int p)
{
	student *n=NULL,*t=*h;
	if(p==t->id)
	{
		n=t;
		t=t->next;
		*h=t;
		free(n);
	}
	else
	{
		while(p!=t->next->id)
		{
			t=t->next;
			if(t->next==NULL)
			{
				printf("key is not in the list\n");
				goto one;
			}
		}
		n=t->next;
		t->next=n->next;
		free(n);
one: printf("\n");
	}
}
student * reverse(student *h)
{
	student *p=NULL,*q=NULL,*r=NULL;
	if(h==NULL)
	{
		printf("no linked list\n");
		return h;
	}
	else if(h->next==NULL)
	{
		return h;
	}
	else if(h->next->next==NULL)
	{
		p=h;
		h=h->next;
		h->next=p;
		p->next=NULL;
		return h;
	}
	else
	{
		p=h;
		q=p->next;
		r=q->next;
		while(q!=NULL)
		{
			q->next=p;
			p=q;
			q=r;
			if(r)
				r=r->next;
		}
		h->next=NULL;
		return p;
	}
}
void sort(student **H)
{
	int a=1,n=1;
	student *p=NULL,*q=NULL,*r=NULL,*z=NULL,*l=NULL;
	p=*H;
	if(p->next==NULL)
	{
		printf("list contains only one head\n");
	}
	else
	{
		while(a)
		{
			p=*H;
			q=p->next;
			r=q->next;
			a=0;
			n=1;
			z=p;
			while(q)
			{
				if(q->id<p->id)
				{
					if(n==1)
						*H=q;
					else
						z->next=q;
					l=q->next;
					q->next=p;      
					p->next=l;      
					a++;
					z=q;
				}
				else
				{
					z=p;
					p=q;
				}
				q=r;
				if(r)
					r=r->next;
				n++;
			}
		}
	}
}
int main()
{
	student *h=NULL,*n=NULL,*l=NULL;
	char ch;
	int x,p;
	while(1)
	{
		n=createnode();
		if(n->id < 0)
		{
			printf("linked list is:");
			if(h==NULL)
				printf("empty\n");
			else
			{
				printf("\n");
				printll(h);
			}
			printf("\nyou entered a negative number\n");
			return 1;
		}
		if(!h)
			h=n;
		else
			l->next=n;
		l=n;
		printf("do you want to create one more node ?\n");
		scanf(" %c",&ch);
		if(ch=='n')
			break;
	}
	while(1)
	{
		printf("1)insert at a position\n2)insert before a key\n3)insert after a key\n");
		printf("4)deletion based on position\n5)deletion based on key\n6)reverse list\n7)sorting list\n8)exit\n");
		printf("choose option:");
		scanf("%d",&x);
		switch(x)
		{
			case 1: printf("which position:");
				scanf("%d",&p);
				h=insertatposition(h,p);
				break;
			case 2: printf("key number:");
				scanf("%d",&p);
				insertbeforekey(&h,p);
				break;
			case 3: printf("key number:");
				scanf("%d",&p);
				h=insertafterkey(h,p);
				break;
			case 4: printf("which node you want to delete:");
				scanf("%d",&p);
				h=deletionbynode(h,p);
				break;
			case 5: printf("which key you want to delete:");
				scanf("%d",&p);
				deletionbykey(&h,p);
				break;
			case 6: h=reverse(h);break;
			case 7: sort(&h);
			case 8: break;
			default:printf("invalid option\n");break;
		}
		if(x==8)
			break;
		printf("\n");
		printf("linked list is:");
		if(h==NULL)
			printf("empty\n");
		else
		{
			printf("\n");
			printll(h);
		}
	}
	printf("\nLinked List is:");
	if(h==NULL)
		printf("empty\n");
	else
	{
		printf("\n");
		printll(h);
	}
}
