//void DispTest() {
//  // (note: line 1 is the second row, since counting begins with 0):
//  lcd.setCursor(0, 1);
//  // print the number of seconds since reset:
//  lcd.print(millis() / 1000);
//}
//void Display(String dist1,String dist2) {
//  lcd.clear(); // Clear all previous Displayed content
//  lcd.print("Hello,Harkians!");   // Print a message to the LCD
//  //
//  DisplayS1(dist1);
//  DisplayS2(dist2);
//  // print the number of seconds since reset:
//  lcd.print(millis() / 1000);
//  delay(200);
//}

void DisplayS1(String topDist) {
  lcd.setCursor(0, 1);
  lcd.print(topDist); // Print Top Distance
  lcd.setCursor(2,1);
  lcd.print("cm");
  delay(100);
 }
void DisplayS2(String sideDist) {
  lcd.setCursor(12, 1);
  lcd.print(sideDist); // Print Side Distance
  Serial.println(sideDist);
  lcd.setCursor(14,1);
  lcd.print("cm");
  delay(100);
 }
void DispData() {
  DisplayS1(String(sideDistance)); // Side
  DisplayS2(String(topDistance)); // Top
}

void Display() {
//  lcd.setCursor(0,0);
//  lcd.print("Project3D ");
//  lcd.setCursor(0,1);
//  lcd.print("Vol : ");
//  lcd.print(volume);
//  delay(200);

  lcd.setCursor(0,0);
  lcd.print("Vol : ");
  lcd.setCursor(6,0);
  lcd.print(volume);
  delay(200);
}

void dispCube() {
  lcd.setCursor(0,1);
  lcd.print("Cube");
  delay(200);
}
void dispCylnr() {
  lcd.setCursor(0,1);
  lcd.print("Cylinder");
  delay(200);
}
void dispNon() {
  lcd.setCursor(0,1);
  lcd.print("----------");
  delay(200);
}

