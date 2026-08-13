class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};

        for(char c : s) {
            freq[c]++;
        }

        string ans = "";

        for(int count = s.size(); count > 0; count--) {
            for(char c = 0; c < 127; c++) {
                if(freq[c] == count) {
                    for(int j = 0; j < count; j++) {
                        ans += c;
                    }
                }
            }
        }

        return ans;
    }
};