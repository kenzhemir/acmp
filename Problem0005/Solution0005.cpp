#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int j;
        cin>>j;
        if (j % 2 == 0) {
            a.push_back(j);
        } else {
            b.push_back(j);
        }
    }
    for (auto it = b.begin(); it != b.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    for (auto it = a.begin(); it != a.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
    if (a.size() >= b.size()) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}