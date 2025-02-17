//
//  BOJ_[1377].cpp
//  Algo
//
//  Created by 김연호 on 2/17/25.
// swap이 한번도 일어나지 않은 루프가 언제인지 알아내는 문제

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    vector<pair<int,int>>A(N);

    for(int i=0; i<N; i++){
        cin >> A[i].first;
        A[i].second = i; //정렬전 인덱스값 저장
    }

    sort(A.begin(), A.end()); // 배열의 시간 복잡도 O(nlogn)
    int max = 0;

    for(int i=0; i<N; i++){
        if(max<A[i].second - i){
            max = A[i].second - i;
        }
    }

    cout << max + 1;

    return 0;
}

