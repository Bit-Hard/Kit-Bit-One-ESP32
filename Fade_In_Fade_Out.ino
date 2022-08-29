// Digital pins with PWM for the LEDS
  const int GPIO18 = 18;
  const int GPIO4 = 4;
  const int GPIO23 = 23;
  const int GPIO14 = 14;
 
  int brightness = 0;
 
  void setup()
  {
    // We define the digital pins as outputs, except gpio14
    pinMode(GPIO18, OUTPUT);
    pinMode(GPIO4, OUTPUT);
    pinMode(GPIO23, OUTPUT);
    pinMode(GPIO14, INPUT);
  }
 
  void loop()
  {
    // Efect FADE-IN GPIO18
    for(brightness=0; brightness < 256; brightness++)
    {
      analogWrite(GPIO18, brightness);
      delay(7);
    }  
    // Efect FADE_OUT GPIO18
    for(brightness=255; brightness >=0; brightness--)
    {
      analogWrite(GPIO18, brightness);
      delay(7);
    }
   
    // Efect FADE-IN GPIO4
    for(brightness=0; brightness < 256; brightness++)
    {
      analogWrite(GPIO4, brightness);
      delay(7);
    }  
    // Efect FADE_OUT GPIO4
    for(brightness=255; brightness >=0; brightness--)
    {
      analogWrite(GPIO4, brightness);
      delay(7);
    }
   
    // Efect FADE-IN GPIO23
    for(brightness=0; brightness < 256; brightness++)
    {
      analogWrite(GPIO23, brightness);
      delay(7);
    }  
    // Efect FADE_OUT GPIO23
    for(brightness=255; brightness >=0; brightness--)
    {
      analogWrite(GPIO23, brightness);
      delay(7);
    }
   
    delay(1000);
  }
