class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();

        set<long long> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        int ans = 0;
        for(int i=0; i<n; i++) {
            int cnt = 1;
            long long num = nums[i];
            for(int j=0; j<5; j++) {
            long long mul = num*num;
            num = mul;
          
            if(st.find(mul) != st.end()){
                cnt++;
                ans = max(ans, cnt);
            }
            else{
                break;
            }

            if((mul)>1000) {
                break;
            }

            }
        }
        if(ans<2) {
            return -1;
        }
        return ans;
    }
};