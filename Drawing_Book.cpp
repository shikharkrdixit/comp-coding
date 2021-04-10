#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int totfnt = n/2;
    int tgtfnt = p/2;
    int trgtpgtrcnt = totfnt - tgtfnt;
    if(tgtfnt<trgtpgtrcnt){
        return tgtfnt;
    }
    else {
        return trgtpgtrcnt;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}