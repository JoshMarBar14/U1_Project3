#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetWindowShape(1000,1000);
    
      //ptr = &var;
 
   /* printf("Value at ptr = %p \n",ptr);
    printf("Value at var = %d \n",var);
    printf("Value at *ptr = %d \n", *ptr);
*/
}



//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
 ofDrawCircle(playerPos.x, playerPos.y, 30);
    
    
    
    if (up) {
        playerPos.y-=4;
    }
    if (down) {
        playerPos.y+=4;
    }
    if (left) {
        playerPos.x-=4;
    }
    if (right) {
        playerPos.x+=4;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'd') {
        playerPos.x+=4;
        right = true;
    }
    
    
    if (key == 'a') {
        playerPos.x-=4;
        left = true;
    }
    if (key == 's') {
        playerPos.y+=4;
        down = true;
    }
    
    
    if (key == 'w') {
        playerPos.y-=4;
        up = true;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == 'd') {
        playerPos.x+=4;
        right = false;
    }
    
    
    if (key == 'a') {
        playerPos.x-=4;
        left = false;
    }
    if (key == 's') {
        playerPos.y+=4;
        down = false;
    }
    
    
    if (key == 'w') {
        playerPos.y-=4;
        up = false;
    }
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
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
