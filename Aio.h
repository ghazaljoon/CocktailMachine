#include <Pin.h>

//	AIO
class Aio: public Pin{
protected:
mraa_aio_context maio_;
public:
//Aio();
//~Aio();
}

//--------------------------
//	AIO SENSOR
class Sensoraio: public Aio{
protected:
public:
Sensoraio(NumPin);
virtual bool read(void)=0;
}

//	AIO ACTIONNER
class Actioaio: public Aio{
protected:
public:
Actioaio(NumPin);
virtual bool write(void)=0;
}

//--------------------------------
class thermo: public Sensoraio{
protected:
float temp_;

public:
virtual bool read(void);
float const getTemp(void);
}
