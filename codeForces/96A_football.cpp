#include <iostream>
using namespace std;

int main(){
    int status = -1;
    int count = 0;
    string str;

    cin >> str;

    if(str.size() != 0) status = str[0];

    for(int i=1; i<str.size(); i++){
        if(status == str[i]) {
            count++;
            if(count == 6){
                cout << "YES" << endl;
                return 0;
            }
        }
        else {
            status = str[i];
            count = 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}