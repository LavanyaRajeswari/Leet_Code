class Solution {
public:
    int trap(vector<int>& height) {
    int i=0,j=height.size()-1;    
    int imax=0,jmax=0;   
    int ans=0;
    while(i<=j){
        if(height[i]<height[j]){
            if(height[i]>imax){
                imax=height[i];
            }
            else{
                ans+=imax-height[i];
            }
            i++;
        }
        else{
            if(height[j]>jmax){
                jmax=height[j];
            }
            else{
                ans+=jmax-height[j];
            }
            j--;
        }
    }
    return ans;
    }
};