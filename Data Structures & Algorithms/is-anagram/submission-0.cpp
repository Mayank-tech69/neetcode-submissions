class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        int n = s.size();
        int m = t.size();
        for(int i = 0; i<n ;i++){
            map1[s[i]]++;
        }
        for(int j = 0; j<m ;j++){
            map2[t[j]]++;
        }
        return (map1==map2) ? true : false;
    }
};
