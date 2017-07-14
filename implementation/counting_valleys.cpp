#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

int count_valleys(string s, int n){
	int count = 0;
	int sea_level = 0;
	for(int i = 0;i<n;i++){
		if(s[i] == 'U'){
			sea_level += 1;
			if(sea_level == 0)count += 1;
		}
		else 
			sea_level -= 1;
	}
	return count;
	
}
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	cout<<count_valleys(s, n);	
}
