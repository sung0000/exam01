#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);
AnalogIn Ain(A0);


int main()

{

      uLCD.printf("\n107061214\n"); //Default Green on black text

      uLCD.line(30, 30 , 30, 75 , GREEN);
      uLCD.line(30, 30 , 75, 30 , GREEN);
      uLCD.line(75, 30 , 75, 75 , GREEN);
      uLCD.line(30, 75 , 75, 75 , GREEN);

    while(1){
        PWM1.period(0.5);
        PWM1 = Ain;
        wait(0.1);
  }

}