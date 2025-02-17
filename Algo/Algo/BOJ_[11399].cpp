//
//  BOJ_[11399].cpp
//  Algo
//
//  Created by 김연호 on 2/17/25.
//  삽입정렬


#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> A(n,0);
    vector<int> S(n,0);

    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    for(int i=1; i<n; i++){
        int insertP = i;
        int insertV = A[i];
        for(int j = i-1; j>=0; j--) {
            if(A[j]<A[i]){
                insertP = j+1;
                break;
            }
            if(j == 0) insertP = 0;
        }
        for(int j = i; j > insertP; j--){
            A[j] = A[j-1];
        }
        A[insertP] = insertV;
    }

    S[0] = A[0];
    for(int i=1; i<n; i++){
        S[i] = S[i-1] + A[i];
    }
    int sum=0;

    for(int i=0; i<n; i++){
        sum = sum + S[i];
    }
    cout << sum;
}
