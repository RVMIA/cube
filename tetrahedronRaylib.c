#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <raylib.h>
#define FPS 144

struct Point {
  float x, y, z;
};

float calculateX(int i, int j, int k, float A, float B, float C){
  return round(j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C));
}

float calculateY(int i, int j, int k, float A, float B, float C){
  return round(j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C));
}

float calculateZ(int i, int j, int k, float A, float B, float C){
  return round(k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B));
}

void main(){
  float A, B, C;
  InitWindow(1000, 1000, "Cube");
  SetTargetFPS(FPS);
  while (!WindowShouldClose()){
  
    struct Point p1;
    int p1x = 100;
    int p1y = 100;
    int p1z = 100;
    p1.x = calculateX(p1x, p1y, p1z, A, B, C);
    p1.y = calculateY(p1x, p1y, p1z, A, B, C); 
    p1.z = calculateZ(p1x, p1y, p1z, A, B, C);
    
    struct Point p2;
    int p2x = 200;
    int p2y = 100;
    int p2z = 100;
    p2.x = calculateX(p2x, p2y, p2z, A, B, C);
    p2.y = calculateY(p2x, p2y, p2z, A, B, C); 
    p2.z = calculateZ(p2x, p2y, p2z, A, B, C);
    
    struct Point p3;
    float p3x = 150;
    float p3y = 200;
    float p3z = 100;
    p3.x = calculateX(p3x, p3y, p3z, A, B, C);
    p3.y = calculateY(p3x, p3y, p3z, A, B, C); 
    p3.z = calculateZ(p3x, p3y, p3z, A, B, C);
    
    struct Point p4;
    float p4x = 150;
    float p4y = 150;
    float p4z = 200;
    p4.x = calculateX(p4x, p4y, p4z, A, B, C);
    p4.y = calculateY(p4x, p4y, p4z, A, B, C); 
    p4.z = calculateZ(p4x, p4y, p4z, A, B, C);
    
    A += 0.0002;
    B += 0.0044;
    C += 0.00666;
    
    BeginDrawing();
    ClearBackground(BLACK);
    DrawLine(p1.x+500, p1.y+500, p2.x+500, p2.y+500, RAYWHITE);
    DrawLine(p2.x+500, p2.y+500, p3.x+500, p3.y+500, RAYWHITE);
    DrawLine(p1.x+500, p1.y+500, p3.x+500, p3.y+500, RAYWHITE);
    
    DrawLine(p1.x+500, p1.y+500, p4.x+500, p4.y+500, RAYWHITE);  
    DrawLine(p2.x+500, p2.y+500, p4.x+500, p4.y+500, RAYWHITE);
    DrawLine(p3.x+500, p3.y+500, p4.x+500, p4.y+500, RAYWHITE);

    EndDrawing();
  }
  CloseWindow();
}
