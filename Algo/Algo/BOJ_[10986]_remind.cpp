//
//  BOJ_[10986]_remind.cpp
//  Algo
//
//  Created by 김연호 on 1/21/25.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> S(n,0);
    vector<int> C(m,0);
    int answer = 0;

    cin >> S[0];

    for(int i=1; i<n; i++) {
        int temp = 0;
        cin >> temp;
        S[i] = S[i-1] + temp;
        //구간 합 저장배열
    }

    for(int i = 0; i<n; i++) {
        int reminder = S[i] % m;
        if (reminder == 0) answer++;
        C[reminder]++;
    }

    for(int i=0; i<m; i++) {//나머지계산이니까 나누는 수보다 작으니 그 만큼 반복문
        if(C[i]>1) {
            answer = answer + (C[i] * (C[i]-1) / 2); //구간합의 나머지가 같은 애들은 그 구간합의 나머지가 0이다
            // 같은 값을 가진 원소 중에서 2개를 고르는 조합 계산
        }
    }
    cout << answer <<"\n";
    return 0;
}
