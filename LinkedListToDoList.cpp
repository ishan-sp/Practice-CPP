#include<iostream>
#include<string>
#include<limits>
using namespace std;

class Node {
    public:
        string data;
        Node* next = NULL;
        Node* prev = NULL;
        Node(string d) : data{d} {}
};

void addHead(Node* &head, string d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    head->prev = NULL;
}
void addTail(Node* &tail, string d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    temp->next = NULL;
}
void addPos(Node* &head, int pos, string d) {
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
    int ctr = 1;
    while(temp != NULL) {
        cout << ctr << "." << " ";
        cout << temp->data << endl;
        temp = temp->next;
        ctr += 1;
    }
    cout << endl;
}

void del(Node* &head, int pos) {
    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    } else {
        Node* temp = head;
        for (int i = 0; i < pos - 2; i++) {
            temp = temp->next;
        }
        Node* t = temp->next->next;
        temp->next = t;
        if (t != NULL) {
            t->prev = temp;
        }
    }
}


int main() {
    string choice;
    Node* node1 = new Node("");
    Node* head = node1;
    Node* tail = node1;
    while(true) {
        cout << endl;
        cout<<"[A] Add a task at highest priority\t[B] Add a task at least priority\n[C] Display tasks\t\t\t[D] Delete a task\n[E] Edit a task\t\t\t\t[F] Find a task\n[G] Change priority\t\t\t[H] Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == "H") {
            break;
        }
        else if(choice == "A" ) {
            try {
                string temp;
                cout << "Enter your string : ";
                getline(cin, temp);
                addHead(head, temp); }
            catch(...) {
                cerr << "Sorry the addition at highest priority could'nt be completed" << endl;
            }
        }
        else if(choice == "B") {
            try {
                string temp;
                cout << "Enter your string : ";
                getline(cin, temp);
                addTail(tail, temp); }
            catch(...) {
                cerr << "Sorry the addition at least priority could'nt be completed" << endl;
            }
        }
        else if(choice == "C") {
            try {
                print(head);
            }
            catch(...) {
                cerr << "Sorry your display operation could'nt be completed"<< endl;
            }
        }
        else if(choice ==  "D") {
            int task_number;
            cout << "Here are the tasks : " << endl;
            try {
                print(head);
            }
            catch(...) {
                cerr << "Sorry your display operation could'nt be completed"<< endl;
            }
            cout << "Enter the task position number for deletion"<< endl;
            cin >> task_number;
            del(head, task_number);
            
        }
    }

    return 0;
}