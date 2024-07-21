//
//  BOJ_[10809].cpp
//  Algo
//
//  Created by 김연호 on 7/22/24.
//
// c++의 STL에서 find함수의 유무를 알게 됨, find함수를 통해 string값에서 원하는 값의 인덱스를 반환함
// 없는 문자열을 반환하는 경우는 string::npos가 반환되며 값은 -1로 정의되어있지만, 자료형이 unsigned이므로 양수가 출력이 된다. 따라서 int형으로 캐스팅하여 -1이 출력되게 한다.
#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> input;

    for (int i=0; i<26; i++) {
        cout <<(int)input.find(alphabet[i]) << " ";
    }
    return 0;
}
