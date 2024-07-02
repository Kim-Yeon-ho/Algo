#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    long long listnum, findnum;
    vector<int> listv;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> listnum;
        listv.push_back(listnum);
    }
    sort(listv.begin(), listv.end());
    //listv에 있는 숫자 값 정렬

    cin >> m;

    for (int j=0; j<m; j++) {
        cin >> findnum;

        bool isFound = binary_search(listv.begin(), listv.end(), findnum);

        cout << isFound << "\n";
    }

    return 0;
}