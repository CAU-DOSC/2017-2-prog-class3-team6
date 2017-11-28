/*
  라이브러리.c
  함수의 내용을 작성해주세요
  먼저 readme.txt를 읽어주세요
                              */
#include "header.h"
node *CreatNode(int *data,int *count)
{
	node *cur;
	cur=(node*)malloc(sizeof(node));
	if(cur==NULL){
		retrun NULL;
	}
	cur->value=data;
	cur->next=NULL;
	(*count)++;
	return cur;
}
node *AddNode(node* cur,node* head)
{
	node* nextnode=head;
	if(head==NULL){
		head=cur;
		return head;
	}
while(nextnode->next!=NULL){
	nextnode=nextnode->next;
}
nextnode->next=cur;
return head;
}
void PrintNode(node* head)
{
	node* nextnode = head;
	while (nextnode != NULL)
	{
		printf("%-4d", nextnode->value);
		nextnode = nextnode->next;
	}
}

// 입력된 연결 리스트를 역순으로 출력
void Print_Reverse(Link head, int count){
	for( ; count != 0 ; count --){
		Link current = head;
		for(int i=0 ; i < count - 1 ; i++)
			current = current-> next;
		printf("%4d", current->value);
	}
	puts(" ");
}

// 연결 리스트의 개수 구하기
int Count_data(Link head) {
	int count = 0;
	for (Link current = head; current->next != NULL; count++)
		current = current->next;
	return count;
}

void Print_Mid(Link list_head, int count) {
	int cnt = count/2;
	
	if(count%2 == 0)
	{
		while(cnt>0)
		{
			list_head = list_head->next;
			cnt--;
		}
		printf("%d\n", list_head->value);
	}
	else
	{
		while(cnt>0)
		{
			list_head = list_head->next;
			cnt--;
		}
		printf("%d", list_head->next);
		list_head = list_head->next;
		printf(", %d\n",list_head->value);
	}
}
//remove the node
void removenode(node *target)
{
	node *removenode = target->next;
	target->next = removenode->next;
	free(removenode);
}
//remove the even linked list content
void Delete_Rest(Link head, Link cur)
{
	cur = head;
	if (count % 2 == 1) {
		while (cur != NULL) {
			removenode(cur);
			cur = cur->next;
		}
	}
	else {
		for (int i = 0; i < (count - 1) / 2; i++) {
			removenode(cur);
			cur = cur->next;
		}
	}
}
