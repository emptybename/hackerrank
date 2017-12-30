/* 
	link of question
	https://www.hackerrank.com/contests/w35/challenges/triple-recursion
*/

#include <bits/stdc++.h>

using namespace std;

void tripleRecursion(int n, int m, int k) {
    // Complete this function
    int matrix[100][100];
    matrix[0][0] = m;
    for(int i = 1;i<n;i++)matrix[i][0] = matrix[i-1][0] - 1;
    for(int j = 1;j<n;j++)matrix[0][j] = matrix[0][j-1] - 1;
    for(int i = 1;i<n;i++){
        for(int j = 1;j<n;j++){
           if(i == j)matrix[i][j] = matrix[i-1][j-1]+k;
           else if(i > j)matrix[i][j] = matrix[i-1][j] -1;
           else matrix[i][j] = matrix[i][j-1] -1;  
        }
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    tripleRecursion(n, m, k);
    return 0;
}

