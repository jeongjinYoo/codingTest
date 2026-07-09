#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, p, t, val, count = 0;
    cin >> n >> k;
    vector<vector<int>> vec(n, vector<int>(2));
    for(int i = 0; i<n; i++){
        cin >> p >> t;
        vec[i][0] = p; vec[i][1] = t;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(vec[i][0] < vec[j][0]){
                vec[i].swap(vec[j]);
            }
            else if(vec[i][0] == vec[j][0]){
                if(vec[i][1] > vec[j][1]){
                    vec[i].swap(vec[j]);
                }
            }
        }
    }
    
    int front_p = -1, front_t = -1, idx = -1, i = 0;
    while(k != 0 && i != n){
        if(front_p != vec[i][0] || front_t != vec[i][1])
            k--;
        idx++;
        i++;
    }

    for(vector<vector<int>>::iterator it = vec.begin(); it != vec.end(); it++)
        if(it->operator[](0) == vec[idx][0] && it->operator[](1) == vec[idx][1]) count++;
    cout << count;

    return 0;
}