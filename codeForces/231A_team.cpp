#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, count = 0;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(3));
    for(int i=0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> k;
            vec[i][j] = k;
        }    
    }

    for(int i=0; i<n; i++){
        if(vec[i][0] + vec[i][1] + vec[i][2] >= 2) count++;
    }

    cout << count;
    return 0;
}