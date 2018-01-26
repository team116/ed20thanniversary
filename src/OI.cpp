// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/closePiston.h"
#include "Commands/deployRung.h"
#include "Commands/moveIntakeOut.h"
#include "Commands/moveLeft.h"
#include "Commands/moveLift.h"
#include "Commands/moveRight.h"
#include "Commands/movetoScaleBottom.h"
#include "Commands/movetoScaleNeutral.h"
#include "Commands/movetoScaleTop.h"
#include "Commands/movetoSwitchTop.h"
#include "Commands/openPiston.h"
#include "Commands/pickUpCube.h"
#include "Commands/releaseCube.h"
#include "Commands/rotateCube.h"
#include "Commands/stopIntake.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    joystick1.reset(new frc::Joystick(4));
    
    scaleNeutral.reset(new frc::JoystickButton(joystick1.get(), 1));
    scaleNeutral->WhenPressed(new movetoScaleNeutral(0));
    switchTop.reset(new frc::JoystickButton(joystick1.get(), 1));
    switchTop->WhenPressed(new movetoSwitchTop(0));
    scaleBottom.reset(new frc::JoystickButton(joystick1.get(), 1));
    scaleBottom->WhenPressed(new movetoScaleBottom(0));
    intakeOut.reset(new frc::JoystickButton(joystick1.get(), 1));
    intakeOut->WhenPressed(new moveIntakeOut());
    rung.reset(new frc::JoystickButton(joystick1.get(), 1));
    rung->WhenPressed(new deployRung());
    closePistonButton.reset(new frc::JoystickButton(joystick1.get(), 1));
    closePistonButton->WhenPressed(new closePiston());
    openPistonButton.reset(new frc::JoystickButton(joystick1.get(), 1));
    openPistonButton->WhenPressed(new openPiston());
    scaleTop.reset(new frc::JoystickButton(joystick1.get(), 1));
    scaleTop->WhenPressed(new movetoScaleTop(0));
    elevator.reset(new frc::Joystick(3));
    
    climber.reset(new frc::Joystick(2));
    
    rightJoystick.reset(new frc::Joystick(1));
    
    leftJoystick.reset(new frc::Joystick(0));
    

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("rotateCube", new rotateCube());
    frc::SmartDashboard::PutData("releaseCube", new releaseCube());
    frc::SmartDashboard::PutData("pickUpCube", new pickUpCube());
    frc::SmartDashboard::PutData("stopIntake", new stopIntake());
    frc::SmartDashboard::PutData("moveLift", new moveLift());
    frc::SmartDashboard::PutData("moveRight", new moveRight());
    frc::SmartDashboard::PutData("moveLeft", new moveLeft());
    frc::SmartDashboard::PutData("movetoScaleTop", new movetoScaleTop());
    frc::SmartDashboard::PutData("movetoScaleNeutral", new movetoScaleNeutral());
    frc::SmartDashboard::PutData("movetoSwitchTop", new movetoSwitchTop());
    frc::SmartDashboard::PutData("movetoScaleBottom", new movetoScaleBottom());
    frc::SmartDashboard::PutData("moveIntakeOut", new moveIntakeOut());
    frc::SmartDashboard::PutData("closePiston", new closePiston());
    frc::SmartDashboard::PutData("openPiston", new openPiston());
    frc::SmartDashboard::PutData("deployRung", new deployRung());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getleftJoystick() {
   return leftJoystick;
}

std::shared_ptr<frc::Joystick> OI::getrightJoystick() {
   return rightJoystick;
}

std::shared_ptr<frc::Joystick> OI::getclimber() {
   return climber;
}

std::shared_ptr<frc::Joystick> OI::getelevator() {
   return elevator;
}

std::shared_ptr<frc::Joystick> OI::getJoystick1() {
   return joystick1;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS