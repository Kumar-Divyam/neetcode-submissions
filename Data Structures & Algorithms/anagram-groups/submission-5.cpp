class Solution {
public:

    bool compare (string s1, string s2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1==s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0){
            return {{""}};
        }
        vector<vector<string>> res;
        //map<string, vector<int>> hash;
        unordered_map<string, vector<string>> hash;
        for(int i=0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            hash[temp].push_back(strs[i]);

        }
        /*for(auto it=hash.begin() ; it != hash.end() ; it++){
            vector<string> common;
            for(int i=0; i< it->second.size(); i++){
                common.push_back(strs[it->second[i]]);
            }
            res.push_back(common);
        }*/
        for(auto it=hash.begin() ; it != hash.end() ; it++){
            res.push_back(it->second);
        }

        return res;
    }
};
