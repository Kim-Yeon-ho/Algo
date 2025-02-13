//
//  BOJ_[11286].cpp
//  Algo
//
//  Created by 김연호 on 2/13/25.
//

#include <iostream>
#include <queue>
using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int first_abs = abs(o1);
        int second_abs = abs(o2);

        if(first_abs == second_abs) return o1 > o2;
        else return first_abs > second_abs;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    priority_queue<int, vector<int>, compare> myQueue;
    for(int i=0; i<num; i++) {
        int tmp;
        cin >> tmp;

        if(tmp ==0) {
            if(myQueue.empty()) cout << "0\n";
            else {
                cout << myQueue.top() << '\n';
                myQueue.pop();
            }
        }
        else myQueue.push(tmp);
    }
}
