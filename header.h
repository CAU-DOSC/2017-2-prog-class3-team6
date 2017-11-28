/* 
  header.h
  구조체의 선언과 함수의 선언을 해주세요
  먼저 readme.txt를 읽어주세요
                                        */
#include<stdio.h>
#include<stdlib.h>

 struct node {
	int value;
        struct node *next;
};

typedef struct node Node;
typedef Node* Link;

node *CreatNode(int *data,int *count);
node *AddNode(node* cur,node* head);
void PrintNode(node* head);
void Print_Reverse(Link head, int count);
int Count_data(Link head);
void Print_Mid(Link list_head, int count);
void removenode(node *target);
void Delete_Rest(Link head, Link cur, int count);
