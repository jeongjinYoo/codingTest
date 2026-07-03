#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    bool is_odd = false;
    int w1 = 2;

    for(w1; w1 <= w-w1; w1 += 2){
        if((w-w1)%2 == 0){
            is_odd = true;
            break;
        }

    if(is_odd) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}