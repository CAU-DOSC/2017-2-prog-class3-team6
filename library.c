/*
  라이브러리.c
  함수의 내용을 작성해주세요
  먼저 readme.txt를 읽어주세요
                              */
#include "header.h"
Link CreatNode(int data,int *count)
{
        Link cur;
        cur=(Link)malloc(sizeof(Node));
        if(cur==NULL){
                return NULL;
        }
        cur->value=data;
        cur->next=NULL;
        (*count)++;
        return cur;
}
Link AddNode(Link cur,Link head)
{
        Link nextnode=head;
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
void PrintNode(Link head)
{
        Link nextnode = head;
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

//중간값을 출력
void Print_Mid(Link list_head, int count) {
        int cnt = count/2;
        if(count%2 == 1)
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
                while(cnt>1)
                {
                        list_head = list_head->next;
                        cnt--;
                }
                printf("%d", list_head->value);
                list_head = list_head->next;
                printf(", %d\n",list_head->value);
        }
}

void Delete_OddNode(Link* loc, int count) {
        Node** hptr = loc;
        Link target = *hptr;
        Link cur = target->next;
        *hptr = cur;
        free(target);
        // 연결 리스트 개수가 홀, 짝일때 반복문 조건이 달라짐 (직접 그려보면 안다)
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

// 남은 자료를 순서대로 삭제
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
/*
//remove the node
void removenode(Link target)
{
        node *removenode = target->next;
        target->next = removenode->next;
        free(removenode);
}
//remove the even linked list content
void Delete_Odd(Link head, Link cur, int count)
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
*/
