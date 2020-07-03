#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main() {

	ofGLESWindowSettings settings;
	settings.glesVersion = 2;
	settings.windowMode = OF_FULLSCREEN;
	ofCreateWindow(settings);

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}