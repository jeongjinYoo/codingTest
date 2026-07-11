#include <iostream>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;
    int row = 0, col = 0;
    long long ans = 0;

    row = n/a; if(n%a != 0) row++;
    col = m/a; if(m%a != 0) col++;
    ans = (long long)row * col;

    cout << ans << endl;
    return 0;
}