#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp {
    
public:
  testApp() {
    init();
  }
    
  void init() {
    ready = FALSE;
    t_alpha = 0.0;
    alpha_freq = 0.0;
      prev_t = 0;
  }

  void setup();
  void update();
  void draw();
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y );
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
  
  
 private:
  bool ready;
  
  int display_width;
  int display_height;

  int   appFPS;
  float sequenceFPS;
  bool  bFrameIndependent;
  
  float t_alpha;
  float alpha_freq;
    long long prev_t;

  vector <ofImage> noise_images;
  vector <ofImage> burst_images;

  ofSoundPlayer noise_sound;
  vector <ofSoundPlayer> burst_sounds;

};
