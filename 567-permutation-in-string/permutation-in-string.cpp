class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> count(26, 0);

        for (char c : s1) {
            count[c - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < s2.length(); right++) {
            count[s2[right] - 'a']--;

            if (right - left + 1 > s1.length()) {
                count[s2[left] - 'a']++;
                left++;
            }

            if (right - left + 1 == s1.length()) {
                bool valid = true;

                for (int i = 0; i < 26; i++) {
                    if (count[i] != 0) {
                        valid = false;
                        break;
                    }
                }

                if (valid) return true;
            }
        }

        return false;
    }
};