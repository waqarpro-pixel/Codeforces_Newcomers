#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a > b){
            cout << a << endl;
        }else{
            int sub = b - a;
            b -= 2*sub;
            if(b < 0) b = 0;
            cout << b << endl;
            }
        }
    return 0;
}
