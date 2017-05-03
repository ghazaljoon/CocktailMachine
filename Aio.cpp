#include <Aio.h>

Sensoraio::Sensoraio(NumPin){
	
	numpin_ = NumPin;
	maio_= mraa_aio_init(numpin_);
	}

Actioaio::Actioaio(NumPin){
	
	numpin_ = NumPin;
	maio_= mraa_aio_init(numpin_);
	}
	
float const Thermo::getTemp(void){
	return temp_;
	}
	
virtual bool read(void){
int a;
float resistance;
a= mraa_aio_read(maio_);
if (a=!-1)
	{	
	resistance=(float)(1023-a)*10000/a;
	temp_=1/(log(resistance/10000)/B+1/298.15)-273.15;
	}
}
