class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        int t = strs.size();
        if(t<10)
            res+="0";
        res += to_string(t);
        for(int i=0; i< strs.size(); i++){
            int str_i_len = strs[i].length();
            if(str_i_len < 10)
                res+="00";
            else if(str_i_len < 100)
                res+="0";
            res += to_string(str_i_len);
            res += strs[i];
        }
        //cout<<res;
        return res;
    }

    vector<string> decode(string s) {
        string temp = "";
        temp += s[0];
        temp += s[1];
        int vec_size = stoi(temp);
        //cout<<vec_size<<endl;
        if(vec_size < 1)
            return {}; //{""} & {} are not same
        vector<string> res;
        for(int i = 2; i < s.length(); ){
            string s_i_len="";
            s_i_len += s[i];
            s_i_len += s[++i];
            s_i_len += s[++i];
            int str_i_len = stoi(s_i_len);
            //cout<<s_i_len<<endl<<str_i_len;
            string s_i = "";
            for(int j=1; j <= str_i_len ; j++){
                s_i += s[++i];
            }
            i++; //tricky
            res.push_back(s_i);
        }
        return res;
    }
};
