#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, count=0;
    char c;
    cin >> n;
    vector<char> vec(n);
    for(int i = 0; i<n; i++){
        cin >> vec[i];
    }

    c = vec[0];
    for(int i = 1; i<n; i++){
        if(c == vec[i]){
            count++;
        }else{
            c = vec[i];
        }
    }
    cout << count;

    return 0;
}