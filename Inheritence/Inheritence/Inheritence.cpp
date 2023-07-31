#include<iostream>
using namespace std;
class Animal {
public:
	virtual void sound()
	{
		cout << "\nsound of animal";
	}
	Animal()
	{
		cout << "\nBase constructor of super class";
	}
private:
	virtual void size()
	{
		cout << "\nsize of animal";
	}
protected:
	void color()
	{
		cout << "color of animal";
	}
};

class Cat:virtual public Animal{
public:
	Cat()
	{
		cout << "\nBase constructor of child class #1";
	}
	void sound() override
	{
		cout << "\nThe cat meaows";
	}

};
class PersianCat : public Cat {
public:
	PersianCat()
	{
		cout << "\nBase constructor of the child of child #1";
	}
};
class Fish :virtual public Animal{
public:
	Fish()
	{
		cout << "\nBase constructor of child class #2";
	}
	void sound()
	{
		cout << "\nThe fish boops";
	}

};
class CatFish : public Fish,public Cat {
public:
	CatFish()
	{
		cout << "\nBase constructor of the child of child #2";
	}
	void sound()
	{
		cout << "sount of catfish";
	}
};
int main()
{
	CatFish cf; //this object is stored in stack and deallocat automatically.
	cf.Cat::sound();// call sound function of parent class (cat)
	cf.Animal::sound();// sound of Animal
}