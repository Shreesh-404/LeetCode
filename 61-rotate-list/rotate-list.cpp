/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}x
 * };
 */


class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;

        // Finding length to Normalize k and to get pointer on last element
        ListNode* temp = head;
        int n = 1;
        while(temp->next){
            temp = temp->next;
            n++;
        }

        // Making the LL circular
        temp->next = head;

        // Normalizing k
        k = k % n;
        int steps = n - k;

        // Finding the new tail
        ListNode* newTail = head;
        for(int i = 1; i < steps; i++){
            newTail = newTail->next;
        }

        // Breaking the circle
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};