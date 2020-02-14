#include <string>
using namespace std;

struct ComplexNumber {
	float real, imiginary;
};
struct Vec {
	float x, y, z;
};
struct Circle {
	Vec position;
	float radius;
};

void swap_ref(string &a, string &b);
void swap_ptr(string *a, string *b);

void round_down_ref(float &v);
void round_down_ptr(float *v);

void multiply_complex_ref(ComplexNumber &number, float operand);
void multiply_complex_ptr(ComplexNumber *number, float operand);

void move_circle_ref(Circle &circle, Vec &operand);
void move_circle_ptr(Circle *circle, Vec &operand);

