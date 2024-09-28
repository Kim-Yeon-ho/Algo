//
//  BOJ_[2475].cpp
//  Algo
//
//  Created by 김연호 on 9/3/24.
//

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, square = 0;

    for(int i=0; i<5; i++) {
        cin >> num;
        square += num * num;
    }

    cout << square % 10;
    return 0;
}
