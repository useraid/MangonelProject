const int trigPin = 11;
const int echoPin = 12;

long duration;
int distance;
void setup() {

    pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);//reset pin
  pinMode(13,INPUT); 
  Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  Serial.print("Distance: ");
   digitalWrite(10,HIGH);
 digitalWrite(10,LOW);

 unsigned int a = distance;
 Serial.println(a);
  int b=a/100;
  int c=b%10;
  int d=a/1000;
  int e=d/10;
  int f=d%10;

  int i=c%2;
  int j=(c/2)%2;
  int k=(c/4)%2;
  int l=(c/8)%2;
    
  digitalWrite(2,i);
   digitalWrite(3,j);
    digitalWrite(4,k);
     digitalWrite(5,l);
      digitalWrite(6,HIGH);
      digitalWrite(6,LOW );
     int m=f%2;
  int n=(f/2)%2;
  int o=(f/4)%2;
  int p=(f/8)%2;
  
   digitalWrite(2,m);
    digitalWrite(3,n);
     digitalWrite(4,o);
      digitalWrite(5,p);
       digitalWrite(8,HIGH);
        digitalWrite(8,LOW);
     int q=e%2;
  int r=(e/2)%2;
  int s=(e/4)%2;
  int t=(e/8)%2;
  
   digitalWrite(2,q);
    digitalWrite(3,r);
     digitalWrite(4,s);
      digitalWrite(5,t);
       digitalWrite(9,HIGH);
        digitalWrite(9,LOW);
