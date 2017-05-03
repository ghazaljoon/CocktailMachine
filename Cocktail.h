#include <string>
#include <list>
#include <cstring>
#include <iostream>
#include <vector>



class Cocktail{
protected:
string name_;
vector<liquid> ingredient(5);
vector<int> percentOfCocktail(5); // give the percent of each ingredient present in the drink

public:
boolean ChangeName(string name);
boolean AddIngredient(liquid newliquid, int percent);
void RemoveIngredient(liquid oldliquid);
void const ShowIngredient(void);
}

class Liquid{
protected:
string Name_;
int PercentAlcohol_;
public:
Liquid(string Name);
Liquid(string Name,int PercentAlcohol);
string const GetName(void);

//int	GetPercentAlcohol(void);
//void	ChangePercentAlcohol(int newpercent);
}


