#include<iostream>
using namespace std;
void binary_search(int arr[],int size, int key){
    int n;
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end){
         mid=(start + end) / 2;
        if(arr[mid]==key){
            cout<<mid;
            return;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
}
int main(){
    int arr1[6]={2,3,4,5,6,7};
    int key=7;
    binary_search(arr1,6,key);
    cout<<"Hye"; // for checking ki yha tk run ho rha ki nhi

} 
