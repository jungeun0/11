#include <stdio.h>
#include <stdlib.h>
typedef struct Linknd{
	
	int data;
	
	
	void *next;
	//struct linked *next;
	
}linknd_t;//����ü ���� 

static linknd_t *list; // ����ü ������ ��ü , static �� ���� �Ҵ�--> �ܺο��� ��ȯ�� �� �� ����. (extern) 
linknd_t* create_nod(int value){
	linknd_t* ndPtr; //������ ���� ����
	
	
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t)); //void �������̱� ������ �� ��ȯ �ʿ� , linknd_t��ŭ�� ũ���� �޸� �Ҵ� 
	
	if(ndPtr == NULL){
		printf("ERROR!"); 
		return NULL;
	}
	//���� �޸� �Ҵ� 
	
	ndPtr->data = value; 
	ndPtr->next = NULL; //���� ������? 
	
	//������ ���� 
	return ndPtr; 	
}
