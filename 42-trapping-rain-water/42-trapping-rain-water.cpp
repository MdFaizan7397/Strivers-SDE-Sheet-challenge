//BRUTE FORCE
/*class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int maxl=0, maxr=0;
            for(int l=0; l<=i; l++){
                if(height[l]>maxl){ maxl=height[l]; }
            }
            for(int r=i; r<n; r++){
                if(height[r]>maxr){ maxr=height[r]; }
            }
            
            ans=ans+(min(maxl, maxr)-height[i]);
            
        }
        return ans;
    }
};*/
//OPTIMIZED APPROACH TC=O(N),SC=O(N)

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>l(n);
        vector<int>r(n);
        int ma,mi;
        ma=l[0]=height[0];
        mi=r[n-1]=height[n-1];
        for(int i=1;i<n;i++){
          if(height[i]>ma) ma=height[i];
            l[i]=ma;
        }
        for(int i=n-2;i>=0;i--){
            if(height[i]>mi) mi=height[i];
            r[i]=mi;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + min(l[i],r[i])-height[i];
        }
        return sum;
        
    }
};