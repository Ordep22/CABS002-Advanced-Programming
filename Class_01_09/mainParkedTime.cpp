#include "iostream"
#include "mainParkedTime.h"

#define TRINTAMIN 30
#define THREESHORAS 180
#define TWELVEHOURS 720
#define MINTAX 4.50
#define MAXCOUST 33

int ParkedTime::getStartTime()
{
    return startHour + startMinute;
}

int ParkedTime::getEndTime()
{
    return endHour + endMinute;
}


bool ParkedTime::setStartTime(int hour, int minute)
{
  	std::cout << "Seting start time hour: "<< hour*60 <<std::endl;
    std::cout << "Seting start time minuts: "<< minute <<std::endl;
	startHour = hour*60;
    startMinute = minute;
    startHour = startHour + startMinute;
    return true;
}

bool  ParkedTime::setEndTime(int hour, int minute)
{
  std::cout << "Seting start time hour: "<< hour*60 <<std::endl;
  std::cout << "Seting start time minuts: "<< minute <<std::endl;
  endHour = hour*60;
  endMinute = minute;
  endTime = endHour + endMinute;
  return true;
}

int ParkedTime::calculateDiffTime()
{
  diff = getEndTime() - getStartTime();
  std::cout<<"diff: "<<diff<<std::endl;
  return diff;
}

double ParkedTime::calculateFinalPrice(int totalTime)
{
 std::cout << "Total time: " << totalTime << std::endl;
 if(totalTime <= THREESHORAS)
 {
   std::cout << "The price to pay is: "<<MINTAX << std::endl;
   return MINTAX;
 }
 else if (( THREESHORAS < totalTime) && ( totalTime <= TWELVEHOURS))
 {
	float totalExtraMin =  (endHour - startHour) - THREESHORAS;
    float totalExtraCoust = (totalExtraMin/15) * 0.75 + MINTAX;
    std::cout << "The price to pay is: "<<totalExtraCoust << std::endl;
    return totalExtraCoust;
 }
 else
 {
   std::cout << "The price to pay is 33" << std::endl;
   return MAXCOUST;
 }

}