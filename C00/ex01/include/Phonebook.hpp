# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// Libraries

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	private:
		Contact		contact[8];
		int			count;

	public:
		Phonebook();
		void	addContact();
		void	search() const; // const give access to only read the memory not modify
};


#endif