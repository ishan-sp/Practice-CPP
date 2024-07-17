#include<iostream>
using namespace std;
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
        int t1val, t2val;
        while(temp1 != nullptr || temp2 != nullptr) {
            bool f1 = true;
            bool f2 = true;
            if(temp1 == nullptr) {
                t1val = 0;
                t2val = temp2->val;
                f1 = false;
            }
            if(temp2 == nullptr) {
                t2val = 0;
                t1val = temp1->val;
                f2 = false;
            }
            if(f1&&f2 == true) {
                t1val = temp1->val;
                t2val = temp2->val;
            }
            sum = t1val + t2val;
            //cout << "t1val : " << t1val << " t2val : " <<t2val << " sum : " <<sum;
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
            if(temp1 != nullptr) {
                temp1 = temp1->next;
            }
            if(temp2 != nullptr) {
                temp2 = temp2->next;
            }
            temp3 = temp3->next;
        }
        ListNode* disp = head->next;
        while(disp != nullptr) {
            cout << disp->val << " ";
            disp = disp->next;
        }
        return head->next;
};
};
int main() {
    
    ListNode* head1 = new ListNode(9);
    ListNode* l1 = new ListNode(9);
    ListNode* l2 = new ListNode(9);
    ListNode* l3 = new ListNode(9);
    ListNode* l4 = new ListNode(9);
    ListNode* l5 = new ListNode(9);
    ListNode* l6 = new ListNode(9);
    ListNode* l7 = new ListNode(9);
    ListNode* l8 = new ListNode(9);
    head1->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = l6;
    l6->next = l7;
    l7->next = l8;

    //ListNode* l3 = new ListNode(8);
    ListNode* head2 = new ListNode(9);
    ListNode* l9 = new ListNode(9);
    ListNode* l10 = new ListNode(9);
    ListNode* l11 = new ListNode(9);
    head2->next = l9;
    l9->next = l10;
    l10->next = l11;
    //ListNode* l6 = new ListNode(8);
    Solution s1;
    s1.addTwoNumbers(head1, head2);
}