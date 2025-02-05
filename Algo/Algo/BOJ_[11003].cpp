//
//  BOJ_[11003].cpp
//  Algo
//
//  Created by 김연호 on 2/3/25.
//

#include <iostream>
#include <deque>

using namespace std;
typedef pair<int,int> Node;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<Node> mydeque;
    int N,L;
    cin >> N >>L;

    for(int i=0; i<N; i++){
        int num=0;//현재데이터
        cin >> num;
        while(mydeque.size()&& mydeque.back().first > num) {
            mydeque.pop_back();
        }
        mydeque.push_back(Node(num,i));
        if(mydeque.front().second <= i-L) mydeque.pop_front();

        cout << mydeque.front().first << ' ';
    }
}
