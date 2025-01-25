//
//  BOJ_[1253].cpp
//  Algo
//
//  Created by 김연호 on 1/25/25.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> Num(n,0);

    for(int i=0;i<n;i++) {
        cin >> Num[i];
    } // 입력 받은 수를 벡터에 저장

    sort(Num.begin(), Num.end());//저장 후 정렬

    int result=0;

    for(int k=0; k<n; k++) {
        int i=0, j = n-1;
        int findNum = Num[k];

        while(i<j){
            if(Num[i] + Num[j] == findNum) {
                if(i != k && j != k) {
                    result++;
                    break;
                }
                else if (i == k) i++;
                else if (j == k) j--;
            }
            else if (Num[i] + Num[j] < findNum) {
                i++;
            }
            else if (Num[i] + Num[j] > findNum) {
                j--;
            }
        }
    }

    cout << result << "\n";
}
