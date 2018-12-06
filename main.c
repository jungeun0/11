#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	genList();
	
	addTail(10);
	addTail(20);
	addTail(30);
	addTail(40);
	addTail(50);
	
	printf("n을 입력하세요\n");
	scanf("%d",&n);
	
	print_list(n);
;	return 0;
}
