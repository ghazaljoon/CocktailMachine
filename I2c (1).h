#include <Pin.h>

//	I2C
class I2c: public Pin{
protected:
mraa_i2c_context i2c_;
public:
//I2c();
//~I2c();
}

//-----------------------------
//	I2C SENSOR
class Sensoi2c: public I2c{
protected:
public:
Sensori2c (int NumPin);
virtual bool read(void)=0;

}

//	I2C ACTIONNER
class Actioi2c: public I2c{
protected:
public:

Actioi2c (int NumPin);
virtual bool write(void)=0;
}

//---------------------------------
class Lcd: public Actioi2c{
protected:
int luminosity_;
public:
void Display(string* text); 
}
