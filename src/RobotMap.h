// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<SpeedController> basePilotableMoteurG;
	static std::shared_ptr<SpeedController> basePilotableMoteurD;
	static std::shared_ptr<RobotDrive> basePilotableRobotDrive;
	static std::shared_ptr<Encoder> basePilotableEncoderG;
	static std::shared_ptr<SpeedController> intakeSpin;
	static std::shared_ptr<DigitalInput> intakeSwitch;
	static std::shared_ptr<SpeedController> intakeMonte;
	static std::shared_ptr<SpeedController> shooterConvoyeur;
	static std::shared_ptr<SpeedController> shooterPitcheur;
	static std::shared_ptr<DigitalInput> shooterSwitch;
	static std::shared_ptr<SpeedController> elevateurMonteur;
	static std::shared_ptr<AnalogPotentiometer> elevateurPot;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
