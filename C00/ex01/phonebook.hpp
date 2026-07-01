#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>

class Phonebook
{
	private:
		Contact 	contacs[8];
		int 		count;	
	public:
		Phonebook();
		void	addContact();
		void	search() const;
};

Phonebook::phonebook(/* args */)
{
}

Phonebook::~phonebook()
{
}


#endif