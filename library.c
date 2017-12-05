#pragma warning(disable: 4819)
#include "header.h"

Link CreatNode(int data, int *count)
{
	Link cur;
	cur = (Link)malloc(sizeof(Node));
	if (cur == NULL){
		return NULL;
	}
	cur->value = data;
	cur->next = NULL;
	(*count)++;
	return cur;
}
Link AddNode(Link cur, Link head)
{
	Link nextnode = head;
	if (head == NULL){
		head = cur;
		return head;
	}
	while (nextnode->next != NULL){
		nextnode = nextnode->next;
	}
	nextnode->next = cur;
	return head;
}
void PrintNode(Link head)
{
	Link nextnode = head;
	while (nextnode != NULL)
	{
		printf("%-4d", nextnode->value);
		nextnode = nextnode->next;
	}
}
void Print_Reverse(Link head, int count){
	for (; count != 0; count--){
		Link current = head;
		for (int i = 0; i < count - 1; i++)
			current = current->next;
		printf("%4d", current->value);
	}
	puts(" ");
}
int Count_data(Link head) {
	int count = 0;
	for (Link current = head; current->next != NULL; count++)
		current = current->next;
	return count;
}
void Print_Mid(Link list_head, int count) {
	int cnt = count / 2;
	if (count % 2 == 1)
	{
		while (cnt>0)
		{
			list_head = list_head->next;
			cnt--;
		}
		printf("%d\n", list_head->value);
	}
	else
	{
		while (cnt>1)
		{
			list_head = list_head->next;
			cnt--;
		}
		printf("%d", list_head->value);
		list_head = list_head->next;
		printf(", %d\n", list_head->value);
	}
}

void Delete_Odd(Link* loc, int count) {
	Node** hptr = loc;
	Link target = *hptr;
	Link cur = target->next;
	*hptr = cur;
	free(target);
	if (count % 2 == 0) {
		while (cur->next != NULL) {
			target = cur->next;
			cur->next = target->next;
			cur = cur->next;
			free(target);
		}
	}
	else {
		while (cur != NULL) {
			target = cur->next;
			cur->next = target->next;
			cur = cur->next;
			free(target);
		}
	}
}
void Delete_Rest(Link *head) {

	Link* start = head;
	Link cur = *start;

	while (cur != NULL) {
		Link tmp = cur;
		cur = cur->next;
		*start = cur;
		free(tmp);
	}

}