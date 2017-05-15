#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"

#include "opencv2/opencv.hpp"

#include "darknet.h"

using namespace cv;
using namespace ofxCv;
using namespace std;

class ImageLayers {
public:
    
    ofImage img;
    Mat img_m;
    
    //ofImage layer_img;
    //int layer_i = 0;
    
    vector<ofImage> layer_img;
};

class ofApp : public ofBaseApp {

    Yolo yolo;
    //vector<cv::Rect> detections;
    
    vector<ImageLayers> images;
    
    //ImageLayers image;
    int layer_i;
    
    vector<unsigned char> layer_key;
    
    ofPoint off;
    
    bool process = true;
    //bool update_layers_vis = true;
    
    string data_path;
    int image_i;
    int data_dir_size;
    
    ofxPanel gui;

    // image offset
    ofxVec2Slider offset;
    ofxFloatSlider zoom;

    ofxVec2Slider layer_offset;
    ofxFloatSlider layer_zoom;

    ofxToggle norm_all;
    
//    ofxVec2Slider image_offset;
//    ofxVec2Slider patch_size;
//    ofxVec2Slider patch_offset;
//    ofxFloatSlider patch_zoom;
    
public:
    void setup();
    void update();
    void draw();
    void exit();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
};
