class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0;
        int j=n-1;
        int maxi=0;
        while(i<j){
            int prd=min(heights[i],heights[j])*(j-i);
            maxi=max(maxi,prd);
            if(heights[i]>heights[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxi;
    }
};
