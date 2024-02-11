#include <EVN.h>

#define LEFT_MOTOR_PORT     1
#define CENTRE_MOTOR_PORT   3
#define RIGHT_MOTOR_PORT    4

EVNAlpha board(BUTTON_TOGGLE, LED_LINK, MOTORS_LINK);
EVNMotor motor_left(LEFT_MOTOR_PORT, EV3_LARGE);
EVNMotor motor_right(RIGHT_MOTOR_PORT, EV3_LARGE);
EVNMotor motor_centre(CENTRE_MOTOR_PORT, EV3_MED);

void setup()
{
	board.begin();  //initialize board at start of void setup()
}

void setup1()
{
	//intialize motors on 2nd core for better performance
	//but only using one core works too

	motor_left.begin();
	motor_right.begin();
	motor_centre.begin();
}

void loop()
{
	//this is very basic code but you could code any kind of movement here!

	//on startup, the motors are disabled (so the user can upload code in peace)
	//pressing the user-defined button will toggle the motors on and off (can be disabled if needed)

	//move all motors
	motor_left.runSpeed(-50);
	motor_right.runSpeed(50);
	motor_centre.runSpeed(100);
	delay(3000);

	//reverse all motors
	motor_left.runSpeed(50);
	motor_left.runSpeed(-50);
	motor_centre.runSpeed();
	delay(3000);

}