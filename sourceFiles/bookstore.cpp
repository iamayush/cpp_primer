#include <iostream>
#include"Sales_item.h"

int main()
{
	Sales_item curr, new_trans; // curr and new transaction
	std::cin>>curr; // first transaction

	while(std::cin>>new_trans){
		if(curr.isbn() == new_trans.isbn()){
			curr += new_trans;
		}
		else{
			std::cout<<"isbn must be same bro"<<std::endl;
			return -1;
		}
	}

	// Print curr (total) isbn, # copies, revenue, avg price
	std::cout<<curr<<std::endl;
	
	return 0;
}