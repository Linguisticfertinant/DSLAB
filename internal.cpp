
//insertion at any position
#include <iostream>
using namespace std;

class Node {
public:
int data;
Node* next;
Node(int val) {
data = val;
next = NULL;
}
};

Node* insertAtPosition(Node* head, int data, int position)
{
Node* newNode = new Node(data);
if (position == 1) {
newNode->next = head;
return newNode;
}
Node* temp = head;
int i = 1;
while (i < position - 1 && temp != NULL) {
temp = temp->next;
i++;
}
if (temp == NULL) {
cout << "Invalid position" << endl;
delete newNode;
return head;
}
newNode->next = temp->next;
temp->next = newNode;
return head;
}
void printList(Node* head) {
Node* temp = head;
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
int main() {
Node* head = NULL;
head = insertAtPosition(head, 10, 1);
head = insertAtPosition(head, 20, 2);
head = insertAtPosition(head, 30, 3);
cout << "Original List:\n";
printList(head);
head = insertAtPosition(head, 15, 2);
cout << "After insertion at position 2:\n";
printList(head);
return 0;
}


//deletion at any position
#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int val) {
data = val;
next = NULL;
}
};
Node* deleteAtPosition(Node* head, int position) {
if (head == NULL) {
cout << "List is empty\n";
return head;
}
if (position == 1) {
Node* temp = head;
head = head->next;
delete temp;
return head;
}
Node* temp = head;
for (int i = 1; i < position - 1 && temp != NULL; i++) {
temp = temp->next;
}
if (temp == NULL || temp->next == NULL) {
cout << "Invalid position\n";
return head;
}
Node* nodeToDelete = temp->next;
temp->next = nodeToDelete->next;
delete nodeToDelete;
return head;
}
void printList(Node* head) {
while (head != NULL) {
cout << head->data << " -> ";
head = head->next;
}
cout << "NULL\n";
}
int main() {
Node* head = NULL;
head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
cout << "Original List:\n";
printList(head);
head = deleteAtPosition(head, 2);
cout << "After deleting position 2:\n";
printList(head);
return 0;
}

//display linked list
#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int val) {
data = val;
next = NULL;
}
};
void display(Node* head) {
if (head == NULL) {
cout << "List is empty\n";
return;
}
Node* temp = head;
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
int main() {
Node* head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
cout << "Linked List:\n";
display(head);
return 0;
}
