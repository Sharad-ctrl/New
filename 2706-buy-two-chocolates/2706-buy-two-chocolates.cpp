class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int count = 0;
        int rupees = money;
        sort(prices.begin() , prices.end());
        for(int i=0;i<n;i++){
            if(count == 2) break;
            if(money - prices[i] < 0) continue;
            else{
                money = money - prices[i];
                count++;
            }
        }
        if(count < 2) return rupees ;
        else return money;
    }
};