typedef struct node {
	int value;
} Node;

void queueInit(unsigned int size);
void queuePush(Node node);
Node* queuePull();
Node* queuePeek();
void queuePrint();
unsigned int queueSize();
