#include <stdio.h>
#include <stdlib.h>
typedef struct Linknd{
	
	int data;
	
	
	void *next;
	//struct linked *next;
	
}linknd_t;//구조체 변수 

static linknd_t *list; // 구조체 변수의 실체 , static 은 정적 할당--> 외부에서 변환을 할 수 없음. (extern) 
linknd_t* create_nod(int value){
	linknd_t* ndPtr; //포인터 변수 선언
	
	
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t)); //void 포인터이기 때문에 형 변환 필요 , linknd_t만큼의 크기의 메모리 할당 
	
	if(ndPtr == NULL){
		printf("ERROR!"); 
		return NULL;
	}
	//동적 메모리 할당 
	
	ndPtr->data = value; 
	ndPtr->next = NULL;
	
	//정수값 저장 
	return ndPtr; 	
}





void addTail(){
	linknd_t *ndPtr;
	linknd_t *head;
	
	if(list ==  NULL){
		return;
	}
	else{
		ndPtr =list;
		while(ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
		
		ndPtr = create_node(value);
		ndPtr->next = ndPtr;
		
	}
	
	
	
	
}
