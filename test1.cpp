#include<iostream>
using namespace std;

int maxsubarraysum(int arr[], int n){
    int b[100];
    int max_sum = 0;
    int current_sum = 0;
    int i = 0;
    while( i < n){
       for(int j = i; j < n; j++){
          b[i] = arr[i] * (-1);
          current_sum = current_sum + b[i];
       }
       if(current_sum > max_sum){
           max_sum = current_sum;
       }
       i++;
    }
    return max_sum;
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max_sum = maxsubarraysum(arr, n);
    cout << max_sum;
}