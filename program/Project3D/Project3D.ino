#include <LiquidCrystal.h> //Lib file for display
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


//Pin Diclarations
int S2TrigPin = 10; //
int S2EchoPin = 13; //
int S1TrigPin = 8; //
int S1EchoPin = 9; //


//Initial values diclarations
int maxTopCapacity = 28;
int maxSideCapacity = 20;
int errorRate = 2; // x means 10-x upto 10+x 

//Program Variables
int topDistance = 0;
int sideDistance = 0;
double height = 0;
double width = 0;
double radius = 0;
int a;
int shape;
double volume = 0;

void setup() {
  lcd.begin(16, 2); // set up the LCD's number of columns and rows:
  Serial.begin(9600); // Ulrasonic sensors
  pinMode(S1TrigPin,OUTPUT);
  pinMode(S1EchoPin,INPUT);
  pinMode(S2TrigPin,OUTPUT);
  pinMode(S2EchoPin,INPUT);
}

void loop() {
  lcd.clear();
  lcd.print("Project3D Beta");
//  S1Distance();//4 Checking
//  S2Distance();
//  DispData();

  //Programs starts if the proxnmty snsr is active
  //if(sensrActive){
    // Measure the distances, Top & side
    S1Distance(); //top sensor
    S2Distance(); //side sensor
    Measures(); // Calc measrmts
    // Call a function that predict the object shape and return (Cube or Cylender)
    shape = findShape(height,width);
    // if(Objct is Cube) {v=a*a*a and Display}
    if(shape==0) {
      dispCube();
      volume = a*a*a;
      Serial.println("Cube");
    } else if(shape==1){
      dispCylnr();
      volume = 3.142857142*radius*radius*height;
      Serial.println("Cylinder");
    } else {
      dispNon();
    }
    // else {Display v=3.14*r*h and Display}
  //}
  //else {stop and Display Insert Object}

//  DisplayS1(String(topDistance));
//  DisplayS2(String(sideDistance)); //
  Display(); //Display All
  delay(300); // For correcting display 
}
