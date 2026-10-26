class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(int i=0; i< strs.size(); i++){
            res += to_string(strs[i].length());
            res += "#";
            res += strs[i];
        }
        return res;

    }

    vector<string> decode(string s) {
        vector<string> res;
        for(int i=0; i< s.length(); ){
            string i_len = "";
            while(s[i] != '#'){
                i_len += s[i];
                i++;
            }
            i++;
            int k = stoi(i_len);
            string i_str = "";
            for(int j= 1; j <= k; j++ ){
                i_str += s[i++];
            }
            res.push_back(i_str);
        }
        return res;

    }
};
