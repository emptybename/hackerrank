/* link of question
   https://www.hackerrank.com/contests/w35/challenges/lucky-purchase/copy-from/1304752921	
*/

#include <bits/stdc++.h>

using namespace std;

bool checkCriteria(int number){
    int fours = 0;
    int sevens = 0;
    if(number == 0)return false;
    while(number > 0){
        int temp = number%10;
        if(temp == 4)fours++;
        else if(temp == 7)sevens++;
        else
            return false;
        number /= 10;
    }
    if(sevens == fours)
        return true;
    else 
        return false;
}

int main() {
    int n;
    cin >> n;
    int max = 1000000009;
    string ans = "-1";
    for(int a0 = 0; a0 < n; a0++){
        string name;
        int value;
        cin >> name >> value;
        if(checkCriteria(value)){
            if(value < max){
                max = value;
                ans = name;
            }
        }
    }
    cout<<ans;
    return 0;
}

