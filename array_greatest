#include<iostream>
using namespace std;


int greatest(int arr[],int n){

    if(n<=0){
        return -1;
    }

    int g=arr[0];

    for(int i=1 ; i<n-1;i++){

        if(arr[i]>g){
            g= arr[i];
        }
       
        return g;
    }

}

int main(){

int n;
cout << "enter number of elements in array :";
cin>> n;

int arr[n];

for( int i= 0; i<n ; i++ ){

    cout<<"enter the numbers : ";
    cin >> arr[i];
}
cout<< "greatest number : "<< greatest(arr,n);
return 0;

}
