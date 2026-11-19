# ifndef WEAPON_HPP
# define WEAPON_HPP

// Libraries

# include <iostream>
# include <string>
# include <iomanip>


class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		~Weapon();
		const std::string& getType(const std::string X);
		void setType(const std::string& newType);
};

# endif