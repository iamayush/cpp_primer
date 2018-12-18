#include<iostream>
#include"Sales_item.h"
int main(){
	int v1 = 2, v2 = 3;
	char yn;
	std::cout<<"The sum of "<<v1
		 <<" and "<<v2
		 <<" is "<<v1+v2<<std::endl;
	std::cout<<"Does this work?"<<std::endl;
	std::cin>>yn;
	if (yn == 'y'){
		std::cout<<"Yay!"<<std::endl;
	}
	else{
		std::cout<<"Oh no!"<<std::endl;
	}
	return 0;
}
