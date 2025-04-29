#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> a={2,6,10,4};

    a.push_back(11);
    a.push_back(14);
    a.pop_back();

    int min , max =a[0];

    for(int i=0; i<a.size(); i++){
       
       

        if(a[i] < min){
            min = a[i];
        }
        
        if(a[i] > max){
            max = a[i];
        }
    }

    cout<<"Minimum:"<<min<<endl;
    cout<<"Maximum:"<<max<<endl;
    return 0;
 
}
