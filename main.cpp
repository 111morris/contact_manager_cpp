#inlcude<iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection{
  STOP = 0,
  LEFT,
  RIGHT, 
  UP, 
  DOWN
};

eDirection dir;

void Setup(){
  gameOver= false;
  dir = STOP;
  x=width/2;
  y=height/2;
  fruitX = rand() % width;
  fruitY = rand() % height;
  score = 0;
};

void clearScreen() {
  #ifdef _WIN32
  system("cls"); // this is for windows
#else 
system("clear"); // this is for linux
#endif
 }
void Draw() {
  //first we clear the screan
  clearScreen();
}
void Input() {
}
void Logic() {

}
void main() {
  Setup();
  while(!gameOver) {
    Draw();
    Input();
    Logic();

  }
  return(0);
}
