#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> v = {2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //vector<int> :: iterator it;
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<<(*it)<< " ";
    }
    cout<<endl;
    /*for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;*/
    vector<pair<int,int>> v_p = {{1,2},{2,3}};
    for(/*pair<int,int>*/ auto &value : v_p){
        cout << value.first << " " << value.second <<endl;
    }
    auto a = 1.0;
    cout<< a <<endl;

return 0;
 
}