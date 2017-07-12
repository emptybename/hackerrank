#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int ar[6] = {0};
	int n;
	cin>>n;
	for(int i = 0;i < n;i++){
		int x;
		cin>>x;
		ar[x]++;
	}
	int max = ar[1];
	int id = 1;
	for(int i = 2;i<=5;i++){	
		if(ar[i] > max){id = i; max = ar[i];} 		
	}
	cout<<id<<endl;
}
