class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head;
        int a = 0;
        while(temp){
            a++;
            temp = temp->next;
        }
        vector<int>ans;
        if(a == 2){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ListNode* temp1 = head;
            ListNode* temp2 = head->next;
            ListNode* temp3 = head->next->next;
            int count = 1;
            vector<int>store;
            while(temp3){
                count++;
                if(temp2->val > temp1->val && temp2->val >temp3->val){
                    store.push_back(count);
                }
                else if(temp2->val < temp1->val && temp2->val < temp3->val){
                    store.push_back(count);
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
                temp3 = temp3->next;
                }
                int n = store.size();
                    if(n == 0 || n == 1){
                        ans.push_back(-1);
                        ans.push_back(-1);
                    }
                    else{sort(store.begin(),store.end());
                    int mn = INT_MAX;
                    for(int i=1;i<store.size();i++){
                        int sub = store[i] - store[i-1];
                        mn = min(sub,mn);
                    }
                    ans.push_back(mn );
                    ans.push_back(store[n-1] - store[0]);
                    }
        }
        return ans;

    }
};