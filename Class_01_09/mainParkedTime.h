#ifndef PARKEDTIME_H
#define PARKEDTIME_H

#include <stdio.h>
#include <iostream>

class ParkedTime
{
    private:
        int startHour;
        int startMinute;
        int endHour;
        int endMinute;
        int time;
        int startTime;
        int endTime;
        int diff;

    public:
        int getStartTime();
        int getEndTime();
        bool setStartTime(int hour, int minute);
        bool setEndTime(int hour, int minute);
        int calculateDiffTime();
        double calculateFinalPrice(int totalTime);
};

#endif


