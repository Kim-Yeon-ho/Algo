//
//  BOJ_[11659].cpp
//  Algo
//
//  Created by 김연호 on 9/25/24.
//
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);

    int dataNum, sumNum;
    int data[100001] = {};
    cin >> dataNum >> sumNum;

    for(int i=1; i<=dataNum; i++) {
        int tmp;
        cin >> tmp;
        data[i] = data[i-1] + tmp; // 구간합을 바로 저장함
    }

    for(int i=0; i<sumNum; i++) {
        int start, end;
        cin >> start >> end;
        cout << data[end] - data[start-1] << "\n";
    }

    return 0;
}

//#include <iostream>
//
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio();
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int dataNum, QuesNum;
//    int data[100001] = {};
//    cin >> dataNum >> QuesNum;
//
//    for (int i=1; i<=dataNum; i++) {
//        int tmp;
//        cin >> tmp;
//        data[i] = data[i-1] + tmp; //배열을 입력하며 구간 합을 바로 저장함
//    }
//
//    for (int i=0; i<QuesNum; i++) {
//        int start, end;
//        cin >> start >> end;
//        cout << data[end] - data[start-1] << '\n';
//    }
//    return 0;
//}
