class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        int total= n*n;
        int repeat=0;
        int missing=0;


        vector<int> result(total+1,0);

        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                int number=grid[i][j];
                result[number]++;
            }
        }
       for(int k=1;k<result.size();k++){
         if(result[k]==2){
            repeat=k;
        }
        if(result[k]==0){
            missing=k;
        }
       }
       return{repeat,missing};
    }
};