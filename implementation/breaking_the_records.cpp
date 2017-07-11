#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int high;
	int low;
	int hcount = 0;
	int lcount = 0; 
	for(int i = 1;i<=n;i++){
		int x;
		cin>>x;
		if(i == 1){
			high = x;
			low = x;
		}
		else{
			if(x > high){
				high = x;
				hcount++;
			}
			else if(x<low){
				low = x;
				lcount++;
			}
		}	
	}
	cout<<hcount<<" "<<lcount<<endl;
}
