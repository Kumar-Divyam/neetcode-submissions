class Solution {
public:

    /*creating string signatures: ex: for "aab" -> "21000000000...24 zeros"
    let: String 1: Has 1 'a' and 11 'b's & String 2: Has 11 'a's and 1 'b'.
    collision: 
        String 1 Signature: 1 (for a) + 11 (for b) = "111000..."
        String 2 Signature: 11 (for a) + 1 (for b) = "111000..."
    so introduced a separator character*/
    string string_sign(string s){
        string sign = "";
        vector<int> alpha(26,0);
        for(int i=0; i< s.length(); i++){
            alpha[s[i]-'a']++;
        }
        for(int i=0; i < 26; i++){
            sign += to_string(alpha[i])+ "|";
        }
        return sign;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0){
            return {{""}};
        }
        vector<vector<string>> res;
        unordered_map<string, vector<string>> hash;
        for(int i=0; i < strs.size(); i++){
            //string temp = strs[i];
            //sort(temp.begin(), temp.end());
            hash[string_sign(strs[i])].push_back(strs[i]);
        }
        for(auto it=hash.begin() ; it != hash.end() ; it++){
            res.push_back(it->second);
        }

        return res;
    }
};
