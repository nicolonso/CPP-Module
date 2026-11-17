# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Zombie
{
	private:
		std::string		name;
	
	public:
		Zombie();
		void	announce( void );
};

# endif
