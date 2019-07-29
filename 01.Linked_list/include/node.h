typedef struct node {
  int value;
  struct node* next;
} Node;

void addList(Node* node);
void printList();
