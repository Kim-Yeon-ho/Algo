//
//  BOJ_[10986].cpp
//  Algo
//
//  Created by 김연호 on 9/28/24.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin >> N >> M;

    vector<long> S(N,0);
    vector<long> C(M,0);
    long answer = 0;

    cin >> S[0];//배열의 참조 문제로 구간합 배열의 첫번째 인덱스는 먼저 삽입함

    for (int i=1; i<N; i++) {
        int num = 0;
        cin >> num;

        S[i] = S[i-1]+num;
    }

    for (int i=0; i<N; i++) {
        int reminder = S[i] % M;

        if (reminder == 0) answer++;

        C[reminder]++;
    }

    for (int i=0; i<M; i++) {
        if(C[i]>1) {
            answer = answer + (C[i] * (C[i]-1) / 2); //구간합의 나머지가 같은 애들은 그 구간합의 나머지가 0이다
            // 같은 값을 가진 원소 중에서 2개를 고르는 조합 계산
        }
    }

    cout << answer << '\n';
//    for (int i=0; i<N; i++) {
//        cout << S[i] << ' ';
//    } 구간 합 출력
    return 0;
}
