//
//  BOJ_[12891].cpp
//  Algo
//
//  Created by 김연호 on 2/1/25.
//

#include <iostream>

using namespace std;


int checkArr[4];
int curArr[4];
int checkSecret = 0; //몇개의 문자에 대해 만족했는지 체크하는 변수
void Add(char c);
void Remove(char c);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S,P;
    cin >> S >> P;
    int Result = 0;
    string A;
    cin >> A;

    for(int i=0; i<4; i++) {
        cin >> checkArr[i];
        if(checkArr[i]==0) checkSecret++; //0개인 문자열은 체크할 필요가 없으니 checkSercet++
    }

    for (int i=0; i<P; i++) {
        Add(A[i]);
    }
    if (checkSecret == 4) Result++;

    for(int i=P; i<S; i++) {
        int j = i - P;
        Add(A[i]);
        Remove(A[j]);

        if (checkSecret == 4) Result++;
    }

    cout << Result << "\n";
    return 0;
}

void Add(char c) {
    switch (c) {
        case 'A':
            curArr[0]++;
            if(curArr[0] == checkArr[0]) checkSecret++;
            break;
        case 'C':
            curArr[1]++;
            if(curArr[1] == checkArr[1]) checkSecret++;
            break;
        case 'G':
            curArr[2]++;
            if(curArr[2] == checkArr[2]) checkSecret++;
            break;
        case 'T':
            curArr[3]++;
            if(curArr[3] == checkArr[3]) checkSecret++;
            break;
    }
}

void Remove(char c) {
    switch (c) {
        case 'A':
            if(curArr[0] == checkArr[0]) checkSecret--;
            curArr[0]--;
            break;
        case 'C':
            if(curArr[1] == checkArr[1]) checkSecret--;
            curArr[1]--;
            break;
        case 'G':
            if(curArr[2] == checkArr[2]) checkSecret--;
            curArr[2]--;
            break;
        case 'T':
            if(curArr[3] == checkArr[3]) checkSecret--;
            curArr[3]--;
            break;
    }
}
