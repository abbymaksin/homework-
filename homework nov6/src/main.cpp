/*
Write a function that takes an integer N and a String A as inputs and returns string A concatenated with itself N times as output.

Example:

N=4 and A="Cat"

Output = "CatCatCatCat"

 

Submit your work by upushing it to github

Make sure your github account is in the spreadsheet*/
#include <Arduino.h>

// put function declarations here:
String myFunction(int, String);

void setup() {
  // put your setup code here, to run once:
  String result = myFunction(4, "Cat");
  Serial.begin(9600);
  Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
String myFunction(int N, String A) {
  return A;
}