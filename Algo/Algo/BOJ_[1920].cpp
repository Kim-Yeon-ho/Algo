//
//  BOJ_[1920].cpp
//  Algo
//
//  Created by 김연호 on 7/2/24.
// 처음 풀이 시 단순하게 자료구조를 생각치 않고 이중 for을 통한 풀이를 구현
// 다시 자료구조형과 시간복잡도를 찾아보고 구현하여 아래와 같은 새로운 풀이로 구현하였음

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    long long listnum, findnum;
    vector<int> listv;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> listnum;
        listv.push_back(listnum);
    }
    sort(listv.begin(), listv.end());
    //listv에 있는 숫자 값 정렬

    cin >> m;

    for (int j=0; j<m; j++) {
        cin >> findnum;

        bool isFound = binary_search(listv.begin(), listv.end(), findnum);

        cout << isFound << "\n";
    }

    return 0;
}

//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int N, M;
//
//    cin >> N;
//
//    int *A = new int[N];
//    
//    for (int i = 0; i<N; i++) {
//        cin >> A[i];
//    }
//
//
//    cin >> M;
//
//    int *B = new int[M];
//
//    for (int i = 0; i<N; i++) {
//        cin >> B[i];
//    }
//    //동적할당으로 선언한 자연수의 크기 만큼 배열의 크기 지정
//
//    for (int i = 0; i< N; i++){
//        for (int j = 0; j<M; j++){
//            if (A[j] == B[i]) {
//                cout << "1\n";
//                break;
//            }
//            else if (j == 4 && A[j] != B[i]) {
//                cout << "0\n";
//            }
//        }
//    }
//
//    delete[] A, B;
//    return 0;
//
//}
