//
//  BOJ_[1181].cpp
//  Algo
//
//  Created by 김연호 on 7/22/24.
//

#include <iostream>
#include <algorithm>

using namespace std;
//sort함수 사용법 숙지, 어떤 방식으로 sort할지

string word[20000];

int compare(string a, string b) {
    if(a.length() == b.length()) return a < b; //단어의 길이가 같으면 사전순 정렬
    else return a.length() < b.length();//길이가 다르면 짧은 순으로
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int input;

    cin >> input;
    
    for(int i = 0; i<input; i++) {
        cin >> word[i];
    }

    sort(word, word + input, compare);

    for(int i=0; i<input; i++) {
        if(word[i] == word[i-1]) continue;
        cout << word[i] << "\n";
    }
    return 0;
}

