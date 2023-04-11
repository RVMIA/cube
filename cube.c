#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

double pi = M_PI;
  
float A = 0;
float B = 0;
float C = 0;

struct Point {
  float x, y, z;
};

void lerp(struct Point a, struct Point b){
  int xdiff = abs(a.x - b.x);
  int ydiff = abs(a.y - b.y);
  int diff;
  if (xdiff >= ydiff) {
    diff = xdiff;
  } else {
    diff = ydiff;
  }
  for (float i = 0; i <= diff; i++){
    struct Point res;
    res.x = (int)trunc(round(a.x + (b.x - a.x) * i/diff));
    res.y = (int)trunc(round(a.y + (b.y - a.y) * i/diff));
    //printf("%d\t%d\n", res.x, res.y);
    printf("\x1b[%d;%dH", 20 + (int)res.y, 72 + (int)res.x);
    printf("█");
  }
}

float calculateX(float i, float j, float k) {
  return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
  return j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
  return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}

void main(){
  
  double pi = M_PI;
  float theta = 0;
   
  float A = theta;
  float B = theta;
  float C = theta;
  
  while (1) {
  
  struct Point p1;
  int p1x = -10;
  int p1y = -10;
  int p1z = -10;
  
  float i = p1x;
  float j = p1y;
  float k = p1z;

  p1.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p1.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p1.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
  
  struct Point p2;
  int p2x = 10;
  int p2y = -10;
  int p2z = -10;
  
  i = p2x;
  j = p2y;
  k = p2z;

  p2.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p2.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p2.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p3;
  float p3x = -10;
  float p3y = 10;
  float p3z = -10;
  
  i = p3x;
  j = p3y;
  k = p3z;

  p3.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p3.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p3.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p4;
  float p4x = 10;
  float p4y = 10;
  float p4z = -10;
  
  i = p4x;
  j = p4y;
  k = p4z;

  p4.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p4.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p4.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p5;
  float p5x = -10;
  float p5y = -10;
  float p5z = 10;
  
  i = p5x;
  j = p5y;
  k = p5z;

  p5.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p5.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p5.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p6;
  float p6x = 10;
  float p6y = -10;
  float p6z = 10;
  
  i = p6x;
  j = p6y;
  k = p6z;

  p6.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p6.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p6.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p7;
  float p7x = -10;
  float p7y = 10;
  float p7z = 10; 
  
  i = p7x;
  j = p7y;
  k = p7z;

  p7.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p7.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p7.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p8;
  float p8x = 10;
  float p8y = 10;
  float p8z = 10;
  
  i = p8x;
  j = p8y;
  k = p8z;

  p8.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p8.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p8.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 

  printf("\x1b[2J"); 
  A += 0.0075;
  B += 0.005;
  C += 0.0025;
  
  lerp(p1, p2);
  lerp(p3, p4);
  lerp(p1, p3);
  lerp(p2, p4);

  lerp(p5, p6);
  lerp(p7, p8);
  lerp(p5, p7);
  lerp(p6, p8);

  lerp(p1, p5);
  lerp(p2, p6);
  lerp(p3, p7);
  lerp(p4, p8);
  /*printf("%f\t%f\t%f\n", p1.x, p1.y, p1.z);
  printf("%f\t%f\t%f\n", p2.x, p2.y, p2.z);
  printf("%f\t%f\t%f\n", p3.x, p3.y, p3.z);
  printf("%f\t%f\t%f\n", p4.x, p4.y, p4.z);
  printf("%f\t%f\t%f\n", p5.x, p5.y, p5.z);
  printf("%f\t%f\t%f\n", p6.x, p6.y, p6.z);
  printf("%f\t%f\t%f\n", p7.x, p7.y, p7.z);
  printf("%f\t%f\t%f\n", p8.x, p8.y, p8.z);*/
  fflush(stdout);
  usleep(2000);
  }
}
