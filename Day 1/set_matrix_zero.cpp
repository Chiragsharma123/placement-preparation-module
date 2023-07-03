class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int rows[n];
        for(int i=0; i<n; i++)
            rows[i] = 1;
        int cols[m];
        for(int i=0; i<m; i++)
            cols[i] = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(rows[i] == 0 || cols[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};