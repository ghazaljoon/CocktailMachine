class Aio: public Pin{
protected:
mraa_aio_context maio_;
public:
Aio();
~Aio();
}

class Sensoraio: public Aio{
protected:
mraa_gpio_context mgpio_;
mraa_gpio_dir_t	type_;
public:

virtual bool read(void)=0;

}

class Actioaio: public Aio{
protected:
mraa_gpio_context mgpio_;
mraa_gpio_dir_t	type_;
public:

virtual bool write(void)=0;
}
