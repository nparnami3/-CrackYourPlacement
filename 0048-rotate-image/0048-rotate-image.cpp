class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        //TRANSPOSE MATRIX 
        int n = arr.size();
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                swap(arr[i][j], arr[j][i]);
            }
        }
        //REVERSE MATRIX
        for(int i=0; i<n; i++){
            reverse(arr[i].begin(), arr[i].end());
        }
    }
};