class Solution {
public:

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(100);
        ListNode* temp = root;
       int carry = 0;
       int sum;
       while(l1 || l2){
         sum = carry;
        if(l1){
            sum+=l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2 = l2->next;
        }
        carry = sum/10;
        ListNode* tempC = new ListNode(sum%10);
        temp->next = tempC;
        temp = tempC;
       }
       if(carry != 0){
        ListNode* tempC = new ListNode(carry);
        temp->next = tempC;
        temp = tempC;
       }
       return root->next;
    }
};