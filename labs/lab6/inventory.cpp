#include "inventory.h"
#include <iostream>

Inventory::Inventory(){

}

void Inventory::addItem(std::string a,int b){
	std::map<std::string,int>::iterator it;
	it = find(a);

	if(it != end())
	{
		it->second += b;
	}
	else
	{
		insert(std::make_pair(a,b));
	}


}

void Inventory::removeItem(std::string a){

	erase(a);
}

int Inventory::getNumItems(std::string a){

	std::map<std::string,int>::iterator it;

	if(find(a)==end()){
		return 0;
	}

	else{

		it = find(a);
		return it->second;
	}
}

void Inventory::printAllItems(){

	if(empty()){
		std::cout<<"Empty"<<std::endl;
	}

	else{

	std::map<std::string,int>::iterator it;

	for(it = begin(); it!=end(); ++it ){

		std::cout<<it->first<<" "<<it->second<<std::endl;
	}
}


}