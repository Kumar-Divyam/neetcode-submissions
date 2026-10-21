class Solution {
public:
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
            hash[string_sign(strs[i])].push_back(strs[i]);
        }
        for(auto it=hash.begin() ; it != hash.end() ; it++){
            res.push_back(it->second);
        }

        return res;
    }
};
