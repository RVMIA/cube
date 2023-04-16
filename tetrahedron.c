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
  float p3x = 0;
  float p3y = 10;
  float p3z = -10;
  
  i = p3x;
  j = p3y;
  k = p3z;

  p3.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p3.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p3.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
 
 
  struct Point p4;
  float p4x = 0;
  float p4y = 0;
  float p4z = 10;
  
  i = p4x;
  j = p4y;
  k = p4z;

  p4.x = round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
  p4.y = round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
  p4.z = round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));

  printf("\x1b[2J"); 
  A += 0.005;
  B += 0.005;
  C += 0.005;
  
  lerp(p1, p2);
  lerp(p2, p3);
  lerp(p3, p1);

  lerp(p1, p4);
  lerp(p2, p4);
  lerp(p3, p4);

  fflush(stdout);
  usleep(2000);
  }
}
