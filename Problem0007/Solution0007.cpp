#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b, c;
    cin>>a>>b>>c;
    int alen = a.length();
    int blen = b.length();
    int clen = c.length();
    int ab = alen > blen ? 1 : alen < blen ? -1 : a.compare(b);
    int ac = alen > clen ? 1 : alen < clen ? -1 : a.compare(c);
    int bc = blen > clen ? 1 : blen < clen ? -1 : b.compare(c);
    if (ab >= 0 && ac >= 0){
        cout<<a;
    } else if (bc >= 0 && ab <= 0) {
        cout<<b;
    } else {
        cout<<c;
    }
    return 0;
}