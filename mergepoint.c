#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int data;
	struct stu *next;
};

void* createhead(int data)
{
	struct stu *temp=malloc(sizeof(struct stu));

	temp->next=NULL;
	temp->data=data;

	return temp;
}

int getcount(struct stu *head)
{
	int count=0;

	struct stu *temp=head;

	while(temp)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

void* getMergePoint(struct stu *head1, struct stu *head2)
{
	int i=0;

	int c1=getcount(head1);
	int c2=getcount(head2);

	struct stu *ptr1;
	struct stu *ptr2;

	int d;

	if(c1>c2)
	{
		d=c1-c2;
		ptr1=head1;
		ptr2=head2;
	}
	else
	{
		d=c2-c1;
		ptr1=head2;
		ptr2=head1;
	}

	for(i=0;i<d;i++)
	{
		if(ptr1==NULL)
			return NULL;
		ptr1=ptr1->next;
	}
	
	// traverse both lists
	
	while(ptr1 && ptr2)
	{
		if(ptr1==ptr2)
		{
			return ptr1;	// merge point found
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return NULL;	// No merge point
}

int main()
{
	struct stu *newhead;
	struct stu *head1=createhead(10);
	struct stu *head2=createhead(3);

	newhead=createhead(5);

	head2->next=createhead(20);
	head2->next->next=createhead(20);
	head2->next->next->next=createhead(30);
	head2->next->next->next->next=newhead;

	head1->next=createhead(40);
	head1->next->next=createhead(50);
	head1->next->next->next=createhead(60);
	head1->next->next->next->next=newhead;

	newhead->next=createhead(80);

	struct stu *mergePoint=getMergePoint(head1,head2);

	if(mergePoint != NULL)
	{
		printf("Merge Point : %d\n", mergePoint->data);
	}
	else
	{
		printf("No Merge Point\n");
	}

	return 0;
}



