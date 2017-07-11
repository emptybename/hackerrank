#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[100];
	int d,m;
	for(int i = 0;i < n;i++)cin>>ar[i];
	cin>>d>>m;
	int left=0, right=0;
	int ans = 0; 
	if(m <= n){
		int temp = 0;
		for(right=0;right<m;right++){
			temp += ar[right];
		}
		if(temp == d)ans += 1;
		//cout<<"ans="<<ans<<endl;
		//cout<<"right = "<<right<<endl;
		for(right = right;right<n;right++){
			temp = temp - ar[left] + ar[right];
			//cout<<"right===="<<right<<endl;
			//cout<<"left===="<<left<<endl;
			if(temp == d)ans += 1;
			//cout<<"temp ==="<<temp<<endl;
			left++;
		}	
	}
	cout<<ans<<endl;
}
