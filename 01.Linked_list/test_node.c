#include<stdio.h>
#include<stdlib.h>

#include "node.h"

int main()
{
	Node *node = (Node*)malloc(sizeof(Node));
	node->value = 1;
	node->next = NULL;

	printf("%d \n", node->value);

	return 0;
}
