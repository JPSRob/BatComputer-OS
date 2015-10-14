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

#include "HelpText.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
HelpText::HelpText ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Welcome to BatComputer OS!\n"
                                          "Ver. 0.02\n"
                                          "\n"
                                          "Help Information:\n"
                                          "\n"
                                          "- Clock\n"
                                          "   Located in the upper-right corner of the display.\n"
                                          "   No action necessary, it will work on it\'s own!\n"
                                          "- Version Number\n"
                                          "   Located in the bottom-right corner of the display.\n"
                                          "   Informs you of the current version of the OS.")));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colours::black);
    label->setColour (Label::textColourId, Colours::yellow);
    label->setColour (Label::outlineColourId, Colours::yellow);
    label->setColour (TextEditor::textColourId, Colours::yellow);
    label->setColour (TextEditor::backgroundColourId, Colours::black);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

HelpText::~HelpText()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void HelpText::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void HelpText::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label->setBounds (0, 0, 344, 208);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="HelpText" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffff"/>
  <LABEL name="new label" id="5d6499245f2045ed" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0 0 344 208" bkgCol="ff000000" textCol="ffffff00"
         outlineCol="ffffff00" edTextCol="ffffff00" edBkgCol="ff000000"
         labelText="Welcome to BatComputer OS!&#10;Ver. 0.02&#10;&#10;Help Information:&#10;&#10;- Clock&#10;   Located in the upper-right corner of the display.&#10;   No action necessary, it will work on it's own!&#10;- Version Number&#10;   Located in the bottom-right corner of the display.&#10;   Informs you of the current version of the OS."
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
