#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, x = 0;
    cin >> n;
    string str;
    vector<string> strVec;
    for(int i = 0; i<n; i++){
        cin >> str;
        strVec.push_back(str);
    }
    for(int i = 0; i<n; i++){
        str = strVec[i];
        if(str[0] == '-' && str[1] == '-' && str[2] == 'X') x--;
        else if(str[0] == '+' && str[1] == '+' && str[2] == 'X') x++;
        else if(str[0] == 'X'){
            if(str[1] == '-' && str[2] == '-') x--;
            else if(str[1] == '+' && str[2] == '+') x++;
            else
                fprintf(stderr, "Invalid Syntax\n");
        }
        else
            fprintf(stderr, "Invalid Syntax\n");
    }
    cout << x << endl;
    return 0;
}
