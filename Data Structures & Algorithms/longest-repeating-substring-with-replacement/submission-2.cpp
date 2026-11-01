class Solution {
public:
    int characterReplacement(string s, int k) {
        int res= INT_MIN, max_freq=0;
        vector<int> hash(26,0);
        for(int l=0, r=0; r<s.length(); r++){
            hash[s[r] - 'A']++;
            max_freq = max(max_freq, hash[s[r] - 'A']);
            while((r-l+1) - max_freq > k){
                hash[s[l] - 'A']--;
                l++;
            }
            res = max(res, (r-l+1));
        }
        return res;
    }
};
