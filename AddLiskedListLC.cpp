#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* temp3;
        ListNode* head = new ListNode();
        ListNode* node;
        temp3 = head;
        int carryover = 0;
        int sum;
        while(temp1 != nullptr || temp2 != nullptr) {
            sum = temp1->val + temp2->val;
            cout << sum << endl;
            if(sum >= 10) {
                sum = sum-10;
                node = new ListNode(sum+carryover);
                carryover = 1;
            }
            else {
                node = new ListNode(sum+carryover);
            }
            temp3->next = node;
            temp1 = temp1->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
        ListNode* disp = head->next;
        while(disp != nullptr) {
            cout << disp->val << " ";
            disp = disp->next;
        }
    }
};

int main() {
    ListNode* head1 = new ListNode(2);
    ListNode* l1 = new ListNode(4);
    ListNode* l2 = new ListNode(3);
    head1->next = l1;
    l1->next = l2;
    //ListNode* l3 = new ListNode(8);
    ListNode* head2 = new ListNode(5);
    ListNode* l4 = new ListNode(6);
    ListNode* l5 = new ListNode(4);
    head2->next = l4;
    l4->next = l5;
    //ListNode* l6 = new ListNode(8);
    Solution s1;
    s1.addTwoNumbers(head1, head2);

    return 0;
}