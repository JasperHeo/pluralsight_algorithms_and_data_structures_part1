#include<stdio.h>
#include<stdlib.h>

#include "../include/queue.h"

int main()
{
	int i;

	printf("run... \n");
	queueInit(8);

	for(i=0; i<8;i++){
		Node temp;
		temp.value = i;
		queuePush(temp);
	}

	queuePrint();

	for(i=0;i<4; i++){
		Node* temp = queuePull();
		printf("%d ", temp->value);
	}
	printf("\n");

	Node* temp = queuePeek();
	printf("peek: %d\n", temp->value);


	queuePrint();


	return 0;
}
