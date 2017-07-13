#include <iostream>

using namespace std;

int solve(int n, int p){
    // Complete this function
    if(p == 1 || n == p)return 0;
    if(n%2 != 0)
        return min(p/2, (n-p)/2);
    else
        if(p%2 != 0)
            return min(p/2, (n-(p-1))/2);
        else
            return min(p/2, (n-p)/2); 
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

