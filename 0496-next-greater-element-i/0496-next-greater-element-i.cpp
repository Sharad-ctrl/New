class Solution {
public:
int  helper(vector<int>& nums2 , int num , int check){
    int n = nums2.size();
   
    int nextgt = -1;
    int index = 0;
    while(index <n){
        if(nums2[index] == num){
            break;
        }
        index++;
    }
    for(int i =index;i<n;i++){
        if(nums2[i]>num ) {
            nextgt = nums2[i];
            break;
        }
    }
    return nextgt;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            ans.push_back(helper(nums2 , nums1[i] , i));
        }
        return ans;
    }
};