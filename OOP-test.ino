/*
  My first OOP test on Arduino.
  
  This is a simple Arduino project to demonstrate Object-Oriented Programming (OOP).
  It controls two LEDs using a custom 'LED' class.
*/

// defining the led class
class LED {
  private:
    int pin;
    
  public:
    // constructor
    LED(int p){
      pin = p;
      pinMode(pin, OUTPUT);
    }

    // method: turns the led on
    void on(){
      digitalWrite(pin, HIGH);
    }

    // method: turns the led off
    void off(){
      digitalWrite(pin, LOW);
    }
};

// creating the leds objects
LED led1(2);
LED led2(3);

// tests
void loop() {
  led1.on();
  led2.on();
  delay(1000);
  led1.off();
  led2.off();
  delay(1000);
}

// nothing
void setup() {}
