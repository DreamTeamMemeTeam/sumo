#pragma config(Motor,  motorB,          left,          tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          right,         tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define STATE_DEFAULT 0
#define STATE_OTHER   1

#include "pid.c"

int state = 0;

task sensorRead() {
	while(true) {
		//default state
		state = STATE_DEFAULT;
		//TODO test for line
	}
}

task main() {
	startTask(sensorRead);
	
	while (true) {
		switch (state) {
			case STATE_DEFAULT:
				break;
			case STATE_OTHER:
				break;
			default:
				writeDebugStreamLine("Entered unknown state %d, aborting...", state);
				stopAllTasks();
		}
	}
}
