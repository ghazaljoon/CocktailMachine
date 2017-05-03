#include <cstring>
#include <iostream>
#include "Cocktail.h"

class Actioner{
protected:
boolean Activated_;
Port portName_;

public:

Port const GetPort(void);
void ChangePort(Port newPort);
}


class Led: public Actioner{
protected:
char const couleur_;
public:
Led (char couleur);
void Turn_On_Led(void);
void Turn_Off_Led(void);
}

class Pump: public Actioner{
protected:
liquid associateLiquid_;
public:
void Turn_On_Pump(int time);
void ChangeLiquid(liquid NewLiquid);
//void Turn_Off_Pump(void);
}

class Lcd: public Actioner{
protected:
int luminosity_;
public:
void Display(string* text); 
}
