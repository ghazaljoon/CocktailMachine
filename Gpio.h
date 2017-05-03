#include <Pin.h>

//	GPIO
class Gpio: public Pin{
protected:
mraa_gpio_context mgpio_;
mraa_gpio_dir_t	type_;


public:
//Gpio();
//~Gpio();

}

//----------------------------------
//	GPIO SENSOR
class Sensorgpio: public Gpio{
protected:

public:

Sensorgpio(int NumPin);
virtual bool read(void)=0;

}
//	GPIO ACTIONNER
class Actiogpio: public Gpio{
protected:
bool state_;
public:

Actiogpio(int NumPin);
virtual void write(bool state)=0;
}


//-------------------------------------

class Button: public Sensorgpio{
protected:
public:
virtual bool read(void); 
}

class Led: public Actiogpio{
protected:
char const couleur_;
public:
virtual void write(bool state);
Led (int NumPin,char couleur);
void Turn_On_Led(void);
void Turn_Off_Led(void);

}


class Pump: public Actiogpio{
protected:
liquid associateLiquid_;
public:
virtual void write(bool state);
void Turn_On_Pump(int time);
void ChangeLiquid(liquid NewLiquid);
//void Turn_Off_Pump(void);

}

template <class Callback>
std::thread callAfterXSec(int sec, const Callback& cb) {
   return std::thread([sec, cb] () {
      std::this_thread::sleep_for(std::chrono::seconds(sec));
      cb();
   });
}
 

