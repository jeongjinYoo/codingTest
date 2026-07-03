#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str[n], s = "", s_size;
    int i_size;
    for(int i = 0; i<n; i++){
        cin >> str[i];
    }
    for(int i = 0; i<n; i++){
        if(str[i].size() > 10){
            s = "";
            i_size = str[i].size();
            s_size = to_string(i_size - 2);
            s.push_back(str[i][0]);
            s.append(s_size);
            s.push_back(str[i][i_size - 1]);
            str[i] = s;
        }
    }
    for(int i = 0; i<n; i++){
        cout << str[i] << endl;
    }
}