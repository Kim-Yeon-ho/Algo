//
//  BOJ_[1157].cpp
//  Algo
//
//  Created by 김연호 on 7/17/24.
//

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int cnt[26] = {0};

    cin >> str;

    for(int i=0; i<str.length(); i++) {
        str[i] = toupper(str[i]);
        cnt[str[i] - 65]++; //각 문자의 빈도수 증가를 위해 'A'의 아스키 코드값인 65를 뺌
    }

    int max = 0;
    int index = 0;

    for(int i=0; i<26; i++) {
        if (max < cnt[i]) {
            max = cnt[i];
            index = i;
        }
    }

    for(int i=0; i<26; i++) {
        if (i == index) continue;

        if (cnt[i] == max) {
            cout << "?";
            return 0;
        }
    }

    cout << (char)(index + 65);
    return 0;
}
