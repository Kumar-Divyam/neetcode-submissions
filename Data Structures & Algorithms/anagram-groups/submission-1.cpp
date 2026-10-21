//modifying the array & erase

class Solution {
public:
    /*bool compare (string s1, string s2){
        unordered_set set1;
        for(int i=0; i < s1.length(); i++){
            set1.insert(s1[i]);
        }
        for(int i=0; i < s2.length(); i++){
            if(!set1.count(s2[i]))
                return false;
        }
        return true;
    }
    // repetetion of characters is not accomodated
    */

    bool compare (string s1, string s2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1==s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        for(int i=0; i < strs.size() ; i++){
            vector<string> common;
            vector<int> c_indices;
            common.push_back(strs[i]);
            for(int j=i+1; j < strs.size() ; j++){
                if(compare(strs[i], strs[j])){
                    c_indices.push_back(j);
                    common.push_back(strs[j]);
                }    
            }

            for(int k=0; k < c_indices.size() ; k++){
                strs.erase(strs.begin() + (c_indices[k]) - k);
            }

            res.push_back(common);
        }
        return res;
    }
};
