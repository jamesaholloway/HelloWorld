/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
struct Car
{
    struct CarSeat
    {
        bool seatIsLeather;
    };
    int numberOfWheels;
    bool covertible;
    CarSeat driverSeat;
    CarSeat navigatorSeat;
    
    bool switchSeats( CarSeat oldSeat, CarSeat newSeat);
    
    void accelerate(float howFarToPushThePedal);
};
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
