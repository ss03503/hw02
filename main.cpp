#include <cstdlib>
#include <ctime>

#include <iostream>

//Structure to keep track of various locations
struct Point
{
  int x;
  int y;

  Point(int _x, int _y): x(_x), y(_y)
  {

  }
};

//Structure for the Player object
struct Player
{
  int food;
  int health;
  bool alive;
  int x;
  int y;

  Player() : food(64), health(10), alive(true)
  {}
  void loseHealth()
  {
    if(health>0)
      health--;
    if(health==0)
      alive = false;
  }
  void gainHealth()
  {
    if(health<10)
      health++;
  }
};

typedef const int cint;         //Google typedef to see what this means
typedef const Point cPoint;

char* create_dungeon(int, int, Point&, Point&);      //Creates the dungeon
void traversal(char*, Point&, cPoint&, cint, cint); //Used for moving inside dungeon
void combat(Player&, int);  //Used for simulating combat
void trap_statements();  //3 statements that show at random when the player activates a trap
void food_statements();  //3 statements that show at random when the player finds food
void hit_statements();   //3 statements that show at random when the player hits enemy
void get_hit_statements();//3 statements that show at random when the player gets hit

int main ()
{
  srand(time(0));

  int width = 0;
  int height = 0;

  /*
   *   ADD YOUR CODE HERE IF REQUIRED
   */

  Point start_point(0,0);
  Point exit_point(0,0);

  char* dungeon = nullptr;

  dungeon = create_dungeon(dungeon, width, height, start_point, exit_point);

  traversal(dungeon, startPoint, exit_point, width, height);

  /*
   *   ADD YOUR CODE HERE IF REQUIRED
   */

  return 0;
}

void trap_statements()
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED
   */
}

void food_statements()
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED
   */
}

void hit_statements()
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED
   */
}

void get_hit_statements()
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED
   */
}

void traversal(char* dungeon, Point& start_point, cPoint& exit_point,
	       cint width, cint height)
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED. DEFINE NEW FUNCTIONS IF IT GETS LONG.
   */

}

void combat(Player& player, int enemies)
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED
   */
}

char* create_dungeon(int width, int height,
		     Point& ref_startPoint, Point& ref_exitPoint)
{
  /*
   *   ADD YOUR CODE HERE AS REQUIRED. DEFINE NEW FUNCTIONS IF IT GETS LONG.
   */
}
