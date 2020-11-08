#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    cameraWidth = 432;
    cameraHeight = 240;
    videoGrabber.setVerbose(true);
    videoGrabber.initGrabber(cameraWidth, cameraHeight);
}

//--------------------------------------------------------------
void ofApp::update(){
    videoGrabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0xffffff);
    videoGrabber.draw(20, 20);
    
    ofPixels pixels = videoGrabber.getPixels();
    for (int i = 0; i < cameraWidth; i+=10) {
        for (int j = 0; j < cameraHeight; j+=10) {
            unsigned char r = pixels[(j * cameraWidth + i) * 3];
            unsigned char g = pixels[(j * cameraWidth + i) * 3 + 1];
            unsigned char b = pixels[(j * cameraWidth + i) * 3 + 2];
            
            ofSetColor(255, 0, 0, 100);
            ofDrawCircle(cameraWidth + 40 + i, 20+j, 20.0 * (float)r/255.0);
            ofSetColor(0, 255, 0, 100);
            ofDrawCircle(cameraWidth + 40 + i, 20+j, 20.0 * (float)g/255.0);
            ofSetColor(0, 0, 255, 100);
            ofDrawCircle(cameraWidth + 40 + i, 20+j, 20.0 * (float)b/255.0);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}
