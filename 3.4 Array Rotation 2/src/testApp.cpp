
#include "testApp.h"

//made by Yinan Zhang for the class "FLy on the wall" between Parsons and Tongji University

//--------------------------------------------------------------
void testApp::setup(){



    ofBackground(255, 255, 255);
    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofEnableAlphaBlending();    
    ofEnableSmoothing();      
    ofSetLineWidth(2);
    
    
    ofSetColor(24, 58, 117,80);
    
    
    for(int i=0; i<53; i++){
        for(int j=0; j<39; j++){
            pos.x=i*20;
            pos.y=j*20;

            ofPoint difference= ofPoint(mouseX, mouseY)-pos;
                                      
            float angle = atan2(difference.y, difference.x);

            ofPushMatrix();
            ofTranslate(pos.x,pos.y);
            ofRotate(angle * RAD_TO_DEG);
            ofCircle(50,0, 13);
            ofPopMatrix();
          }
       }
    


   

    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}