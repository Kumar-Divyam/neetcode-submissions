class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0){
            return {{""}};
        }
        vector<vector<string>> res;
        unordered_map<string, vector<string>> hash;
        for(int i=0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            hash[temp].push_back(strs[i]);

        }
        for(auto it=hash.begin() ; it != hash.end() ; it++){
            res.push_back(it->second);
        }

        return res;
    }
};
