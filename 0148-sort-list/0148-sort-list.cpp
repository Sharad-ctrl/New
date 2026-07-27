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
    ListNode* sortList(ListNode* head) {
         int product = 0;
       ListNode* temp = head;
       vector<int>nums;
        while(temp){
                int digit = temp->val;
                nums.push_back(digit);
                temp = temp->next;
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
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