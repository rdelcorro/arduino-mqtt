//typedef int time_t;

#include "/Users/ramiro.delcorro/Library/Arduino15/packages/esp8266/hardware/esp8266/2.5.0-beta2/tools/sdk/libc/xtensa-lx106-elf/include/sys/types.h"
#include <hardwareSerial.h>
#include <stdio.h>
#include <stdarg.h>

extern "C" {

void printc(char *fmt, ... ){
        char buf[50]; // resulting string limited to 128 chars
        va_list args;
        va_start (args, fmt );
        vsnprintf(buf, 50, fmt, args);
        va_end (args);
        Serial.println(buf);
}




}