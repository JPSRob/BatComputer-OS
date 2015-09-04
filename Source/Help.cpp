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

#include "Help.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Help::Help ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	toggleHelp = false;
	
    //[/Constructor_pre]

    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText (TRANS("Help"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colours::black);
    textButton->setColour (TextButton::buttonOnColourId, Colour (0xff484848));
    textButton->setColour (TextButton::textColourOnId, Colours::yellow);
    textButton->setColour (TextButton::textColourOffId, Colours::yellow);

    addAndMakeVisible (viewport = new Viewport ("new viewport"));
	


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Help::~Help()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textButton = nullptr;
	//viewport->deleteAllChildren();
    viewport = nullptr;

    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Help::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::transparentBlack);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Help::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    textButton->setBounds (0, 0, 56, 24);
    viewport->setBounds (8, 32, 170, 150);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Help::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
		if (toggleHelp == false) {
			toggleHelp = true;
			viewport->setViewedComponent(&helpText, true);
			viewport->setVisible(true);
		}
		else if (toggleHelp == true) {
			toggleHelp = false;
			viewport->setVisible(false);
		}
		
        //[/UserButtonCode_textButton]
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

<JUCER_COMPONENT documentType="Component" className="Help" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="66e8758097502386" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 0 56 24" bgColOff="ff000000"
              bgColOn="ff484848" textCol="ffffff00" textColOn="ffffff00" buttonText="Help"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <VIEWPORT name="new viewport" id="b05fb709b9c832d2" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="8 32 150 150" vscroll="1"
            hscroll="1" scrollbarThickness="18" contentType="1" jucerFile="Texts/Help.txt"
            contentClass="" constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
