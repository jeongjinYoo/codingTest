#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    int status = 0;
    cin >> str1 >> str2;
    for(int i =0; i<str1.size(); i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    for(int i =0; i<str1.size(); i++){
        if(str1[i] != str2[i]){
            status = str1[i] > str2[i] ? 1:-1;
            break;
        }
    }
    cout << status << endl;
}