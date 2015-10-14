/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	addAndMakeVisible(wallpaper);
	addAndMakeVisible(time);
	addAndMakeVisible(display);
	display.toFront(true);
	
    setSize (650, 450);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::darkgrey);

    g.setFont (Font (16.0f));
    g.setColour (Colours::yellow);
    g.drawText ("BatComputer OS - Ver 0.04", getLocalBounds(), Justification::bottomRight, true);
	
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	time.setTopRightPosition( (getWidth() + 34), 0 );
	wallpaper.setBoundsRelative(0.22, 0.22, 1, 1);
	display.setBoundsRelative(0, 0, 1, 1);
	//display.setTopLeftPosition((0, 0);
	//wallpaper.broughtToFront();
}
