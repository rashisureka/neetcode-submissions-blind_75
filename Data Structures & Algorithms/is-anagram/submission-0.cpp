class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mp2[t[i]]++;
        }
        return mp1==mp2;
    }
};
