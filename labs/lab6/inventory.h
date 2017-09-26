#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <map>
#include <string>

class Inventory : private std::map<std::string, int> { //This means that within the class I can access map functions but if I make an 
														//inventory class object, I can't call map functions with the object
public:
	Inventory();

	/* Add an item to the inventory with the given name and amount. */
	void addItem(std::string a, int b);
	/* Remove all items with this name from the inventory. */
	void removeItem(std::string a);
	/* Return the number of items with this name from the inventory. */
	int getNumItems(std::string a);

	/* Print all the items in this format:
		key value
		key value
		key value
	*/
	void printAllItems();
};

#endif