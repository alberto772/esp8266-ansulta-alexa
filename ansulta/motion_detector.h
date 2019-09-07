/**************************************************************

This file is a part of
https://github.com/atiderko/esp8266-ansulta-alexa

Licensed under MIT license

This class handles the detected motions.

 **************************************************************/
#include "Ansulta.h" 
#include "config.h"

class MotionDetector : public AnsultaCallback {
  public:
    MotionDetector();
    void setup(Ansulta& p_ansulta, Config& cfg);
    int loop();
    void light_state_changed(int state, bool by_ansulta_ctrl);
    
    unsigned long msecs();
    
  private:
    Ansulta* p_ansulta;
    Config* p_cfg;
    unsigned long p_timeout;
    int p_md1_pin;
    int p_photo_pin;
    int p_light_state;
    int p_count_disable;
    int p_count_detected;
    unsigned long p_disable_duration;
    int p_photo_state;
    int p_photo_state_smooth;
    
    unsigned long p_md1_ts_detection;
    unsigned long p_motion_ts_deactivated;
    unsigned long p_ts_photo_intensity_mes;
    unsigned long p_light_ts_manual_off;
    unsigned long p_light_ts_manual_intervantion;
    
};
