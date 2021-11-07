
#define cbi(sfr, bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
#define sbi(sfr, bit) (_SFR_BYTE(sfr) |= ~_BV(bit))

void setup()
{
  pinMode(11,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  
  digitalWrite(11, 1);
  
  
 
 cbi(ADCSRA, ADPS1);
 cbi(ADCSRA, ADPS0);
  
}
long ls=0, c=0, lx=0;
float x=0, y=0;
boolean flag = false;
void loop()
{
  for(;;)
  {
    
    x = analogRead(A2);
    
    if((lx-x)>10)
    alarm();

    lx=x;
    
  }
  
  
}

void alarm()
{
  for(int j=0;j<10;j++)
  {
   for(int i=3790;i<=4000;i++,delay(2))
   {
    tone(3, i, 500);
    if(i%70==0)
    digitalWrite(4, flag=!flag);
   }

   for(int i=4000;i>=3790;i--,delay(2))
   {
    tone(3, i, 500);
    if(i%70==0)
    digitalWrite(4, flag=!flag);
   }
  }
}

