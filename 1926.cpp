#include <iostream>

using namespace std;

int main(void){
	int num;
	cin>>num;
	
	for(int i=1; i<=num; i++){
		int array[3]={0,0,0};
		if(i==1000){
			cout<<"1000";
		}else if(i>=100){
			int count = 0;
			array[0]=i/100;
			array[1]=i/10-array[0]*10;
			array[2]=i-array[0]*100-array[1]*10;
			for(int j=0; j<3; j++){
				if(array[j]==3||array[j]==6||array[j]==9){
					count++;
				}
			}
			
			if(count!=0){
				for(int j=0; j<count; j++){
					cout<<"-";
				}
			}else cout<<i;
			
			cout<<" ";
		}else if(i>=10){
			int count = 0;
			array[0]=i/10;
			array[1]=i-array[0]*10;
			for(int j=0; j<2; j++){
				if(array[j]==3||array[j]==6||array[j]==9){
					count++;
				}
			}
			
			if(count!=0){
				for(int j=0; j<count; j++){
					cout<<"-";
				}
			}else cout<<i;
			
			cout<<" ";
		}else{
			if(i==3||i==6||i==9) cout<<"- ";
			else cout<<i<<" ";
		}
		
	}
}
