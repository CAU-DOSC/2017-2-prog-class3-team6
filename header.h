/* 
  header.h
  구조체의 선언과 함수의 선언을 해주세요
  먼저 readme.txt를 읽어주세요
                                        */
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int value;
        struct node *next;
}node;

typedef struct node Node;
typedef Node* Link;

