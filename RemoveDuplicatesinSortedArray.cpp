#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
}
int main(){
    int n;
    cout<<"Enter number of elements=";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr);

     cout<<"Sorted Array: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;

     for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
     }
     cout<<arr[n-1];
     return 0;
}