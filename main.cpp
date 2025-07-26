#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    int arraySize = getLength(l1);
    return nullptr;
}

void printList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) std::cout << " -> ";
        head = head->next;
    }
    std::cout << std::endl;
}

int getLength(ListNode* head) {
    int length = 0;
    while (head) {
        length++;
        head = head->next;
    }
    return length;
}




int main() {
    ListNode* elem1 = new ListNode(3);
    ListNode* elem2 = new ListNode(4, elem1);
    int elem3 = 2;

    ListNode* l1 = new ListNode(elem3, elem2);
    printList(l1);

    ListNode* l2elem1 = new ListNode(4);
    ListNode* l2elem2 = new ListNode(6, l2elem1);
    int l2elem3 = 5;
    
    ListNode* l2 = new ListNode(l2elem3, l2elem2);


    ListNode* result = addTwoNumbers(l1, l2);
    



    return 0;
}
