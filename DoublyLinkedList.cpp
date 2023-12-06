#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next = NULL;
        Node* prev = NULL;
        Node(int d) : data{d} {}
};

void addHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    head->prev = NULL;
}
void addTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    temp->next = NULL;
}
void addPos(Node* &head, int pos, int d) {
    Node* temp = new Node(d);
    Node* t = head;
    Node* n;
    for(int i = 0; i < pos-1; i++) {
        t++;
    }
    n = t->next;
    t->next = temp;
    temp->prev = t;
    temp->next = n;
    temp->next->prev = temp;


}
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    addHead(head, 44);
    print(head);
    addTail(tail, 90);
    print(head);
    addPos(head, 1, 33);
    print(head);

    return 0;
}