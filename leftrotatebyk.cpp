#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void leftrotate(vector<int>& arr,int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin(),arr.end());
    }
    int main(){
        int n ,k;
        cout<<"Enter n:";
        cin>>n;
        vector<int> arr(n);
        cout<<"Enter "<<n<<" elements:";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"enter k elements to rotate:";
        cin>>k;
        leftrotate(arr,k);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }