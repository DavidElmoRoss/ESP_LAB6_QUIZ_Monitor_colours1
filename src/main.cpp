/*
When you BUILD and UPLOAD then RUN this code in PLATFORMIO,
it will continually scroll colours past you. You must use
the ESP-PROG, to determine the number and order of the
colours.
First you must upload the program with out the ESP-PROG
connected.
Then connect the ESP-PROG, and uncomment the LAST 3 lines
in platformio.ini .
After the UPLOAD option is finished, choose:
RUN/DEBUG. By setting breakpoints you can determine the
number and order of the colours displayed.
You will have to set monitor_port   to the COM port associated 
with the ESP32 NOT the ESP-PROG.
 See PlatformIO.ini for details
 */


#include "arduino.h"
int i;
void setup()
{
  Serial.begin(9600);
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