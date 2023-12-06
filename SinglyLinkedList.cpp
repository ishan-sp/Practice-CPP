#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int d) {
            this->data = d;
            this->next = NULL;
        }
};

void addHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void addTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
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
    temp->next = n;
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
    addHead(head, 15);
    addHead(head, 25);
    addTail(tail, 50);
    print(head);
    addPos(head, 1, 60);
    print(head);


    return 0;
}