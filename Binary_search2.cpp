#include<iostream>
using namespace std;
 int main(){
    int n;
    int arr[100];
     cout<<"Enter the total number of element of the array"<<endl;
     cin>>n;
     cout<<"Enter the array element "<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     int key;
     cout<<"Enter the element(key) find in the array"<<endl;
     cin>>key;
     int start=0;
     int end=n-1;
     int mid;
     while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==key){
            //cout<<"Key is found at the index"<<endl;
            cout<<mid;
           break;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
     }   
 }