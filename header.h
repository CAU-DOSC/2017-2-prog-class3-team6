#pragma warning(disable: 4819)
#include<stdio.h>
#include<stdlib.h>

struct node {
	int value;
	struct node *next;
};

typedef struct node Node;
typedef Node* Link;

Link CreatNode(int data, int *count);
Link AddNode(Link cur, Link head);
void PrintNode(Link head);
void Print_Reverse(Link head, int count);
int Count_data(Link head);
void Print_Mid(Link list_head, int count);
void removenode(Link target);
void Delete_Odd(Link* head, int count);
void Delete_Rest(Link *head);
