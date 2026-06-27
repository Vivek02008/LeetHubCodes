class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int t= target;
        int m = matrix.size(); 
        int n = matrix[0].size(); 
        for(int i =0 ;i<m;i++){
            int l =0; int h = (n*m)-1;
            while(l<=h){
                int i = l+(h-l)/2;
                int r = i/n;
                int c = i%n;
                if(matrix[r][c]== t )return true;
                else if (matrix[r][c]<t) l = i+1;
                else h = i-1;
            }
        }
        return false;
    }
};