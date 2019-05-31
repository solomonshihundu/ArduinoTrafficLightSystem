
/*
 * The UK base traffic light system 
 * @Auther SolomonShihundu.
 */

/*
 * assisignment of led pins
 */
int redLed = 6;
int yellowLed = 9;
int greenLed = 10;
/*
 * global variables
 */
 int count = 0;
 int vehiclesTime = 5000;
 int crossTime = 5000;
 int waitTime = 2000;
 int blinkTime =1000;
 int c = 0;

void setup() {
  
 /*
  * pin initialization
  */
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);


}

void loop() {
  
  // put your main code here, to run repeatedly:
  sequence();
  count++;

/*
 * After 5 traffic light cycles are complete 
 * the umber light blinks for some time then
 * the sequnce starts again
 */
  if(count == 5)
  {
    while(c < 3)
    {
    digitalWrite(yellowLed,HIGH);
     delay(blinkTime);
    digitalWrite(yellowLed,LOW);
     delay(blinkTime);
     c++;
    }
    count = 0;
  }

}
void sequence()
{
          digitalWrite(redLed,HIGH);
          delay(vehiclesTime);
          digitalWrite(yellowLed,HIGH);  
          delay(waitTime);
          digitalWrite(redLed,LOW);
           digitalWrite(yellowLed,LOW);
          digitalWrite(greenLed,HIGH);
          delay(crossTime);
          digitalWrite(greenLed,LOW);
          digitalWrite(yellowLed,HIGH);
          delay(waitTime);
          digitalWrite(yellowLed,LOW);
    
}

