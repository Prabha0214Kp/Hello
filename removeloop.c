#include<stdio.h>
#include<stdlib.h>

struct stu
{
	int data;
	struct stu *next;
};

void *newnode(int data)
{
	struct stu *nu=(struct stu*)malloc(sizeof(struct stu));
	nu->next=NULL;
	nu->data=data;
	return nu;
}

int hasloop(struct stu*head)
{
	struct stu *slow,*fast;
	slow=head;
	fast=head;

	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return 1;
		}
	}
	return 0;
}

void removeloop(struct stu *head)
{	
	struct stu *slow,*fast;
	slow=head;
	fast=head;

	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			break;
		}
	}

	if(slow!=fast)
	{
		return;
	}

	slow=head;

	if(slow==fast)
	{
		// loop starts in head

		while(fast->next!=slow)
		{
			fast=fast->next;
		}
	}
	else
	{
		while(slow->next != fast->next)
		{
			slow=slow->next;
			fast=fast->next;
		}
	}
	fast->next=NULL;
}

void print(struct stu *temp)
{
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}


int main()
{
	struct stu* head=newnode(1);
	head->next=newnode(2);
	head->next->next=newnode(3);
	head->next->next->next=newnode(4);
	head->next->next->next->next=newnode(5);
	head->next->next->next->next=head->next->next;


	if(hasloop(head))
	{
		printf("loop is detected\n");
	}
	else
	{
		printf("loop is not detected\n");
	}

	removeloop(head);

	if(hasloop(head))
	{
		printf("loop is detected\n");
	}
	else
	{
		printf("loop is not detected\n");
	}
	print(head);
	return 0;
}



