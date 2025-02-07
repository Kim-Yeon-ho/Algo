//
//  BOJ_[17298].cpp
//  Algo
//
//  Created by 김연호 on 2/5/25.
//

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> num(n,0);
    vector<int> result(n,0);

    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    stack<int> myStack;

    myStack.push(0);

    for(int i=1; i<n; i++){
        while(!myStack.empty() && num[myStack.top()] < num[i]){
            //스택이 비어있지 않고 스택의 탑이 반복문의 현재 값보다 크지 않다면 반복한다.
            result[myStack.top()] = num[i];
            myStack.pop();
        }
        myStack.push(i);
    }

    while(!myStack.empty()) {
        result[myStack.top()] = -1;
        myStack.pop();
    }

    for(int i=0; i<n; i++){
        cout << result[i] << ' ';
    }

    return 0;
}
