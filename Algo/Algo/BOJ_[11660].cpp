//
//  BOJ_[11660].cpp
//  Algo
//
//  Created by 김연호 on 9/27/24.
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M; //N은 N*N 배열의 크기, M은 질의의 갯수
    cin >> N >> M;//4,3을 입력받았을 때

    vector<vector<int>> A(N+1,vector<int>(N+1, 0));//원본 이중배열
    vector<vector<int>> D(N+1, vector<int>(N+1,0));//구간합 이중배열

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin >> A[i][j];

            D[i][j] = D[i][j-1]+ D[i-1][j] - D[i-1][j-1] + A[i][j]; //구간 합 이중 배열 공식
        }
    }

//    for(int i=1; i<=N; i++) {
//        for(int j=1; j<=N; j++) {
//            cout << D[i][j] << ' ';
//            if (j==4) cout << '\n';
//        }
//    }

    for(int i=0; i<M; i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >>y2;

        int result = D[x2][y2] - D[x2][y1-1] - D[x1-1][y2] + D[x1-1][y1-1];

        cout << result <<'\n';
    }
}
