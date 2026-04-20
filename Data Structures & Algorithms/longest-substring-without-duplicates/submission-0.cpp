class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0;
        int j=0;
        int maxi=0;
        while(j<s.length()){
            while(mp[s[j]]>0){
               mp[s[i]]--;
               i++; 
        }
        mp[s[j]]++;
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
    }

};
