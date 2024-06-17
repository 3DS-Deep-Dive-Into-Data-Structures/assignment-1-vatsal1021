/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q, a, b;
    cin >> n >> q;
    vector<int> arr(n + 1);
    
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> XOR(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        XOR[i] = XOR[i - 1] ^ arr[i];
    }
    
    for (int j = 0; j < q; ++j) {
        cin >> a >> b;
        cout << (XOR[b] ^ XOR[a - 1]) << endl;
    }
    
    return 0;
}
