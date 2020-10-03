#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void){}

Human::~Human(void){}

const Brain &Human::getBrain(void)
{
	return this->_cortex;
}

std::string Human::identify(void)
{
	return this->_cortex.identify();
}