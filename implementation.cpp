#include "header.hpp"

void swap_ref(string &a, string &b) {
	string tmp = a;
	a = b;
	b = tmp;
}

void swap_ptr(string *a, string *b) {
	string tmp = *a;
	*a = *b;
	*b = tmp;
}

void round_down_ref(float &v) {
	v = (float)(int)v;
}

void round_down_ptr(float *v) {
	*v = (float)(int)*v;
}

void multiply_complex_ref(ComplexNumber &number, float operand) {
	number.real *= operand;
	number.imiginary *= operand;
}
void multiply_complex_ptr(ComplexNumber *number, float operand) {
	number->real *= operand;
	number->imiginary *= operand;
}
void move_circle_ref(Circle &circle, Vec &operand) {
	circle.position.x += operand.x;
	circle.position.y += operand.y;
	circle.position.z += operand.z;
}
void move_circle_ptr(Circle *circle, Vec &operand) {
	circle->position.x += operand.x;
	circle->position.y += operand.y;
	circle->position.z += operand.z;
}

