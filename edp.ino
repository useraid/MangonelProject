void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 digitalWrite(10,LOW);
 digitalWrite(10,HIGH);
 unsigned int a = pulseIn(13,HIGH,180000000);
 Serial.printIn(a)
    int b=a/100
    int c=(b%10);
    int d=a/1000;
    int e=d/10;
    int f=d%10;
    int i=c%2;
    int j=(c/2)%2;
    int k=(c/4)%2;
    int l=(c/8)%2;
    digitalWrite(2, i);
    digitalWrite(3, j);
    digitalWrite(4, k);
    digitalWrite(5, l);
    digitalWrite(6, HIGH);
    digitalWrite(6, LOW);
    int m=f%2;
    int n=(f/2)%2;
    int o=(f/4)%2;
    int p=(f/8)%2;
    digitalWrite(2,m);
    digitalWrite(3, n);
    digitalWrite(4,o );
    digitalWrite(5,p );
    digitalWrite(8, LOW);
    digitalWrite(8, HIGH);
   int q=e%2;
    int r=(e/2)%2;
    int s=(e/4)%2;
    int t=(e/8)%2;
    digitalWrite(2,q);
    digitalWrite(3,r);
    digitalWrite(4,s);
    digitalWrite(5,t);
    digitalWrite(7, LOW);
    digitalWrite(7, HIGH);
    delay(3000);
  }
}
