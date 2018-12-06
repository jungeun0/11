#include <stdio.h>
#include <stdlib.h>
typedef struct Linknd{
	
	int data;
	
	
	void *next;
	//struct linked *next;
	
}linknd_t;//����ü ���� 

static linknd_t *list; // ����ü ������ ��ü , static �� ���� �Ҵ�--> �ܺο��� ��ȯ�� �� �� ����. (extern) 
linknd_t* create_node(int value){
	linknd_t* ndPtr; //������ ���� ����
	
	
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t)); //void �������̱� ������ �� ��ȯ �ʿ� , linknd_t��ŭ�� ũ���� �޸� �Ҵ� 
	
	if(ndPtr == NULL){
		printf("ERROR!"); 
		return NULL;
	}
	//���� �޸� �Ҵ� 
	
	ndPtr->data = value; 
	ndPtr->next = NULL;
	
	//������ ���� 
	return ndPtr; 	
}





void addTail(int value){
	linknd_t *ndPtr, *newPtr;
	if(list ==  NULL){
		return;
	}
	else{
		ndPtr =list;
		while(ndPtr->next != NULL){
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);
		ndPtr->next = newPtr;
		
	}
	
}

void genList(void){
	list = create_node(0);
	
	return;
}

void print_list(int n){
	linknd_t *ndPtr;
	int i;
	ndPtr = (linknd_t*)list->next;
	
	while(ndPtr != NULL){
		i++;
		if (i == n){
			printf("%i-th value = %i\n",i,ndPtr->data);
			break;
		}
		
		ndPtr = ndPtr->next;

	}
}




