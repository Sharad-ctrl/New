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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        ListNode* tail = NULL;
        if(head == NULL) return head;
        while(temp){
            if(temp->next == NULL) tail = temp;
            count++;
            temp = temp->next;
        }
        if(k>=count) k = k%count;
        if(k == 0) return head;
        temp = head;
        for(int i = 1; i< count-k ;i++){
            temp = temp->next;
        }
        tail ->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};