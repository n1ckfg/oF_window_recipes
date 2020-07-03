#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main() {

        ofGLFWWindowSettings settings;
        settings.glesVersion = 2;
        settings.windowMode = OF_FULLSCREEN;
        settings.numSamples = 0;
        ofCreateWindow(settings);                       // <-------- setup the GL context

        // this kicks off the running of my app
        // can be OF_WINDOW or OF_FULLSCREEN
        // pass in width and height too:
        ofRunApp( new ofApp());

}
