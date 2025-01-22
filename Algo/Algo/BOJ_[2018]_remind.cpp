//
//  BOJ_[2018]_remind.cpp
//  Algo
//
//  Created by 김연호 on 1/22/25.
//

#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int sum = 1, startIndex = 1, endIndex = 1, count = 1;

    while(endIndex != n) {
        if(sum > n) {
            sum = sum - startIndex;
            startIndex++;
        }
        else if(sum < n) {
            endIndex++;
            sum = sum + endIndex;
        }
        else if(sum == n){
            count++;
            endIndex++;
            sum = sum + endIndex;
        }
    }
    cout << count << "\n";
}
