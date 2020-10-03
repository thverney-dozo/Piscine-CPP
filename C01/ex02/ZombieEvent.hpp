#ifndef _ZOMBIEEVENT_H_
# define _ZOMBIEEVENT_H_

# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);

		void randomChump(void);

	private:
		std::string _type;
		static std::string _names[10];
};

#endif