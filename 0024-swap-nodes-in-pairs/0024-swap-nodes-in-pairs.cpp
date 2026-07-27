class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
       int product = 0;
       ListNode* temp = head;
       vector<int>nums;
        while(temp){
                int digit = temp->val;
                nums.push_back(digit);
                temp = temp->next;
        }
        int n = nums.size();
        int i =0;
        int j = 1;
        while(j <n){
            swap(nums[i] , nums[j]);
            i += 2;
            j+= 2;
        }
        ListNode* c = new ListNode(100);
        ListNode* tempA = c;
        i = 0;
        while(i<n){
            tempA->next = new ListNode(nums[i]);
            tempA = tempA->next;
            i++;
        }
        return c->next;
    }
};