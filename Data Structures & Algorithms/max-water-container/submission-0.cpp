class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=INT_MIN;
        int prd=1;
        int n=heights.size();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                prd=(min(heights[i],heights[j]))*(j-i);
                maxi=max(maxi,prd);
            }
        }
        return maxi;
    }
};
