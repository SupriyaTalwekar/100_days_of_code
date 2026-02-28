#include<iostream>
#include<vector>
using namespace std;
int largestelement(vector<int>& arr){
    int n=arr.size();
    int max=arr[0];
    for(int i=1;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
    }
    return max;
}
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = largestelement(arr);
    cout<<"Largest Element of the array is ";
    cout<<result;
    return 0;
}