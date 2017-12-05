#pragma warning(disable: 4819)
#include "header.h"

int main(){
	Link head = NULL;
	Link cur = NULL;
	int data = 0;
	int count = 0;
	printf("input integers:\n");
	while (scanf_s("%d", &data) != EOF){
		cur = CreatNode(data, &count);
		head = AddNode(cur, head);
	}
	puts("\n1. input");
	PrintNode(head);
	puts("\n2. reverse");
	Print_Reverse(head, count);
	puts("\n3. middle");
	Print_Mid(head, count);
	puts("\n4. delete odd");
	cur = head;
	Delete_Odd(&head, count);
	PrintNode(head);
	printf("\n");
	return 0;
}
