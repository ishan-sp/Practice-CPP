#include<iostream>
#include<string>
#include<sstream>
#include<limits>
#include<vector>
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
    if (head != nullptr) {
        temp->next = head;
        head->prev = temp;
        head = temp;
    } else {
        head = temp;
    }
}
void addTail(Node* &head, string d) {
    Node* temp = new Node(d);
    Node* t = head;
    if (head != nullptr) {
        while(t->next != nullptr) {
            t = t->next;
        }
        t->next = temp;
        temp->next = NULL;
        temp->prev = t;
    } else {
        head = temp;
    }
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

void editf(Node* &head, string d, int pos) {
    if (pos == 1) {
        head->data = d;
    } 
    else {
        Node* temp = head;
        for (int i = 0; i <= pos - 2; i++) {
            temp = temp->next;
        }
        temp->data = d;
    }
}

void checkTask(Node* &head, string d) {
    Node* temp = head;
    bool found = false;
    cout << endl << "The tasks that were found containing the word " << d <<" are : " << endl;
    while(temp != NULL) {
        istringstream iss(temp->data);
        string word;

        while (iss >> word) {
            if(word == d) {
                cout << temp->data << endl;
                found = true;
            }
        }
        temp = temp-> next;
    }
    if(found == false) {
        cout << "None";
    }
}
int main() {
    string choice;
    Node* node1 = nullptr;
    Node* head = node1;
    while(true) {
        cout << endl;
        cout<<"[A] Add a task at highest priority\t[B] Add a task at least priority\n[C] Display tasks\t\t\t[D] Delete a task\n[E] Edit a task\t\t\t\t[F] Find a task\n[G] Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (choice == "G") {
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
                addTail(head, temp); }
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

        else if(choice == "E") {
            int num;
            string edit;
            try {
                print(head);
            }
            catch(...) {
                cerr << "Sorry your display operation could'nt be completed"<< endl;
            }
            cout << "Enter string : ";
            cin >> edit;
            cout << endl << "Task position : ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> num;
            editf(head, edit, num);
        }
        else if(choice == "F") { 
            string word;
            cout << "Search with the word : ";
            cin >> word;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            checkTask(head, word);
        }
    }



    return 0;
}