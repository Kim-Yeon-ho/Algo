//
//  BOJ_[11720].cpp
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

    int numCount;
    string num,tmp;
    int result = 0;

    cin >> numCount;
    
    cin >> num;
    for(int i=0; i<numCount; i++) {
        tmp = num[i];
        result += stoi(tmp);
    }
    
    cout << result;

    return 0;
}
