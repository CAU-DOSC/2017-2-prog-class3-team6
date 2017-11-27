/*
  main.c
  이곳은 메인함수를 작성해주세요
  먼저 readme.txt를 읽어주세요
                                */

#include"header.h"

int main(){
	node *head=NULL;
	node *cur=NULL;
	//노드의 머리,현재 위치의 노드
	int data=0;
	//node의 value에 넣을 정수 값
	int count=0;
	//노드의 갯수를 카운트해주는 변수
	printf("정수를 입력해주세요\n");
	while(scanf("%d",&data)!=EOF){
		cur=CreatNode(data,&count);
		head=AddNode(cur,head);
	}
	return 0;

}
