#include<iostream>
using namespace std;
int main(){
		int size = 0;
	int Matrix[3][4] = 
	{
		{0, 8, 0, 1},
		{0, 0, 4, 0},
		{3, 0, 0, 7}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(Matrix[i][j] != 0)
	   		    size++;
		}
	}
	
	int sparceMatrix[3][size];
	int k=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(Matrix[i][j] != 0){
				sparceMatrix[0][k] = i;
				sparceMatrix[1][k] = j;
				sparceMatrix[2][k] = Matrix[i][j];
				k++;
			}
		}
	}
	
	cout<<"Sparce Matrix : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<size;j++){
			cout<<" "<<sparceMatrix[i][j];
		}
		cout<<endl;
	}
	return 0;
}
