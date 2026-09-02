class Solution {
public:
    bool areAlmostEqual(string s, string t) {
        if (s == t) return true;
        
        vector<int> diffs;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[i]) {
                diffs.push_back(i);
            }
        }
        if (diffs.size() == 2) {

            swap(s[diffs[0]], s[diffs[1]]);
            

            return s == t;
        }
        return false;
        
    }
};