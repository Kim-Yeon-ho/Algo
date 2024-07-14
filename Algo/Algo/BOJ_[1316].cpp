//
//  BOJ_[1316].cpp
//  Algo
//
//  Created by 김연호 on 7/14/24.
//
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    int cnt = 0;
    string str;

    cin >> n;

    for (int i = 0; i<n; i++) {
        cin >> str;
        int size = str.length();
        bool flag = true;

        for(int j = 0; j<size; j++) {
            for(int k = 0; k<j; k++) {
                if ( str[j] != str[j-1] && str[j] == str[k]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cnt++;
    }

    cout << cnt;

    return 0;
}
