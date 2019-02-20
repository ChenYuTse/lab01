//pin 9 has an LED connected on most Arduino boards.
//give it a name.
int led=9;

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(300);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(300);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(300);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(100);
  digitalWrite(led, HIGH);    
  delay(100);                       
  digitalWrite(led, LOW);   
  delay(300);
}       
