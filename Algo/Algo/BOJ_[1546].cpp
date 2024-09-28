//
//  BOJ_[1546].cpp
//  Algo
//
//  Created by 김연호 on 9/25/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int n=0;
    vector<int> score;
    long sum=0 , max = 0;
    cin >> n;

    for(int i=0; i<n; i++) {
        int tmp;

        cin >> tmp;
        score.push_back(tmp);
    }

    for(int i=0; i<n; i++) {
        if(score[i] > max) {
            max = score[i];
        }
        sum += score[i];
    }
    double result = sum * 100.0 / max / n; //100을 계산 시 100으로 하면 정수계산이 되고 100.0으로 하면 실수 연산으로 이뤄진다. 출력조건을 잘 따져봐야 함
    cout << result << '\n';
}
