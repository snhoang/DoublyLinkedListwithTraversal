#include <iostream>
using namespace std;


class Node {
public:
    int value;
    Node* next;
    Node* prev;

};


void printForward(Node*head){
    Node* traverser = head;
    while(traverser != nullptr) {
        cout << traverser->value << endl;
        traverser = traverser->next;
      
    }
}

void printBackwards(Node*tail){
    Node* traverser = tail;
    while(traverser != nullptr) {
        cout << traverser->value << endl;
        traverser = traverser->prev;

    }
}



int main() {
  
  Node* head;
  Node* tail;

  
//add first node
  Node* node = new Node();
  node->value = 1;
  node->next = nullptr;
  node->prev = nullptr;
  head = node;
  tail = node;
  //second element to doubly linked list.
  node = new Node();
  node->value =5;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  node = new Node();
  node->value =9;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  node = new Node();
  node->value =10;
  node->next = nullptr;
  node->prev = tail;
  tail->next = node;
  tail = node;

  //printForward(head);
  printBackwards(tail);
  
  
}