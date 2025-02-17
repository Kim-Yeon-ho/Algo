//
//  BOJ_[1427].cpp
//  Algo
//
//  Created by 김연호 on 2/17/25.
//

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    string num;

    cin >> num;

    vector<int> A(num.size(),0);

    for(int i=0; i<num.size(); i++){
        A[i] = stoi(num.substr(i,1));
    }

    for(int i=0; i<num.length(); i++){
        int max = i;
        for(int j=i+1; j<num.length(); j++){
            if(A[j]>A[max]) max = j;
        }
        if(A[i]<A[max]){
            int tmp = A[i];
            A[i] = A[max];
            A[max] = tmp;
        }
    }

    for(int i=0; i<A.size(); i++){
        cout << A[i];
    }
}
