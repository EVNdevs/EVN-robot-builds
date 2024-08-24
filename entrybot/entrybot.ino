#include <EVN.h>

#define LEFT_MOTOR_PORT     1
#define CENTRE_MOTOR_PORT   3
#define RIGHT_MOTOR_PORT    4

EVNAlpha board;
EVNMotor motor_left(LEFT_MOTOR_PORT, EV3_LARGE);
EVNMotor motor_right(RIGHT_MOTOR_PORT, EV3_LARGE);
EVNMotor motor_centre(CENTRE_MOTOR_PORT, EV3_MED);

void setup1()
{
	//intialize motors on 2nd core
	motor_left.begin();
	motor_right.begin();
	motor_centre.begin();
}

void setup()
{
	board.begin();  //initialize board at start of void setup()
}

void loop()
{
	//this is very basic code but you could code any kind of movement here!

	//start all motors
	motor_left.runSpeed(-360);
	motor_right.runSpeed(360);
	motor_centre.runSpeed(180);
	delay(3000);

	//reverse all motors
	motor_left.runSpeed(360);
	motor_right.runSpeed(-360);
	motor_centre.runSpeed(-180);
	delay(3000);

	//stop all motors
	motor_left.stop();
	motor_right.stop();
	motor_centre.stop();
	delay(3000);

}