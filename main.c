/*
  main.c
  이곳은 메인함수를 작성해주세요
  먼저 readme.txt를 읽어주세요
                                */

#include "header.h"

int main(){
	Link head=NULL;
	Link cur=NULL;
	//노드의 머리,현재 위치의 노드
	int data=0;
	//node의 value에 넣을 정수 값
	int count=0;
	//노드의 갯수를 카운트해주는 변수
	printf("정수를 입력해주세요\n");
	while(scanf_s("%d",&data)!=EOF){
		cur=CreatNode(data, &count);
		head=AddNode(cur,head);
	}
	puts("1. 입력된 리스트 -------------------------------------");
	PrintNode(head);
	puts("2. 입력된 리스트 역순-------------------------------------");
	Print_Reverse(head, count);
	puts("3. 중간 값-------------------------------------");
	Print_Mid(head, count);
	puts("4. 홀수 번째 노드 삭제-------------------------------------");
	cur=head;
	Delete_Odd(&head, count);
	PrintNode(head);
	return 0;

}
