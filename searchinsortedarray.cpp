class Solution {
public:
    int search(vector<int>& vec, int que){
    int lo = 0, hi = vec.size()-1, mid;
    while (lo < hi) {
        mid = lo + (hi - lo) / 2;
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
    if (vec[lo] == que)
    {return lo;}
    return -1;
}
};