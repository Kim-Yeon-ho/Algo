//
//  BOJ_[11003].cpp
//  Algo
//
//  Created by 김연호 on 2/3/25.
//

#include <iostream>
#include <deque>

using namespace std;
typedef pair<int,int> Node; // 숫자값, 인덱스

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
        while(mydeque.size() && mydeque.back().first > num) {//덱이 비어있지않고, 마지막 인덱스의 값이 들어오는 숫자보다 클 경우 마지막 인덱스의 숫자 값을 빼서 정렬함으로써, 정렬을 바로 시행함
            mydeque.pop_back();
        }
        mydeque.push_back(Node(num,i));

        if(mydeque.front().second <= i - L) mydeque.pop_front();//탐색하는 범위는 L의 값이므로, front인덱스가 범위에서 벗어나는 경우에 제거

        cout << mydeque.front().first << ' ' ;//자체적으로 정렬을 마친 덱이므로 첫번째 값을 출력함으로써 최소값을 출력하게 된다.
    }
}
