
#include <Gpio.h>
Sensorgpio::Sensorgpio(NumPin){
	
	numpin_ = NumPin;
	mgpio_= mraa_gpio_init(numpin_);
	type_=MRAA_GPIO_IN;
	}

Actiogpio::Actiogpio(NumPin){
	
	numpin_ = NumPin;
	mgpio_= mraa_gpio_init(numpin_);
	type_=MRAA_GPIO_OUT;
	}
	
	
Led::Led(int NumPin,char couleur): Actiogpio(NumPin){
if (couleur='r' || couleur='v')
	{ couleur_=couleur;}
else 
{ //ereur 
}
}

void Led::write(bool state){
mraa_gpio_context result;
mraa_gpio_dir(gpio, type_);

if (state==0)
	{result = mraa_gpio_write (mgpio_,0);}
else	
	{result = mraa_gpio_write (mgpio_,255);}
}


void Led::Turn_on_Led (void){
this.write(true);
}

void Led::Turn_off_Led (void){
this.write(false);
}


void Pump::write(bool state){
mraa_gpio_context result;
mraa_gpio_dir(gpio, type_);

if (state==0)
	{result = mraa_gpio_write (mgpio_,0);}
else	
	{result = mraa_gpio_write (mgpio_,255);}
}


void Turn_on_Pump(int time){
this.write(true);
// arrete le moteur après x sec
auto t1 = std::move(callAfterXSec(time, []() { this.write(false); }));
 //t1.join();
 }
 
 bool Button::read(void){
 int result;
mraa_gpio_dir(gpio, type_);
result= mraa_gpio_read(mgpio_);
if (result==1)
	{return true;}
if (result==0)
	{return false;}
/*if (result==-1)
	{erreur
	}*/
}
