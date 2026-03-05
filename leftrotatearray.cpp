#include<iostream>
#include<vector>
using namespace std;
void leftrotate(vector<int>& arr){
    int n=arr.size();
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int n;
    cout<<"Enter elements of array:";
    cin>>n;
    
     vector<int> arr(n);
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   

    leftrotate(arr);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}