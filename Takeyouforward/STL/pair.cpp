#include<iostream>
using namespace std;

void explainPair(){

    //pair with same types of element.
    pair<int,int> p = {1,2};
    cout<<p.first<< " "<<p.second<<endl; 
    
    //pair can also contain different types of element.
    pair<int,string> p1 = {3,"ayush"};
    cout<<p1.first<< " "<<p1.second<<endl; 
    
    //pair can also contain another pair. 
    pair<pair<int,float>,string> p2 = {{1,1.5},"ayush"}; 
    cout<<p2.first.first<< " "<<p2.first.second<<" "<<p2.second<<endl; 
    
    //array of pairs.
    pair<int,string> arr[] = {{0,"priyanshu"},{1,"ayush"},{2,"abhijeet"},{3,"lucky"}};
    //Display 0th index of array of pair
    cout<<arr[0].first<<" "<<arr[0].second<<endl; 
}
int main(){
    explainPair();
    return 0;
}