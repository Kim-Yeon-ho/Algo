//
//  BOJ_[2018].cpp
//  Algo
//
//  Created by 김연호 on 10/6/24.
//

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 1, startIndex = 1, endIndex = 1, sum = 1;

    while(endIndex != n) {
        if (sum == n) {
            endIndex++;
            count++;
            sum += endIndex;
        }
        else if (sum > n) {
            sum -= startIndex;
            startIndex++;
        }
        else { // sum < n
            endIndex++;
            sum += endIndex;
        }
    }

    cout << count << '\n';

    return 0;
}
