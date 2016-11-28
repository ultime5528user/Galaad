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
#include "Commands/ISpin.h" //
#include "Commands/Pilotage.h"
#include "Commands/SPitcheur.h"
#include "commands/ISpinOut.h" //
#include "commands/ISpinDown.h" //
#include "commands/ISpinLvStop.h"
#include "commands/ISpinSetDown.h" //
#include "commands/ISpinSetUp.h" //
#include "commands/ISpinStop.h"
#include "commands/ISpinUp.h" //
#include "commands/ELever.h"
#include "commands/EDessendre.h"
#include "commands/EMaintien.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    stick.reset(new Joystick(0));
    
    bouton2.reset(new JoystickButton(stick.get(), 2));
    bouton2->WhileHeld(new EDessendre());
    bouton1.reset(new JoystickButton(stick.get(), 1));
    bouton1->WhileHeld(new ELever());
    bouton3.reset(new JoystickButton(stick.get(), 3));
    bouton3->WhileHeld(new EMaintien());
    bouton4.reset(new JoystickButton(stick.get(), 4));
    bouton4->WhileHeld(new ISpinSetDown());
    bouton5.reset(new JoystickButton(stick.get(), 5));
    bouton5->WhileHeld(new ISpinDown());
    bouton6.reset(new JoystickButton(stick.get(), 6));
    bouton6->WhileHeld(new ISpinUp());
    bouton7.reset(new JoystickButton(stick.get(), 7));
    bouton7->WhileHeld(new ISpinStop());
    bouton8.reset(new JoystickButton(stick.get(), 8));
    bouton8->WhileHeld(new ISpinLvStop());

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
