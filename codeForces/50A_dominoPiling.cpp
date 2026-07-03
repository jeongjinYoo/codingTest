#include <iostream>
using namespace std;

int main(){
    int m, n, result = 0;
    int larger, smaller;
    cin >> m >> n;

    if(m % 2 == 0){
        result = (m / 2) * n;
    } else if(n % 2 == 0){
        result = (n / 2) * m;
    } else{
        larger = m > n ? m : n;
        smaller = m <= n ? m : n;
        result = (larger - 1) / 2 * smaller;
        result += smaller / 2;
    }
    cout << result << endl;
    return 0;
}