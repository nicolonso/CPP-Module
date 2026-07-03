#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact 	contacs[8];
		int 		count;	
	public:
		PhoneBook();
		void	addContact();
		void	search() const;
};

#endif