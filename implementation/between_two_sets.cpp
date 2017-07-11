#include<iostream>
#include<stdio.h>
using namespace std;
int gcd(int a, int b){
	while(b>0){
		int t = a%b;
		a = b;
		b = t;
	}
	return a;
}
int main(){
	int n,m;
	cin>>n>>m;
	long long int lcm = 1;
	int hcf; 
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(i == 0){
			lcm = lcm*x;
			hcf = gcd(x,x);
		}
		else{
			lcm = (lcm*x)/gcd(lcm,x);		
		}
	}
	//cout<<"lcm="<<lcm<<endl;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		if(i == 0)
			hcf = gcd(x,x);
		else
			hcf = gcd(hcf,x);
		
	}
	//cout<<"hcf="<<hcf<<endl;
	int ans = 0;
	int i = 1;
	if(hcf % lcm == 0){
		while((lcm*i) <= hcf ){
			if(hcf%(lcm*i) == 0)ans++;
			i += 1;
		}	
	}
	cout<<ans<<endl;
	
}
