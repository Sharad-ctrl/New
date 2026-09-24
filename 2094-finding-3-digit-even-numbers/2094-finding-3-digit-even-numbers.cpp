class Solution {
public:
    bool check(int i , unordered_map<int,int> mp){
        bool flag = true;
       while(i>0){
            int a = i%10;
            i = i/10;
            if(mp.find(a) != mp.end()){
               if(mp[a]<=0) {
                flag = false;
                break;
               }
               else mp[a]--;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag == false) return false;
        else return true;

    }

    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        int n  = digits.size();
        unordered_map<int , int>mp;
        for(int ele : digits){
            mp[ele]++;
        }
        for(int i = 100 ;i<=999 ;i+=2){
              if(check(i , mp)) ans.push_back(i);
        }
        return ans;
    }
};