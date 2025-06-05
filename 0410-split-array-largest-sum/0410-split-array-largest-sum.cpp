class Solution {
public:


    bool valid(vector<int>& nums, int n, int k, int mid){
        int pages=0,stu=1;
        for(int i=0;i<n;i++){
            if(nums[i]>mid){
                return false;
            }
            if(pages+nums[i]<=mid){
                pages+=nums[i];
            }
            else{
                pages=nums[i];
                stu++;
            }
        }
            if(stu>k){
                return false;
            }
            return true;
        
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0,ans=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int st=0,end=sum;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(valid(nums, n, k,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};