#include <iostream>
using namespace std;

int kthNotDivisibleByN(int n, int k) {
    int low = 1;
    int high = k + k / n; // initial upper bound assumption

    while (low < high) {
        int mid = (low + high) / 2;
        if (mid - mid / n < k) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout <<kthNotDivisibleByN(n, k)<< endl;
    
    }
    
    return 0;
}
