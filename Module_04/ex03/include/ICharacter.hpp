#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter
{
public:
	ICharacter();
	ICharacter(ICharacter& other);
	ICharacter operator=(ICharacter& other);
	virtual ~ICharacter();
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
protected:
	int Items = 4;
};

#endif
