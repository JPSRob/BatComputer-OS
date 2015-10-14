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

#ifndef __JUCE_HEADER_48A3197948DCED84__
#define __JUCE_HEADER_48A3197948DCED84__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"

#include "HelpText.h"
#include "DirectoryText.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Display  : public Component,
                 public ButtonListener
{
public:
    //==============================================================================
    Display ();
    ~Display();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	bool toggleDisplay; //keeps track of whether the display is being shown

	HelpText helpText;
	DirectoryText directoryText;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> helpButton;
    ScopedPointer<Viewport> viewport;
    ScopedPointer<TextButton> directoryButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Display)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_48A3197948DCED84__
