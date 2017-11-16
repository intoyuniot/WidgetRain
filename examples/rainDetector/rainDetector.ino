/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
雨水检测器：检测是否有雨水

所需器件:
1.雨水检测传感器

接线说明:
雨水检测传感器              核心板
1.VCC                       +3.3V
2.GND                        GND
3.AO                         悬空
4.DO                         D0
*/

#include <WidgetRain.h>

#define RainSensorINPUT   D0

WidgetRain rain = WidgetRain();

void setup()
{
	pinMode(RainSensorINPUT, INPUT);
}

void loop()
{
	if(!digitalRead(RainSensorINPUT)) //检测到雨水
	{
		rain.displayRainStatus(1);
	}
	else  //未检测到雨水
	{
		rain.displayRainStatus(0);
	}

	delay(3000);
}
