//Time Complexity = O(n)

#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter number of elements=";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements:";
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }

    if(isSorted(arr))
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";
    return 0;
}