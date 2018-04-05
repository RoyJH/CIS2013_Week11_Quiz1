#include <iostream>
#include <cstring>
using namespace std;
int rows;
int comps;
//char cond;
int row;
int col;
int rod;
int grade;

int main(){
	cout << "Enter a number of rows\n";
	cin >> rows;
	int *row;
	//int *b;
	
	row= new int[rows];
	//b= new int[comps];

	for (int i=1; i<=rows; i++){
	cout << "Enter number of computers on row " << i << ": ";
	cin >> comps;
	row[i]=comps;
	}
	cout << "Number of rows: " << rows << endl;
	
	for (int j=1; j<=rows;j++){
		cout << j << ": ";
		for(int k=1;k<=row[j];k++){
		cout << "empty ";
		//row[j]=
		}
		cout<< endl;
	}
	cout << "Enter computer to change the grade of : ";
	cin >> rod >> col;
	cout << "Enter grade: ";
	cin >> grade;
	
	for (int l=1; l<=rows;l++){
		cout << l << ": ";
		for(int m=1;m<=row[l];m++){
			if((l==rod)&&(m==col)){
			cout << grade;}
			else cout << "empty ";
		}
	//cout << "Number of computers on row " << j << ": " << row[j] << endl;
	}
	return 0;
}