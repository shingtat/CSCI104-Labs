#include <map>
#include <string>
#include <iostream>
#include <stdexcept>

void populateMap(std::map<std::string, std::string> & disneyMap);
void printFriend(std::string name, std::map<std::string, std::string> disneyMap);

int main() {
	std::map<std::string, std::string> disneyMap;
	populateMap(disneyMap);
	printFriend("Buzz", disneyMap);
	printFriend("Lady", disneyMap);
	printFriend("Simba", disneyMap);
	printFriend("Gaston", disneyMap);
	printFriend("Belle", disneyMap);

}

void printFriend(std::string name, std::map<std::string, std::string> disneyMap) {
	std::string friendName = "";
	try{
		friendName = disneyMap.at(name); //trying to make this function call
	}

	catch(std::out_of_range& e){
		std::cout<<name<<" has no friends."<<std::endl;
		std::cout<<"\t"<<e.what()<<std::endl;
		return;

	}
	std::cout << name << "'s friend is " << friendName;
	std::cout << "." << std::endl;
}

void populateMap(std::map<std::string, std::string> & disneyMap) {
	disneyMap.insert(std::make_pair("Buzz", "Woody"));
	disneyMap.insert(std::make_pair("Lady", "Tramp"));
	disneyMap.insert(std::make_pair("Simba", "Nala"));
	disneyMap.insert(std::make_pair("Belle", "Beast"));
}