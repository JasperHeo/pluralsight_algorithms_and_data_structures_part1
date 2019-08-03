typedef struct node {
	int value;
	struct node* next;
	struct node* prev;
} Node;

void queueInit(unsigned int size);
void queuePush(Node node);
Node* queuePull();
Node* queuePeek();
void queuePrint();
unsigned int queueSize();
