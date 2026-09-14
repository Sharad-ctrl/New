class Solution {
public:
    int reverse_nums(int numb){
        int product = 0;
        while(numb>0){
            int digit = numb%10;
            product = product*10 +digit;
            numb = numb/10;
        }
        return product;
        
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i<n) st.insert(nums[i]);
        }
         for(int i=0;i<n;i++){
             st.insert(reverse_nums(nums[i]));
         }
        return st.size();
    }
};