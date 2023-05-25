//============================================================================
// Name        : Lab5OOP.cpp
// Author      : Nicholas Requena
// Version     : v0.1
// Description : Introduction into OOP classes.
//============================================================================
#include <iostream>
using namespace std;

class LED
{	// Class to light up an LED across a specified pin.
	// You can also specify a specific brightness, or time duration.
private:	int PinNum;
			int TimeDuration;
			float Brightness;
public:
			LED(int);
			void TurnOn(int);
			void TurnOn(int, float);
			void TurnOn(int, float, int);
			void TurnOff(int);
};

LED::LED(int pin)
{	// Constructor function to create default values.
	PinNum = pin;
	TimeDuration = 1;
	Brightness = 1;
}

void LED::TurnOn(int pin)
{	// Function to turn on LED across a pin indefinitely.
	PinNum = pin;
	TimeDuration = 1;
	Brightness = 1;

	cout << "LED is ON at Pin: " << pin << endl;
	cout << "LED has a brightness of: " << "1" << endl;
	cout << "LED will be on for a time of: " << "indefinitely" << endl;
}


void LED::TurnOn(int pin, float lightLevel)
{	// Function to turn on LED across a pin, given brightness.
	PinNum = pin;
	TimeDuration = 1;
	Brightness = lightLevel;

	cout << "LED is ON at Pin: " << pin << endl;
	cout << "LED has a brightness of: " << lightLevel << endl;
	cout << "LED will be on for a time of: " << "unspecified" << endl;
}

void LED::TurnOn(int pin, float lightLevel, int time)
{	// Function to turn on LED across a pin, given brightness and time.
	PinNum = pin;
	TimeDuration = time;
	Brightness = lightLevel;

	cout << "LED is ON at Pin: " << pin << endl;
	cout << "LED has a brightness of: " << lightLevel << endl;
	cout << "LED will be on for a time of: " << time << endl;
}

void LED::TurnOff(int pin)
{	// Function to turn off LED
	PinNum = pin;
	TimeDuration = 0;
	Brightness = 0;

	cout << "LED is OFF at Pin: " << pin << endl;
}



int main() {
	const int pin = 3;
	int brightness = 5.7;

	LED *GreenLED = new LED(pin);  // LED pointer object called GreenLED on pin 3

	GreenLED->TurnOn(pin, brightness); 
	delete (GreenLED);		// Delete GreenLED to allocate memory

	return 0;
}


