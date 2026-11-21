# ifndef WEAPON_HPP
# define WEAPON_HPP

// Libraries

# include <iostream>
# include <string>
# include <iomanip>


class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string value);
		const std::string& getType() const;
		void setType( std::string newType );
		~Weapon();
};

# endif