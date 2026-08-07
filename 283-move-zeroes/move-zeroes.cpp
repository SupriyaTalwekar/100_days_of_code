class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i,j=0,temp;
        int n= arr.size();
        for(i=0;i<n;i++){
            if (arr[i]!=0){
                swap(arr[i],arr[j]);
                // temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;
                j++;
            }
        }
    }
};