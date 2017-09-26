#include "fighter.h"

Fighter::Fighter(std::string name) : Player(name)
{

}

void Fighter::doAction(Player* target){
	int currenthp = target->getHP();
	target->setHP(currenthp-75);
}