#include <iostream>
#include <algorithm>
#include <cstring>
//ť�� �̿��غ���! 
//ť�� ����� ���Ҹ� �����Ҽ� ���� �Ф�
//�迭 �ᵵ �ð��� �ʰ����� �ʴ´�!

using namespace std;
int widArray[1001];

int main(void){
	
    int tc,wid,hei,temp;

    for(int i=0; i<10; i++){
    	
        cin>>wid;
        int result = 0;
        memset(widArray, 0, sizeof(widArray));

        for(int j=0; j<wid; j++){
            cin>>hei;
            widArray[j]=hei;
        }
 
        for(int j=2; j<wid-2; j++){
        	temp = max(max(widArray[j-2],widArray[j-1]), max(widArray[j+1],widArray[j+2]));
        	if(widArray[j]-temp>0) result= result+widArray[j]-temp;
        }
        cout<<"#"<<i+1<<" "<<result<<"\n";
    }
}
