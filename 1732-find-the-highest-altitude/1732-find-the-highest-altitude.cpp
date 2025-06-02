class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int higestpoint=0;
        int altitude=0;
        for(int i=0;i<gain.size();i++){
            altitude+=gain[i];
            if(higestpoint<altitude) higestpoint=altitude;
        }
        return higestpoint;

    }
};