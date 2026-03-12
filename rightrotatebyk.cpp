#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rightrotate(vector<int>& arr, int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main(){
    int n,k;
    cout<<"enter n";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter k elements to rotate:";
    cin>>k;
    rightrotate(arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}