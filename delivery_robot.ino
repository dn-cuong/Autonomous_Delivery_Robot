#define tien 10

#define trai 6
#define Leftss 2
#define Midss 3
#define Rightss 4
#define phai 7

void setup() {
  // put your setup code here, to run once:
  pinMode(tien, OUTPUT);
  pinMode(trai, OUTPUT);
  pinMode(phai, OUTPUT);
  pinMode(Leftss, INPUT);
  pinMode(Rightss, INPUT);
  pinMode(Midss, INPUT);
}

void loop() {
//   put your main code here, to run repeatedly:

  int right = digitalRead(Rightss);
  int left = digitalRead(Leftss);
  int mid = digitalRead(Midss);


  if (right == LOW && left == LOW && mid == HIGH) {
      digitalWrite(tien, HIGH);
      delay(500);
      digitalWrite(phai, LOW);
      digitalWrite(trai, LOW);
    }
  else if ( left == HIGH) {
    digitalWrite(trai, HIGH);
    digitalWrite(phai, LOW);
    digitalWrite(tien, LOW);
    delay(400);
  }
  else if (right == HIGH) {
    digitalWrite(phai, HIGH);
    digitalWrite(trai, LOW);
    digitalWrite(tien, LOW);
    delay(400);
  }
  else { 
    digitalWrite(tien, LOW);
    delay(1000);
    }
//  digitalWrite(tien, HIGH);
//  delay(2000);
//  digitalWrite(tien, LOW);
//  delay(1000);
//  digitalWrite(phai, HIGH);
//  delay(1000);
//  digitalWrite(phai, LOW);
//  delay(5000);
//  digitalWrite(trai, HIGH);
//  delay(1000);
//  digitalWrite(trai, LOW);
//  delay(5000);


  

  
}
