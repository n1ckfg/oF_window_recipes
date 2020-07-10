#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main() {

	// setup the GL context
#ifdef TARGET_OPENGLES
	ofGLESWindowSettings settings;
	settings.glesVersion = 2;
	settings.windowMode = OF_FULLSCREEN;
	ofCreateWindow(settings);
#else
        ofGLFWWindowSettings settings;
        settings.numSamples = 0;
        settings.windowMode = OF_FULLSCREEN;
        ofCreateWindow(settings);
#endif

        // this kicks off the running of my app
        // can be OF_WINDOW or OF_FULLSCREEN
        // pass in width and height too:
        ofRunApp( new ofApp());

}
