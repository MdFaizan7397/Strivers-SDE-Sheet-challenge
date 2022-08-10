/*BRUTE FORCE
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
         int maxi=nums[0];
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
           int  product=1;
            for (int k=i;k<=j;k++){
                product*=nums[k];
            }
            maxi =max(maxi,product); 
        }
    }
    return maxi;
    }
};*/

//OPTMIZED APPROACH
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int ma=ans;
        int mi=ans;
        
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            ans=max(ans,ma);
        }
        return ans;
    }
};