#include<stdio.h>
#include<stdlib.h>

#include "../include/queue.h"

static Node* head;
static Node* tail;
static unsigned int g_queueCount;
static unsigned int g_queueSize;

void queueInit(unsigned int size)
{
	head = NULL;
	tail = NULL;
	g_queueCount = 0;
	g_queueSize = size;
}

void queuePush(Node node)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->value = node.value;

	if(g_queueCount == 0){
		head = temp;
		head->next = NULL;
		head->prev = NULL;
	}
	else {
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
	tail = temp;
	g_queueCount++;
}

Node* queuePull()
{
	Node* temp;

	if(g_queueCount == 0){
		fprintf(stderr , "queue is empty\n");
		return NULL;
	}
	else {
		temp = head;
		head = head->next;
		g_queueCount--;
		return temp;
	}
}

Node* queuePeek()
{
	if(g_queueCount == 0){
		fprintf(stderr , "queue is empty\n");
		return NULL;
	}
	else {
		return head;
	}

}

void queuePrint()
{
	unsigned int count = g_queueCount;
	Node* temp = head;
	
	while(count > 0 ){
		printf("%d\n", temp->value);
		temp = temp->next;
		count--;
	}
}

unsigned int queueSize()
{
	return g_queueCount;
}
