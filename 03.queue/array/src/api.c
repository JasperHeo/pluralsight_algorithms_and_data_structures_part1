#include<stdio.h>
#include<stdlib.h>

#include "../include/queue.h"

static unsigned int g_head;
static unsigned int g_tail;
static unsigned int g_queueCount;
static const unsigned int g_queueSize = 8;
static Node g_array[8]; //g_queueSize


void queueInit()
{
	g_head = 0;
	g_tail = 0;
	g_queueCount = 0;
}

void queuePush(Node node)
{
	/*
	 * relocate tail index
	 */
	if(g_tail < g_queueSize){
			g_tail++;
	}
	else{
		g_tail = 0;
	}
	g_queueCount++;

	if(g_queueCount > g_queueSize){
		fprintf(stderr, "Queue is overflow\n");
		return;
	}

	g_array[g_tail].value = node.value;
}

Node* queuePull()
{
	unsigned int temp = g_head;

	/* check queue is empty */
	if(g_queueCount == 0){
		fprintf(stderr, "Queue is empty\n");
		return NULL;
	}

	/*
	 * Relocate head index
	 */
	if(g_head < g_queueSize){
		g_head++;
	}
	else {
		g_tail = 0;
	}
	g_queueCount--;

	return &g_array[temp];
}

Node* queuePeek()
{
	unsigned int temp = g_head;

	/* check queue is empty */
	if(g_queueCount == 0){
		fprintf(stderr, "Queue is empty\n");
		return NULL;
	}
	else {
		return &g_array[temp];
	}
}

void queuePrint()
{
	unsigned int count = g_queueCount;
	unsigned int temp = g_head;
	
	while(count > 0 ){
		printf("%d\n", g_array[temp].value);

		/*
		 * Relocate head index
		 */
		if(temp < g_queueSize){
			temp++;
		}
		else {
			temp = 0;
		}
		count--;
	}
}

unsigned int queueSize()
{
	return g_queueCount;
}
