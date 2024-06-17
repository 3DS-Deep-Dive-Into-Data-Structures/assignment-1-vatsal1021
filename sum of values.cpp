/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int p, x;
    cin >> p >> x;
    vector<pair<int, int>> v(p);
    for (int i = 0; i < p; ++i) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
  
    sort(v.begin(), v.end());

    for (int i = 0; i < p - 2; ++i) {
        int left = i + 1;
        int right = p - 1;
        
        while (left < right) {
            int sum = v[i].first + v[left].first + v[right].first;
            if (sum == x) {
                cout << v[i].second << " " << v[left].second << " " << v[right].second << endl;
                return 0;
            } else if (sum < x) {
                ++left;
            } else {
                --right;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}




