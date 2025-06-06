class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> check;
        for(int i : arr){
            check[i]++;
        }
        unordered_set<int>visited;
        for(auto i : check){
            if(visited.find(i.second) == visited.end()){
                visited.insert(i.second);
            }
            else return false;
        }
        return true;
    }
};