class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]){
                nums[k]=nums[j];
                k++;
            }

        }
        return k;
    }
};