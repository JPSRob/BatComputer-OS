/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
	addAndMakeVisible(time);
	addAndMakeVisible(wallpaper);
	addAndMakeVisible(help);
	
    setSize (800, 600);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colours::darkgrey);

    g.setFont (Font (16.0f));
    g.setColour (Colours::yellow);
    g.drawText ("BatComputer OS - Ver 0.02", getLocalBounds(), Justification::bottomRight, true);
	
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
	time.setTopRightPosition( (getWidth() + 34), 0 );
	wallpaper.setBoundsRelative(0.31, 0.31, 0.5, 0.5);
	wallpaper.broughtToFront();
}
