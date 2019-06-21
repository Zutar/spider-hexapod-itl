// http://www.bajdi.com
// Sketch to sweep one servo with a Torobot 32 channel servo controller
// Servo controller is connected to the serial pins (0 and 1)

void setup(){
  Serial.begin(115200);
  move(9, 2400, 1000);
  move(9, 100, 1000);
  //#1P1300#2P1440#3P1440#4P1440#5P1480#6P1440#7P1440#12P1440#13P1830#14P1440#15P1440#16P1440#17P1625#18P1440#19P1440#24P1440#25P1415#26P1440#27P1390#28P1440#29P1490#30P790#31P1990T50D0
  //Serial.println("#1P1300#2P1440#3P1440#4P1440#5P1480#6P1440#7P1440#12P1440#13P1830#14P1440#15P1440#16P1440#17P1625#18P1440#19P1440#24P1440#25P1415#26P1440#27P1390#28P1440#29P1490#30P790#31P1990T50D0");
}

void loop() {

}

void move(int servo, int position, int time) {
  Serial.print("#");
  Serial.print(servo);
  Serial.print("P");
  Serial.print(position);
  Serial.print("T");
  Serial.println(time);
  delay(time);
}
