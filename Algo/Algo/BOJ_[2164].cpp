//
//  BOJ_[2164].cpp
//  Algo
//
//  Created by 김연호 on 2/13/25.
//

#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    queue<int> myQueue;

    for(int i=1; i<=num; i++){
        myQueue.push(i);
    }

    while(myQueue.size() > 1) {
        myQueue.pop();
        myQueue.push(myQueue.front());
        myQueue.pop();
    }

    cout << myQueue.front();
    return 0;
}
