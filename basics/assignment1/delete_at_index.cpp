// Problem 5

/*LinkedList is a simple data structure in which each element point to the other element   
In this problem a linked list is given to you, write a function deleteAtIndex() in it so that node at a specific index could be deleted.
 Here is the main function:
*/

// The Node and linkedlist class are, 
#include <iostream>
using namespace std;
struct Node {
   int value;
   Node* next;
   Node(int value) {
       this->value = value;
       next = nullptr;
   }
};
struct LinkedList {
   private:
       Node* head;
       Node* tail;
       int length;
   public:
       LinkedList() {
           head = NULL;
           tail = NULL;
           length = 0;
       }
       ~LinkedList() {
           Node* temp = head;
           while (head) {
               head = head->next;
               delete temp;
               temp = head;
           }
       }


void printList() {
           Node* temp = head;
           while (temp != nullptr) {
               cout << temp->value << endl;
               temp = temp->next;
           }
       }
       void append(int value) {
           Node* newNode = new Node(value);
           if (length == 0) {
               head = newNode;
               tail = newNode;
           } else {
               tail->next = newNode;
               tail = newNode;
           }
           length++;
       }
       void deleteAtIndex(int index) {
        if (index < 0 || index >= length || length == 0)
        {
          return;
        }
        // Special case - node = head
        if (index == 0)
        {
          Node *aux = head;
          head = head->next;
          delete aux;
          length--;
          return;
        }
        Node *cur_node = head;
        for (int i = 1; i < index; i++)
        {
          cur_node = cur_node->next;
        }
        Node *aux = cur_node->next;
        cur_node->next = cur_node->next->next;
        delete aux;
        length--;
        return;
       }       
 };

int main() {

  LinkedList lst;

  // Creating a list of elements 1 -> 2 -> 3 -> 4 -> 5 
  for (auto i: {1, 2, 3, 4, 5})
      lst.append(i);


  lst.printList();

  // Calling Delete
  lst.deleteAtIndex(0);

  lst.printList();        // Now result must equal to 2->3->4->5
  return 0;
}


