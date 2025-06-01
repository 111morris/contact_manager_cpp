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
}

void Setup(){
  gameOver= false;
}
void Draw() {
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
