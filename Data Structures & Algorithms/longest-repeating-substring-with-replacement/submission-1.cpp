class Solution {
public:
    int characterReplacement(string s, int k) {
        //brute force
        int res= 0;
        for(int i=0; i < s.length(); i++){
            vector<int> hash(26,0);
            int max_freq = 0;
            for(int j=i; j < s.length(); j++){
                hash[s[j]-'A']++;
                int window = j-i+1;
                max_freq = max(max_freq, hash[s[j]-'A']);
                if(window - max_freq <= k){
                    res = max(res, window);
                }
                else
                    break;
            }
        }
        return res;
    }
};
