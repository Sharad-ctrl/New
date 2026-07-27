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
    ListNode* deleteDuplicates(ListNode* head) {
       int product = 0;
       ListNode* temp = head;
       vector<int>nums;
        while(temp){
                int digit = temp->val;
                nums.push_back(digit);
                temp = temp->next;
        }
         vector<int>ans;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            ans.push_back(nums[i]);
            for(int j=0;j<n;j++){
                if(nums[i] == nums[j] && i!= j){
                    ans.pop_back();
                    break;
                }
            }
        }
        ListNode* c = new ListNode(100);
        ListNode* tempA = c;
       int i = 0;
        while(i<ans.size()){
            tempA->next = new ListNode(ans[i]);
            tempA = tempA->next;
            i++;
        }
        return c->next;
    }
};