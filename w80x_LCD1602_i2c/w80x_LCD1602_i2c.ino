/* original from https://github.com/board707/w80x_arduino/tree/hal-v0.6.0/libraries/Wire/LCD2004_PCF8547
* using W801/W806 (W80x) boards - https://github.com/board707/w80x_arduino
* small changes by Nic Florica (niq_ro) for LCD1602
*/

#include "Arduino.h"
#include "Wire.h"
#include "LCD1602_PCF8547.h"

#define LCD_WIDTH   16
#define LCD_HEIGHT  2

int  x = 0;

HardwareI2C lsw;

void setup()
{

  Wire.begin();               // Hardware I2C  (PA4 = SDA, PA1 = SCL by default)
 // Wire.begin(PA12,PA14);    // Software I2C  (SDA, SCL) - any pins

  LCDInit ();

  delay(500);

  // Set CGRAM Address
  uint8_t offset = 0;
  LCDWriteInstructionByte (0b01000000 | offset);
  delayMicroseconds(40);
//  LCDWriteData (&data[0], sizeof(data));

  LCDClear ();
  LCDSetBacklightOn();
  
  delay (1000);
  LCDWriteDataString (0, 0, (char*)" W80x board with");
  LCDWriteDataString (0, 1, (char*)" LCD1602 on i2c!");
  delay(3000);
  LCDClear ();

  LCDWriteDataString (0, 0, (char*)" test by niq_ro ");
  LCDWriteDataString (0, 1, (char*)" Arduino sketch ");
  delay(3000);
  LCDClear ();
  
}


void loop()
{

LCDWriteDataString (0, 0, (char*)"W80x i2c_LCD1602");
LCDSetXY (10 , 1);
LCDWriteDataByte (48+x/10);
LCDSetXY (11 , 1);
LCDWriteDataByte (48+x%10);

  delay(500);
  LCDClear ();
x++;
if (x>99) x = 0;
}  // end main loop
