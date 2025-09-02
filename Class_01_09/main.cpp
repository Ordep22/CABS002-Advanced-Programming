#include <stdio.h>
#include "mainParkedTime.h"

ParkedTime PKTime;
using namespace std;

int main()
{
  int diff = 0;
  ParkedTime pkdTime;

  pkdTime.setStartTime(10,00);
  pkdTime.setEndTime(14,00);
  diff = pkdTime.calculateDiffTime();
  pkdTime.calculateFinalPrice(diff);

}