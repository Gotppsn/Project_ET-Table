int motor1 = 2;  
int motor2 = 4;
int motor3 = 5;
int motor4 = 6;

int buttonPin = 3;  
int buttonStart;  
int Menu = 0;
int lastinput=HIGH;

void setup(){
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  
  pinMode(buttonPin, INPUT) ;
  Serial.begin(9600);
}
void loop()

{
  buttonStart = digitalRead(buttonPin);
  if (buttonStart == lastinput)
{
  delay (300);
  Menu++;
  if (Menu>2)
  Serial.print(Menu);

  
if (Menu==1)
{
  Serial.println("Motor Left");
   
  digitalWrite(motor1,LOW);
  digitalWrite(motor1, HIGH);
  delay (4000);
  digitalWrite(motor1,LOW);
  
  digitalWrite(motor3,LOW);
  digitalWrite(motor3, HIGH);
  delay (5000);
  digitalWrite(motor3,LOW);
  lastinput=LOW;
} 

else if(Menu==2)
{
  Serial.println("Motor Right");
  
  digitalWrite(motor4,LOW);
  digitalWrite(motor4, HIGH);
  delay (5000);
  digitalWrite(motor4,LOW);
  
  digitalWrite(motor2,LOW);
  digitalWrite(motor2, HIGH);
  delay (4000);
  
  digitalWrite(motor2,LOW);
  lastinput=HIGH;
  Menu=0;
}
}
}  
  digitalWrite(motor2,LOW);
  Menu=0;
