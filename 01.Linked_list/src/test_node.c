#include <stdio.h>
#include <stdlib.h>

#include "../include/node.h"

int main() {
  Node *node1 = (Node *)malloc(sizeof(Node));
  node1->value = 1;
  node1->next = NULL;

  Node *node2 = (Node *)malloc(sizeof(Node));
  node2->value = 5;
  node2->next = NULL;

  Node *node3 = (Node *)malloc(sizeof(Node));
  node3->value = 9;
  node3->next = NULL;

  addList(node1);
  addList(node2);
  addList(node3);
  printList();

  return 0;
}
