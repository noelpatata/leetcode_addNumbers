#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            curr->next = new ListNode(sum % 10);
            carry = sum / 10;
            curr = curr->next;
        }

        return dummy->next;
    }




int main() {
    ListNode* l1elem2 = new ListNode(9);
    ListNode* l1 = new ListNode(5, l1elem2);

    ListNode* l2elem1 = new ListNode(9);
    ListNode* l2elem2 = new ListNode(2, l2elem1);
    int l2elem10 = 1;
    
    ListNode* l2 = new ListNode(l2elem10, l2elem2);


    ListNode* result = addTwoNumbers(l1, l2);

    printList(result);
    



    return 0;
}

