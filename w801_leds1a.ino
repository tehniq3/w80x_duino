/* led effect: https://www.instructables.com/Audi-LED-Dynamic-Blinker-Arduino/
* original ideea for W801 board by Nicu FLORICA (niq_ro)
* internal leds at 11,16,17,18,26,25,5
 */

int led[7] = {PB11, PB16, PB17, PB18, PB26, PB25, PB5};

int pauza = 100;


 
void setup()

{
for (int i = 0; i < 7; i++)
{
 pinMode(led[i],OUTPUT); 
 digitalWrite(led[i],1);
}
}
void loop()
{
for (int i = 0; i < 7; i++)
{
 digitalWrite(led[i],0);
 delay(pauza);
}
for (int i = 0; i < 7; i++)
{
 digitalWrite(led[i],1);
 delay(pauza);
}
for (int i = 0; i < 7; i++)
{
 digitalWrite(led[6-i],0);
 delay(pauza);
}
for (int i = 0; i < 7; i++)
{
 digitalWrite(led[6-i],1);
 delay(pauza);
}

}  // end main loop
