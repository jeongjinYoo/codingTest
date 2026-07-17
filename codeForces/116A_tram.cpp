#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, a, b, calc = 0, result = 0;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> a >> b;
        vec[i][0] = a;
        vec[i][1] = b;
    }

    for(int i=0; i<n; i++){
        calc += (vec[i][1] - vec[i][0]);
        if(result < calc) result = calc;
    }
    cout << result << endl;

    return 0;
}