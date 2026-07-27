class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         int product = 0;
       ListNode* temp = head;
       vector<int>nums;
        while(temp){
                int digit = temp->val;
                nums.push_back(digit);
                temp = temp->next;
        }
        int n = nums.size();
        swap(nums[k-1] , nums[n-k]);
        ListNode* c = new ListNode(100);
        ListNode* tempA = c;
        int i = 0;
        while(i<n){
            tempA->next = new ListNode(nums[i]);
            tempA = tempA->next;
            i++;
        }
        return c->next;
    }
};