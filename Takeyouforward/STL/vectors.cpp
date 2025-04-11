#include<bits/stdc++.h>
using namespace std;
void explainVectors(){
    vector<int> arr; //empty container

    arr.push_back(1);
    arr.emplace_back(2); //similar of push_back() but faster than push_back()

    
    //vector of a pair datatype
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); //No need of curly braces in emplace_back() , one syntactical difference from push_back.

    //Initialize at declaration time
    vector<int> v(5,100); //first parameter  --> size , second parameter --> element.

    //Initialize with garbage value or 0.
    vector<int> vec1(5); //5 elements with zero or garbage values.

    //Copy one vector to another vector
    vector<int> v1(5,32);
    vector<int> v2(v1); // vector v1 copied to v2 vector.

    vector<int>::iterator it = v.begin();

    it++;
    cout<<*(it)<<" ";

    it++;
    cout<<*(it)<<" ";

    vector<int>::iterator it1 = v1.end();

    
    it1--;
    cout<<*(it1)<<" ";
    
    cout<<endl;

    cout<<v[0]<<"|-|"<<v.at(0);
    cout<<" v1.back() --> "<<v1.back()<<" "<<endl;


    //For loop
    for(vector<int>::iterator i  = v1.begin() ; i!= v1.end() ; i++){
        cout<<*(i)<<"-";
    }

    cout<<endl;

    //using auto keyword
    for(auto i = v1.begin() ; i!=v1.end() ; i++){
        cout<<*(i)<<",";
    }

    cout<<endl;

    //
    for(auto i:v){
        cout<<i<<":";
    }

    //erase() function
    v.erase(v.begin() + 1); // {100,100,100,100}
}
int main(){
    explainVectors();
    return 0;
}