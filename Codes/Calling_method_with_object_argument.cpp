#include <iostream>

using namespace std;
	
class Move
{
	private:
		double x;
		double y;
	public:
		Move(double a = 0, double b = 0){
			x = a; y = b;
		}
		// sets x, y to a, b
		void showmove() const{
			cout << "x: " << x << endl;
			cout << "y: " << y << endl;
		};
		// shows current x, y values
		Move add(const Move & m) const{
			double x = this->x + m.x;
			double y = this->y + m.y;
			Move newMove = Move(x, y);
			return newMove; 
		};
		// this function adds x of m to x of invoking object to get new x,
		// adds y of m to y of invoking object to get new y, creates a new
		// move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0){
		x = a;
		y = b;

	} // resets x,y to a, b
};


int main(void){

	Move moveObject1(5, 4);
	moveObject1.showmove();
	Move moveObject2 = Move(10, 30);
	Move moveObject3 = moveObject2.add(moveObject1);
	moveObject3.showmove();
	moveObject3.reset();
	moveObject3.showmove();

	return 0;
}