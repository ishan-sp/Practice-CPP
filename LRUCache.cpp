#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

void addHead(Node* &head, int key, int val) {
   Node* temp = new Node(key, val);
   temp->next = head;
   head->prev = temp;
   //temp->[rev is already NULL as initialised by the Node constructor
   head = temp;
}

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
class LRUCache : public Cache {
   public:
      void set(int key, int val) override {
         if (mp.empty()) {
            Node* node1 = new Node(key, val);
            Node* head = node1;
            Node* tail = node1;
         }
         auto it = mp.find(key);
         if (it == mp.end()) {
         //case: cache miss
            addHead(head, key, val);
            if(cp == mp.size()) {
               Node* n = tail->prev;
               n->next = NULL;
               tail->prev = NULL;
            }
            else if(cp != mp.size()) {
               Node* temp = head;
               Node* node1 = new Node(key, val);
               while(temp->next != NULL) {
                  temp++;
                  }
                  temp-> next = node1;
                  node1->prev = temp;
                  tail = node1;
               }

            }
/*         else {
            Node* temp = head;
            for(int i = 0; i < mp.size(); i++) {
               if (temp->key == key) {
                  break;
               }
               else {
                  temp++
               }
            }

         }*/
         }
};

/*int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}*/
