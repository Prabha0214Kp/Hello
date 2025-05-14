#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

// Count nodes in a list
int getCount(struct Node* head) 
{
	int count = 0;
	while (head != NULL) 
	{
		count++;
		head = head->next;
	}
	return count;
}

// Get merge point
struct Node* getMergePoint(struct Node* head1, struct Node* head2) 
{
	int c1 = getCount(head1);
	int c2 = getCount(head2);
	int d;
	struct Node *ptr1, *ptr2;
	if (c1 > c2) {
		d = c1 - c2;
		ptr1 = head1;
		ptr2 = head2;
	} else {
		d = c2 - c1;
		ptr1 = head2;
		ptr2 = head1;
	}
	// Move the pointer of longer list by d
	for (int i = 0; i < d; i++) {
		if (ptr1 == NULL) return NULL;
		ptr1 = ptr1->next;
	}
	// Traverse both lists
	while (ptr1 && ptr2) 
	{
		if (ptr1 == ptr2) return ptr1; // Merge point found
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return NULL; // No merge point
}

// Helper to create a new node
struct Node* newNode(int data) 
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}

int main() 
{
	// Creating two linked lists that merge
	struct Node* newNode1;

	struct Node* head1 = newNode(10);
	struct Node* head2 = newNode(3);

	newNode1 = newNode(6);
	head2->next = newNode1;

	head1->next = newNode(15);
	head1->next->next = newNode1;

	newNode1->next = newNode(30);

	struct Node* mergePoint = getMergePoint(head1, head2);

	if (mergePoint != NULL)
		printf("Merge Point: %d\n", mergePoint->data);
	else
		printf("No Merge Point\n");
	return 0;
}



