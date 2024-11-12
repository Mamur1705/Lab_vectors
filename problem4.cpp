#include "iostream"
#include <vector>
// probelem 7
using namespace std;
int main(){
    vector<int> v;
    int n;
    while(cin>> n){
        v.push_back(n);
    }
    double max=INT32_MIN, min=INT32_MAX, avg=0, sum=0;

    for(int i: v){
        if(i>max){
            max=i;
        }
        if(i<min){
            min=i;
        }
        sum+=i;
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum/v.size()<<endl;
    return 0;
}
