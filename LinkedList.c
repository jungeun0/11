
typedef struct Linknd{
	
	int data;
	
	
	void *next;
	//struct linked *next;
	
}linknd_t;//구조체 변수 

static linknd_t *list; // 구조체 변수의 실체 , static 은 정적 할당--> 외부에서 변환을 할 수 없음. (extern) 
 
