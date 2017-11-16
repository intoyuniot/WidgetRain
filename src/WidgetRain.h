#ifndef WIDGET_RAIN_H_
#define WIDGET_RAIN_H_

#include "application.h"


class WidgetRain
{
public:
    WidgetRain(uint8_t ucItem = 0);
    ~WidgetRain();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayRainStatus(uint8_t fRain);

    
private:
    char pDataStatusTopic[64];
    uint8_t _Item=0;         
};

#endif
