class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        string sorted;
        for(string s:strs){
            sorted=s;
            sort(sorted.begin(),sorted.end());
            if(m.find(sorted)==m.end())m[sorted]={s};
            else if(m.find(sorted) != m.end())m[sorted].push_back(s);
        }
        vector<vector<string>>res;
        for(auto i=m.begin();i!=m.end();i++){
            res.push_back(i->second);
        }
        return res;
    }
};
