#include <iostream>
#include <queue>

using namespace std;

int result;

void tsp(int maxNum){
	
}


int main(void){
	//dfs ¾Æ´Ï³Ä 
	//tsp
	int tc,n,k,temp;
	cin>>tc;
	
	queue<int> qu;
	
	for(int i=0; i<tc; i++){
		cin>>n>>k;
		int array[n][n];
		int maxNum;
		
		for(int j=0; j<n; j++){
			for(int k=0; i<n; k++){
				cin>>array[j][k];
				maxNum=max(array[j][k],maxNum);
			}
		}
		
		tsp(maxNum);
		cout<<"#"<<i+1<<" "<<result<<"\n";
	}
	 
}
