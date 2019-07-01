void Measures() {
  height = maxTopCapacity - topDistance;
  Serial.print("height : ");
  Serial.println(height);
  width = maxSideCapacity - sideDistance;
  radius = width;
  a = height;
}

int findShape(double a, double b) {
//  //shape finding algorithm.
//  double diff = 0;
//  if(a>b) {
//    diff = a-b;
//  } else {
//    diff = b-a;
//  }
//
//  if(diff>=0 || diff<=errorRate) {
//    return "cube";
//  } else {
//    return "cylinder";
//  }

  if(height>16) {
    return 1;
  } else {
    return 0;
  }
}

