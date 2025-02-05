//
//  BOJ_[1874].cpp
//  Algo
//
//  Created by 김연호 on 2/5/25.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt = 1;
    stack<int> mystack;
    vector<char> result;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;

        while(cnt <= num){
            result.push_back('+');
            mystack.push(cnt);
            cnt++;
        }
        if (num == mystack.top()) {
            result.push_back('-');
            mystack.pop();
        }
        else {
            cout << "NO";
            return 0;
        }

    }
    for(int i=0; i<result.size(); i++) {
        cout << result[i] << "\n";
    }
}
