#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();
    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;

    cout<<"vec at index of 2 = "<<vec.at(2)<<endl;
    cout<<"vec at index of 3 = "<<vec[3]<<endl;

}
