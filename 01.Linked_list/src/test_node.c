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

  node1->next = node2;

  Node *temp = node1;
  while (1) {
    printf("%d ", temp->value);
    if (temp->next == NULL) {
      printf("\n");
      break;
    } else {
      temp = temp->next;
    }
  }
  // printf("%d \n", node->value);

  return 0;
}
