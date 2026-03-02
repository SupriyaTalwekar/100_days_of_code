#include<iostream>
#include<vector>
using namespace std;
int secondlargest(vector<int>& arr){
    int n=arr.size();
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
            else if(arr[i]<max&&smax<arr[i]){
            smax=arr[i];
        } 
    }
    
    return smax;
}

int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=secondlargest(arr);
    cout<<"Second largest element is:";
    cout<<result;
    return 0;
}