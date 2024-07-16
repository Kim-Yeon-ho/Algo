//
//  BOJ_[1789].cpp
//  Algo
//
//  Created by 김연호 on 7/16/24.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long s;
    long long sum=0;
    int n = 0;

    cin >> s;

    while(true) {
        sum+= n;
        if(sum > s) {
            n--;
            break;
        };
        n++;
    }
    cout << n;

}
