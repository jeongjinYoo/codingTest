#include <iostream>
#include <vector>
using namespace std;

int main(){
    int idx = -1;
    int n, k, k_val, val = 0;
    vector<int> iVec;
    cin >> n >> k;
    for(int i = 0; i<n; i++){
        cin >> val;
        iVec.push_back(val);
    }
    k_val = iVec[k-1];

    for(int i = 0; i<n; i++){
        if(iVec[i] < k_val || iVec[i] <= 0) break;
        idx++;
    }
    cout << idx + 1 << endl;
}