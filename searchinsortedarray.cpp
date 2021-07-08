#include <bits/stdc++.h>
using namespace std;

int binsearch(vector<int>& vec, int que, int n) {
    int lo = 0, hi = n - 1, mid;
    while (lo < hi) {
        mid = lo + (hi - lo) / 2;
        /*if (vec[mid] == que) {
            return mid+1;
        }*/
        if (vec[lo] < vec[mid]) {
            if (que < vec[lo] or vec[mid] < que)
                lo = mid + 1;
            else
                hi = mid;
        }
        else {
            if (que < vec[mid + 1] or vec[hi] < que)
                hi = mid;
            else
                lo = mid + 1;
        }
    }
    return vec[lo] == que ? (lo+1) : -1;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    vector<int> ans;
    int que;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> que;
        int x = binsearch(vec,que,n);
        cout << x << "\n";
    }

    return 0;
}
