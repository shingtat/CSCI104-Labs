#include "healer.h"

	Healer::Healer(std::string name) : Player(name) 
	{

	}

	void Healer::doAction(Player* target)
	{
		int currenthp = target->getHP();
		if(currenthp > target->getMaxHP()-75){
			target->setHP(target->getMaxHP());
		}

		else{
		target->setHP(currenthp+75);
	}
	}