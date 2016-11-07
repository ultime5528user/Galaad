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
#include "Commands/EDessendre.h"
#include "Commands/ELever.h"
#include "Commands/EMaintien.h"
#include "Commands/ISpin.h"
#include "Commands/Pilotage.h"
#include "Commands/SPitcheur.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    stick.reset(new Joystick(0));
    
    bouton2.reset(new JoystickButton(stick.get(), 1));
    bouton2->WhileHeld(new ELever());
    bouton1.reset(new JoystickButton(stick.get(), 1));
    bouton1->WhileHeld(new ISpin());

    // SmartDashboard Buttons
    SmartDashboard::PutData("EMaintien", new EMaintien());
    SmartDashboard::PutData("SPitcheur", new SPitcheur());
    SmartDashboard::PutData("EDessendre", new EDessendre());
    SmartDashboard::PutData("ELever", new ELever());
    SmartDashboard::PutData("ISpin", new ISpin());
    SmartDashboard::PutData("Pilotage", new Pilotage());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getStick() {
   return stick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
