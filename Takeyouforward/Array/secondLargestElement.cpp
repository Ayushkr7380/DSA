#include<iostream>
#include<climits>

using namespace std;

int secondLargest(int arr[],int s){
    int lst = INT_MIN;
    int s_lst = INT_MIN;

    for(int i=0;i<s;i++){
        if(arr[i] > lst){
            s_lst = lst;
            lst = arr[i];
        }
        else if(arr[i] > s_lst && lst != s_lst){
            s_lst = arr[i];
        }
    }

    if(s_lst == lst) return 0;
    else return s_lst;
}

int main(){
    int arr[] = {1,12,10,11,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int s_lst = secondLargest(arr,size);

    if(s_lst) cout<<"Second largest element is "<<s_lst<<endl;

    else  cout<<"No second largest element."<<endl;

    return 0;
}