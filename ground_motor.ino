#define enA 3
#define in1 6
#define in2 5
#define enB 9
#define in3 11
#define in4 10

void leftBackward(int v){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, v);
}

void leftForward(int v){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, v);
}

void rightForward(int v){
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, v);
}

void rightBackward(int v){
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, v);
}

void stop_(){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void rightTurn(int leftV, int rightV){
  leftForward(leftV);
  rightBackward(rightV);
}

void leftTurn(int leftV, int rightV){
  leftBackward(leftV);
  rightForward(rightV);

}

void forward(int v){
  leftForward(v);
  rightForward(v);
}

void backward(int v){
  leftBackward(v);
  rightBackward(v);
}

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  //digitalWrite(in1, LOW);
  //digitalWrite(in2, HIGH);
  analogWrite(enA, 155);
  //digitalWrite(in3, LOW);
  //digitalWrite(in4, HIGH);
  analogWrite(enB, 155);
//  
}

void loop() {
  // put your main code here, to run repeatedly:
  //left turn; left backward, right forward
  forward(80);
  delay(5000);
  backward(80);
  delay(5000);

}
