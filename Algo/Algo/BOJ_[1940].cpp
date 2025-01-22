//
//  BOJ_[1940].cpp
//  Algo
//
//  Created by 김연호 on 1/22/25.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> Num(n,0);

    for(int i=0; i<n; i++) {
        cin >> Num[i];
    }

    sort(Num.begin(), Num.end()); //Num벡터 오름차순 정렬

    int startIndex = 0, endIndex = n-1, count = 0;
    while(startIndex < endIndex){
        if ((Num[startIndex] + Num[endIndex]) == m) {
            count++;
            startIndex++;
            endIndex--;
        }
        else if ((Num[startIndex] + Num[endIndex]> m)) {
            endIndex--;
        }
        else if ((Num[startIndex] + Num[endIndex] < m)) {
            startIndex++;
        }
    }

    cout << count << "\n";
}
