//BRUTE FORCE
/*class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        long long int n = matrix.size();
        long long int i,j;
        vector<int>s;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                long long int a = matrix[i][j];
                s.push_back(a);  //Pushing the elements one by one in the vector s
            }
        }
        sort(s.begin(), s.end());
        return s[k-1];   //k-1 is the index of the kth smallest number
    }
};*/

//OPTIMAL APPROACH :  HEAP: priority queue

/*class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>pq; int n = matrix.size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                pq.push(matrix[i][j]);
                if(pq.size() > k) pq.pop();
            }
        return pq.top();   
    }
};*/

//APPROACH 3 : BINARY SEARCH
class Solution {
public:
    //from left-bottom or right-top, count how many numbers are less equal than mid
    int solve(vector<vector<int>>& matrix, int mid){
        int count = 0, n = matrix.size(), i = n-1, j = 0;
        while(i >= 0 && j < n){
            if(matrix[i][j] > mid) i--;
            else{
                count += (i+1);
                j++;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), i = matrix[0][0], j = matrix[n-1][n-1];
        while(i < j){
            int mid = i + (j-i)/2;
            int posi = solve(matrix, mid);
            if(posi < k) i = mid+1;
            else j = mid;
        }
        return i;
    }  
};