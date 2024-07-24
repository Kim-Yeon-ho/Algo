//
//  BOJ_[11718].cpp
//  Algo
//
//  Created by 김연호 on 7/22/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    while(true){
        getline(cin,str);
        if(str=="") break;

        cout << str << '\n';
    }

    return 0;
}
