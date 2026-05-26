class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string sorted;
        vector<vector<string>>result;
        unordered_map<string,vector<string>>anagrams;
        for(auto s:strs){
            string unsorted=s;
            sort(s.begin(),s.end());
            if(anagrams.find(s)==anagrams.end())anagrams[s]={unsorted};
            else{anagrams[s].push_back(unsorted);}
        }
        for(auto i=anagrams.begin();i!=anagrams.end();i++){
            result.push_back(i->second);
        }
        return result;
    }
};