#include<stdio.h>
#include<stdlib.h>

struct sll
{
	int data;
	struct sll *next;
};

void *addlast (struct sll *ptr);
void print (struct sll *ptr);
void *dellast (struct sll *ptr);
void *delfirst (struct sll *ptr);
void *addfirst (struct sll *ptr);
void addmid(struct sll *ptr);
void count (struct sll *ptr);
void *delpar(struct sll *ptr);
void delmid (struct sll *ptr);
void *findmid (struct sll *ptr);
void *remrep (struct sll *ptr);
void *delete(struct sll *ptr);
void sort (struct sll *ptr);
void *reverse(struct sll *ptr);
void palindrum(struct sll *ptr); 
int is_palindrome(struct sll* head);
void* rotateList(struct sll* head, int N);
void deleteAlt(struct sll *head); 
void* Ascending(struct sll *head);
int main()
{
	struct sll *head=NULL, *ptr=NULL;
	int choice;

	while (1)
	{
		printf("1 addlast 2 print 3 dellast 4 delfirst 5 addfirst\n");
		printf("6 addmid 7 count 8 delpar 9 delmid 10. findmid\n");
		printf("11. remrep 12 delete 13 sort 14 reverse 15 swapp\n");
		printf("15 palindrum 16 rotatelist 17 DeleteAltenativeNodes 18 Ascending \n");

		printf("enter ur choice: ");
		scanf("%d", &choice);

		switch(choice)
		{

			case 1 : head = addlast (head); break;
			case 2 : print (head); break;
			case 3 : head = dellast (head); break;
			case 4 : head =  delfirst (head); break;
			case 5 : head = addfirst (head); break;
			case 6 : addmid (head); break;
			case 7 : count (head); break;
			case 8 : head = delpar(head); break;
			case 9 : delmid(head); break;
			case 10: head = findmid (head); break;
			case 11: head=remrep(head); break;
			case 12: head=delete(head); break;
			case 13: sort(head); break;
			case 14: ptr = reverse(head); break;
			case 15: palindrum(head); break;
			case 16: head = rotateList(head, 4); break;
			case 17: deleteAlt(head); break;
			case 18: head = Ascending(head); break;
		}
		printf("\n");
	}
}

void *addlast (struct sll *ptr)
{
	struct sll *nu=NULL, *temp=NULL;
	nu=malloc(sizeof(struct sll));

	if(nu==NULL)
	{
		printf("memory not created\n");
		return NULL;
	}

	printf("enter the data: ");
	scanf("%d",&(nu->data));

	if(ptr==NULL)
	{
		nu->next=NULL;
		ptr=nu;
	}
	else
	{
		temp=ptr;
		while(temp->next)
		{
			temp=temp->next;
		}
		nu->next=temp->next;
		temp->next=nu;
	}
	return ptr;
}

void print (struct sll *ptr)
{

	struct sll *temp=NULL;
	temp=ptr;

	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	while (temp);
}

void* dellast(struct sll *ptr)
{
	struct sll *temp=NULL, *p=NULL;

	if(ptr==NULL)
	{
		printf("sll is empty\n");
		return 0;
	}
	else
	{
		temp=ptr;
		while(temp->next)
		{
			p=temp;
			temp=temp->next;
		}
		p->next=temp->next;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

void* delfirst(struct sll *ptr)
{
	struct sll *temp=NULL, *p=NULL;

	if(ptr==NULL)
	{
		printf("sll is empty\n");
		return 0;
	}
	else
	{
		temp=ptr;
		ptr=ptr->next;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

void *addfirst (struct sll *ptr)
{
	struct sll *nu=NULL, *temp=NULL;
	nu=malloc(sizeof(struct sll));

	if(nu==NULL)
	{
		printf("memory not created\n");
		return NULL;
	}

	printf("enter the data: ");
	scanf("%d",&(nu->data));

	if(ptr==NULL)
	{
		nu->next=NULL;
		ptr=nu;
	}
	else
	{
		nu->next=ptr;
		ptr=nu;
	}
	return ptr;
}

void addmid (struct sll *ptr)
{
	struct sll *nu=NULL, *temp=NULL, *p=NULL;
	nu=malloc(sizeof(struct sll));

	printf("enter the data: ");
	scanf("%d",&(nu->data));

	if(ptr==NULL)
	{
		printf("sll is empty\n");
	}
	else
	{
		temp=ptr, p=ptr;
		while(p->next->next)
		{
			p=p->next->next;
			temp=temp->next;
		}
		nu->next=temp->next;
		temp->next=nu;
	}
}

void count(struct sll *ptr)
{
	int count=1;
	struct sll *temp=NULL;
	temp=ptr;

	while(temp->next)
	{
		count++;
		temp=temp->next;
	}
	printf("%d nodes here\n",count);
}

void* delpar(struct sll *ptr)
{
	int count=1,pos;
	struct sll *temp=NULL, *pre=NULL;

	printf("enter the position: ");
	scanf("%d",&pos);

	temp=ptr;
	if(count==pos)
	{
		ptr=ptr->next;
		free(temp);
		temp=NULL;
	}
	else
	{
		while(temp->next)
		{
			count++;

			pre=temp;
			temp=temp->next;

			if(count==pos)
			{
				pre->next=temp->next;
				break;
			}
		}
	}
	return ptr;
}

void delmid(struct sll *ptr)
{
	struct sll *pre=NULL, *temp=NULL, *p=NULL;

	p=ptr;
	temp=ptr;

	while(p&&p->next)
	{
		p=p->next->next;
		pre=temp;
		temp=temp->next;
	}
	pre->next=temp->next;
	free(temp);
	temp=NULL;
}

void* findmid(struct sll *ptr)
{
	struct sll *pre=NULL, *temp=NULL, *p=NULL;

	p=ptr;
	temp=ptr;

	while(p&&p->next)
	{
		p=p->next->next;
		pre=temp;
		temp=temp->next;
	}
	printf("middle node is :%d\n ",temp->data);
	return ptr;
}

void *remrep(struct sll *ptr)
{
	struct sll *i=NULL, *temp=NULL, *pre=NULL;

	for(i=ptr; i ; i=i->next)
	{
		temp=i;
		while(temp && temp->next)
		{
			pre=temp;
			temp=temp->next;

			if((i->data)==(temp->data))
			{
				printf("Delate : %d\n",temp->data);

				pre->next=temp->next;
				free(temp);

				temp=NULL;
				temp=pre;
			}
		}
	}
	return ptr;
}

void *delete(struct sll *ptr)
{
	struct sll *temp=NULL;
	temp=ptr;

	if(ptr)
	{
		ptr=ptr->next;
		free(temp);
		temp=NULL;
	}
	return ptr;
}

void sort(struct sll *ptr)
{
	struct sll *i, *j;
	int temp;

	for(i=ptr; i ; i=i->next)
	{
		for(j=i->next; j ; j=j->next)
		{
			if((i->data)>(j->data))
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}

void *reverse(struct sll *ptr)
{
	struct sll *temp=NULL, *p=NULL, *q=NULL;

	temp=ptr;
	while(temp)
	{
		q=temp->next;
		temp->next=p;
		p=temp;
		temp=q;
	}
	ptr=p;
	return ptr;
}

// Check if list is palindrome
int is_palindrome(struct sll* head) 
{
	if (head == NULL || head->next == NULL)
		return 1;

	// Step 1: Find the middle
	struct sll* mid = findmid(head);

	// Step 2: Reverse second half
	struct sll* second_half = reverse(mid->next);

	// Step 3: Compare both halves
	struct sll* first_half = head;
	struct sll* temp2 = second_half;
	int is_pal = 1;

	while (temp2) {
		if (first_half->data != temp2->data) {
			is_pal = 0;
			break;
		}
		first_half = first_half->next;
		temp2 = temp2->next;
	}

	// (Optional) Step 4: Restore original list (if needed)
	mid->next = reverse(second_half);

	return is_pal;
}

void palindrum(struct sll *ptr)
{
	if (is_palindrome(ptr))
		printf("The linked list is a palindrome.\n");
	else
		printf("The linked list is not a palindrome.\n");
}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
	char data;
	struct Node* next;
} Node;

Node* createNode(char data) 
{
	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void printList(Node* head) 
{
	while (head) 
	{
		printf("%c", head->data);
		if (head->next) printf(" -> ");
		head = head->next;
	}
	printf("\n");
}

void *rotateList(struct sll* head, int N) 
{
	if (!head || N == 0) return head;

	struct sll* temp = head;
	int count = 1;

	while (count++ < N && temp) temp = temp->next;
	if (!temp || !temp->next) return head;

	struct sll* newHead = temp->next;
	temp->next = NULL;

	struct sll* tail = newHead;
	while (tail->next) tail = tail->next;
	tail->next = head;

	return newHead;
}

void deleteAlt(struct sll *head) 
{ 
	if (head == NULL) 
		return; 

	/* Initialize prev and node to be deleted */
	struct sll *prev = head; 
	struct sll *temp = head->next; 

	while (prev != NULL && temp != NULL) 
	{ 
		/* Change next link of previous node */
		prev->next = temp->next; 
		delete(temp); // delete the node

		/* Update prev and node */
		prev = prev->next; 
		if (prev != NULL) 
			temp = prev->next; 
	} 
} 

void* Ascending(struct sll *head)
{
	struct sll *nu=NULL;
	nu = malloc(sizeof(struct sll));

	printf("enter the data : ");
	scanf("%d",&(nu->data));

	if(head==NULL)
	{
		nu->next=NULL;
		head=nu;
	}
	else
	{
		if((head->data)>(nu->data))
		{
			nu->next=head;
			head=nu;
		}
		else
		{
			struct sll *temp=head;
			while(temp->next &&(temp->next->data)<(nu->data))
			{
				temp=temp->next;
			}
			nu->next=temp->next;
			temp->next = nu;
		}
	}
	return head;
}






