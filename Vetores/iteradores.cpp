#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){

    vector<int> a;
    vector<int>::iterator it;
   
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.push_back(50);
    a.push_back(50);

    set<int> b(a.begin(),a.end());
    set<int>::iterator st;

    st = b.begin();
    advance(st,2);
    st++;

    it=a.begin();
    advance(it,3);
    it+=1;

    cout << a[2] << endl;
    cout << *it << endl;
    cout << distance(a.begin(), it) << endl;
    
    cout << "set " << endl;
    
    cout << *b.begin() << endl;
    cout << *st << endl;
    cout << distance(b.begin(), st) << endl;

    return 0;
}