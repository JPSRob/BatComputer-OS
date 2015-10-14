/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Display.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Display::Display ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	toggleDisplay = false;
    //[/Constructor_pre]

    addAndMakeVisible (helpButton = new TextButton ("helpButton"));
    helpButton->setButtonText (TRANS("Help"));
    helpButton->addListener (this);
    helpButton->setColour (TextButton::buttonColourId, Colours::black);
    helpButton->setColour (TextButton::buttonOnColourId, Colour (0xff4a4a4a));
    helpButton->setColour (TextButton::textColourOnId, Colours::yellow);
    helpButton->setColour (TextButton::textColourOffId, Colours::yellow);

    addAndMakeVisible (viewport = new Viewport ("new viewport"));

    addAndMakeVisible (directoryButton = new TextButton ("directoryButton"));
    directoryButton->setButtonText (TRANS("Directory"));
    directoryButton->addListener (this);
    directoryButton->setColour (TextButton::buttonColourId, Colours::black);
    directoryButton->setColour (TextButton::buttonOnColourId, Colour (0xff4a4a4a));
    directoryButton->setColour (TextButton::textColourOnId, Colours::yellow);
    directoryButton->setColour (TextButton::textColourOffId, Colours::yellow);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Display::~Display()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    helpButton = nullptr;
    viewport = nullptr;
    directoryButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Display::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Display::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    helpButton->setBounds (0, 0, 56, 24);
    viewport->setBounds (0, 32, proportionOfWidth (0.9000f), proportionOfHeight (0.9005f));
    directoryButton->setBounds (64, 0, 64, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Display::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == helpButton)
    {
        //[UserButtonCode_helpButton] -- add your button handler code here..
		if (toggleDisplay == false) {
			toggleDisplay = true;
			helpText.setVisible(true);
			viewport->setViewedComponent(&helpText, false); //NOTE: changing second parameter to "true" creates a break when closing program after opening help
			viewport->setVisible(true);
		}
		else if (toggleDisplay == true) {
			toggleDisplay = false;

			helpText.setVisible(false);
			directoryText.setVisible(false);

			viewport->setVisible(false);
		}
        //[/UserButtonCode_helpButton]
    }
    else if (buttonThatWasClicked == directoryButton)
    {
        //[UserButtonCode_directoryButton] -- add your button handler code here..
		if (toggleDisplay == false) {
			toggleDisplay = true;
			directoryText.setVisible(true);
			viewport->setViewedComponent(&directoryText, false); //NOTE: changing second parameter to "true" creates a break when closing program after opening help
			viewport->setVisible(true);
		}
		else if (toggleDisplay == true) {
			toggleDisplay = false;

			helpText.setVisible(false);
			directoryText.setVisible(false);

			viewport->setVisible(false);
		}
        //[/UserButtonCode_directoryButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Display" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <TEXTBUTTON name="helpButton" id="dc7468f76d0e443f" memberName="helpButton"
              virtualName="" explicitFocusOrder="0" pos="0 0 56 24" bgColOff="ff000000"
              bgColOn="ff4a4a4a" textCol="ffffff00" textColOn="ffffff00" buttonText="Help"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <VIEWPORT name="new viewport" id="dd9bc4e11e84851" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="0 32 50% 50.053%"
            vscroll="1" hscroll="1" scrollbarThickness="18" contentType="0"
            jucerFile="" contentClass="" constructorParams=""/>
  <TEXTBUTTON name="directoryButton" id="d0bd45067e5cdb71" memberName="directoryButton"
              virtualName="" explicitFocusOrder="0" pos="64 0 64 24" bgColOff="ff000000"
              bgColOn="ff4a4a4a" textCol="ffffff00" textColOn="ffffff00" buttonText="Directory"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
