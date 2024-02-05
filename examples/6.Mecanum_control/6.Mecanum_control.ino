#define w1 255
#define w2 245
#define w3 50
#define w4 70


void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); // 좌측 앞바퀴 wh1

  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); // 우측 앞바퀴 wh2

  pinMode(3, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT); // 좌측 뒷바퀴 wh3
  
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT); // 우측 뒷바퀴 wh4 // 모터 하나당 PWM pin 하나, 5V pin 둘, // 3, 5, 6, 9번 pin이 PWM
}

void North(int wh1, int wh2, int wh3, int wh4){ // 모든 모터 정방향 구동, 전진
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
}

void South(int wh1, int wh2, int wh3, int wh4){ // 모든 모터 역방향 구동, 후진
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
}

void East(int wh1, int wh2, int wh3, int wh4){ // 좌측 앞바퀴, 우측 뒷바퀴 정방향, 우측 앞바퀴, 좌측 뒷바퀴 역방향
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
}

void West(int wh1, int wh2, int wh3, int wh4){ // 좌측 앞바퀴, 우측 뒷바퀴 역방향, 우측 앞바퀴, 좌측 뒷바퀴 정방향
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
}

void NorthWest(int wh1, int wh2, int wh3, int wh4){ // 우측 앞바퀴, 좌측 뒷바퀴 구동, 북서쪽
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
}

void SouthEast(int wh1, int wh2, int wh3, int wh4){ // 우측 앞바퀴, 좌측 뒷바퀴 역방향 구동, 남동쪽 
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
}

void NorthEast(int wh1, int wh2, int wh3, int wh4){ // 좌측 앞바퀴, 우측 뒷바퀴 구동, 북동쪽
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
}

void SouthWest(int wh1, int wh2, int wh3, int wh4){ // 좌측 앞바퀴, 우측 뒷바퀴 역방향 구동, 남서쪽
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
}

void Stop(int wh1, int wh2, int wh3, int wh4){ // Stop
  
  analogWrite(6, wh1);  // PWM 6, IN1 7, IN2 8
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  analogWrite(9, wh2);  // PWM 9, IN1 12, IN2 13
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  analogWrite(3, wh3);  // PWM 3, IN1 0, IN2 1
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);

  analogWrite(5, wh4);  // PWM 5, IN1 2, IN2 4
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  Stop(w1, w2, w3, w4);
  delay(1000);
}