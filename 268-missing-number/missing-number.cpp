class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;

        for(auto x: nums){
            st.insert(x);
        }

        for(int i = 0; i <= nums.size(); i++){
            if(st.count(i)==0){
                return i;
            }
            
        }
        return -1;
    }
};