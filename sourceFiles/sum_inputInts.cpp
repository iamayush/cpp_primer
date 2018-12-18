/*
* Prints the sum of ints input by user
* Remember that inputs will end by ctrl+d (end of file?)
*/
#include<iostream>
using namespace std;

int main(){
	int sum = 0, val;
	while(cin>>val){
		sum += val;
	}

	cout<<"Sum is "<<sum<<endl;
	return 0;
}
