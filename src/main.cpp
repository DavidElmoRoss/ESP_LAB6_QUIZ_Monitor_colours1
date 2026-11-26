/*
When you BUILD and UPLOAD then RUN this code in PLATFORMIO,
it will continually scroll colours past you. You must use
the ESP-PROG2, to determine the number and order of the
colours.
First you must upload the program 

After the UPLOAD option is finished, choose:
RUN/DEBUG. By setting breakpoints you can determine the
number and order of the colours displayed (beside each for statements)

Click on the PLUG ICON to see the colours.
*/


#include "arduino.h"
int i;
void setup()
{
  Serial.begin(9600);
  printf("\e[0m");
}
void loop()
{
    for(i=0;i<=50;++i)
    printf("\e[45m\e[0K\n");
    fflush(stdout);
    for(i=0;i<=50;++i)
    printf("\e[41m\e[0K\n"); 
    fflush(stdout);
    for(i=0;i<=50;++i)
    printf("\e[43m\e[0K\n");
    fflush(stdout);
    for(i=0;i<=50;++i)
    printf("\e[44m\e[0K\n");
    fflush(stdout);
}
