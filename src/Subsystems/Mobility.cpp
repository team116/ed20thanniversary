// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Mobility.h"
#include "../RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "PIDController.h"
#include "PIDSource.h"
#include "PIDOutput.h"
#include "../Robot.h"
#include "../OI.h"
#include "Robot.cpp"
#include "OI.cpp"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
Mobility::Mobility() :
		PIDSubsystem("Mobility", 1.0, 0.0, 0.0) {
	SetAbsoluteTolerance(0.2);
	GetPIDController()->SetContinuous(true);
	frc::LiveWindow::GetInstance()->AddActuator("Mobility",
			"PIDSubsystem Controller", GetPIDController());
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	fLspeedController = RobotMap::mobilityFLspeedController;
	rLspeedController = RobotMap::mobilityRLspeedController;
	frontLeftMotor = RobotMap::mobilityfrontLeftMotor;
	rearLeftMotor = RobotMap::mobilityrearLeftMotor;
	leftSpeedController = RobotMap::mobilityleftSpeedController;
	fRspeedController = RobotMap::mobilityFRspeedController;
	rRspeedController = RobotMap::mobilityRRspeedController;
	frontRightMotor = RobotMap::mobilityfrontRightMotor;
	rearRightMotor = RobotMap::mobilityrearRightMotor;
	rightSpeedController = RobotMap::mobilityrightSpeedController;
	differentialDrive1 = RobotMap::mobilityDifferentialDrive1;
	leftEncoder = RobotMap::mobilityleftEncoder;
	rightEncoder = RobotMap::mobilityrightEncoder;

	robot = Robot();
	leftJoystick = robot.oi->getleftJoystick();
	rightJoystick = robot.oi->getrightJoystick();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//                  to
	// Enable() - Enables the PID controller.

	GetPIDController()->Enable();
	frontRightMotor->SetSafetyEnabled(true);
	frontLeftMotor->SetSafetyEnabled(true);
	rearRightMotor->SetSafetyEnabled(true);
	rearLeftMotor->SetSafetyEnabled(true);

	double leftSpeed = leftJoystick->GetY();
	leftSpeedController->Set(leftSpeed);
	double rightSpeed = rightJoystick->GetY();
	rightSpeedController->Set(rightSpeed);
}

double Mobility::ReturnPIDInput() {
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
	return leftEncoder->PIDGet();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
}

void Mobility::UsePIDOutput(double output) {
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
	leftSpeedController->PIDWrite(output);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
}

void Mobility::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
