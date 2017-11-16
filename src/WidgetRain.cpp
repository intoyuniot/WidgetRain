
#include "WidgetRain.h"


WidgetRain::WidgetRain(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/rain_%d/data/status",_Item);
}

WidgetRain::~WidgetRain()
{
    
}

void WidgetRain::begin(void (*UserCallBack)(void))
{

}

void WidgetRain::displayRainStatus(uint8_t fRain)
{
	IntoRobot.publish(pDataStatusTopic,fRain);
}









