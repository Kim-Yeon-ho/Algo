//
//  BOJ_[1152].cpp
//  Algo
//
//  Created by 김연호 on 7/21/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int spaceCnt = 0;
    getline(cin,str);

    for(int i=0; i<str.size(); i++) {
        if(str[i] == ' ') {
            spaceCnt++;
        }
    }

    if (str.front() == ' ' || str.back() == ' ') { 
        if (str.front() == ' ' && str.back() == ' ') { cout << spaceCnt - 1; }
        else {  cout << spaceCnt; }
    }
    else { cout << spaceCnt + 1; }

    return 0;
}
