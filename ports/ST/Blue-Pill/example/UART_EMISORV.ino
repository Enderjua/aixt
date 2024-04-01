// This Arduino code was automatically generated by Aixt Project
// Device = Blue-Pill
// Board = Blue-Pill
// Backend = arduino

#define time__sleep_ms(MS)    delay(MS)
#define pin__output		OUTPUT
#define pin__input		INPUT
#define pin__in_pullup	INPUT_PULLUP
#define pin__high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)
#define uart__println(MESSAGE)   Serial.println(MESSAGE)
#define uart__println_1(MESSAGE)   Serial1.println(MESSAGE)
#define uart__read   Serial.read
#define uart__ready   Serial.available
#define uart__ready_1   Serial1.available
#define uart__read_1   Serial1.read
#define uart__setup(BAUD_RATE)   Serial.begin(BAUD_RATE)
#define uart__setup_1(BAUD_RATE)   Serial1.begin(BAUD_RATE)
#define uart__Write(VALUE)    Serial.write(VALUE)
#define adc__read(PIN_NAME)   analogRead(PIN_NAME)

void main__init();

void time__init();

void pin__init();

void uart__init();

void adc__init();

enum main____pin_names {
	rX = PA11,
	tX = PA10,
	p1 = PA0,
	p2 = PA1,
	p3 = PA2,
	p4 = PA3,
	p5 = PA4,
	p6 = PA5,
	p7 = PA6,
	p8 = PA7,
	p9 = PB0,
	p10 = PB1,
	p11 = PB10,
	p12 = PB11,
	p13 = PB12,
	p14 = PB13,
	p15 = PB14,
	p16 = PB15,
	p17 = PA8,
	p18 = PB3,
	p19 = PB4,
	p20 = PB5,
	p21 = PB6,
	p22 = PB7,
	p23 = PB8,
	p24 = PB9,
	p25 = PC13,
	recibe_dato,
	dato,
	envia_dato,
};

void main__init() {
	time__init();
	pin__init();
	uart__init();
	adc__init();
	
}

void time__init() {
}

void pin__init() {
}

void uart__init() {
}

void adc__init() {
}

void setup() {
	main__init();
	int32_t dato = 0;
	char envia_dato = ' ';
	uart__setup(9600);
	uart__println("Inicio de sketch - valores del potenciometro");
}

void loop() {
	dato == analogRead(p5);
	delay(100);
	uart__println(dato);
	if((dato <= 400)) {
		uart__Write("1");
	}
	else if((dato >= 400 && dato <= 700)) {
		uart__Write("2");
	}
	else {
		uart__Write("3");
	}
}
