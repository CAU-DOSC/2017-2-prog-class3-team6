# README file for TEAM[3,6]:

This text file describes brief but precise and complete specification of project including:
- funtion descriptions: name, input/output parameters
- declaration of of important data and data types to be included in user header file
- your team's brief ideas of implementations

- - -
Your description start form next line and do not delete lines upto this point.
- - - - - - - - - - - - - - - - - - - -
*만들 함수 내역*
node에 값을 넣는 함수         -->이지호
새로운 node를 추가하는 함수   -->이지호
node를 역순으로 출력하는 함수 -->고재원
중간값을 출력하는 함수
node를 정순으로 출력하는 함수 -->이지호
node를 홀수번째 삭제하는 함수

이중 하나 골라서 만들어 주시면 됩니다.
- - - - - - - - - - - - - - - - - - - - 
11/26
파일들의 기본 형태를 잡았습니다.
main.c에 기본적인 변수를 선언했습니다.
header.h에 구조체를 선언하였습니다.
- - - - - - - - - - - - - - - - - - - - 
중요한 자료형
구조체 node & 선언 = Node
Link = Node*
----------------------------------------
만들어야 하는 함수 내용 ( 추가&수정 바람 )

1. 현재 연결리스트 출력 함수
 void Print_data
  input : Link list_head
  output : void 

2. 연결 리스트의 개수 찾는 함수
 int Count_data
  input : Link list_head
  output : int count

3. 연결 리스트를 역순으로 출력하는 함수
 void Print_Reverse
   input : Link list_head , int count
   output : void

4. 입력된 자료의 중간 위치 값 출력하는 함수
 void Print_Mid
   input : Link list_head , int count
   output : void

5. 홀수 번째 자료들 삭제
 void Delete_OddNode
   input : Node** headptr
   output : void

6. 남은 리스트 삭제
 void Delete_Rest
     input : Link list_head
     output : void
