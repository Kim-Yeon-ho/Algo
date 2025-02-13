//
//  BOJ_[2750].cpp
//  Algo
//
//  Created by 김연호 on 2/13/25.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int loopNum;
    
    cin >> loopNum;
    vector<int> bubble(loopNum,0);
    //vector초기화
    for(int i=0; i<loopNum; i++){
        cin >> bubble[i];
    }

    for(int i=0; i<loopNum -1; i++){
        for(int j=0; j< loopNum -1 -i; j++){
            if(bubble[j] > bubble[j+1]) {
                int tmp = bubble[j];
                bubble[j] = bubble[j+1];
                bubble[j+1] = tmp;

            }
        }
    }

    for(int i=0; i<loopNum; i++){
        cout<< bubble[i]<<"\n";
    }
    return 0;
}
