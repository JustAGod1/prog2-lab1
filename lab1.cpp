#include "header.hpp"
#include <cstdio>
void swap_test() {
	printf("\u001b[36m\u001b[1mTesting swap...\u001b[0m\n");
	{
		printf("\u001b[38;5;243mTesting swap via pointers...\u001b[0m\n");
		string a = "First";
		string b = "Second";
		
		printf("Before\na: %s\nb: %s\n\n", a.c_str(), b.c_str());
		swap_ptr(&a, &b);
		printf("After\na: %s\nb: %s\n\n", a.c_str(), b.c_str());
	}
	{
		printf("\u001b[38;5;243mTesting swap via references...\u001b[0m\n");
		string a = "First";
		string b = "Second";
		
		printf("Before\na: %s\nb: %s\n\n", a.c_str(), b.c_str());
		swap_ref(a, b);
		printf("After\na: %s\nb: %s\n\n", a.c_str(), b.c_str());
	}

}

void round_down_test() {
	printf("\u001b[36m\u001b[1mTesting rounding down...\u001b[0m\n");
	{
		printf("\u001b[38;5;243mTesting round down via pointers...\u001b[0m\n");
		float value = 45.89;
		printf("Before: %f\n", value);
		round_down_ptr(&value);
		printf("After: %f\n\n", value);
	}
	{
		printf("\u001b[38;5;243mTesting round down via references...\u001b[0m\n");
		float value = 87.34;
		printf("Before: %f\n", value);
		round_down_ref(value);
		printf("After: %f\n\n", value);

	}


}

void complex_number_test() {
	printf("\u001b[36m\u001b[1mTesting complex numbers...\u001b[0m\n");
	{
		printf("\u001b[38;5;243mTesting working with complex numbers via pointers...\u001b[0m\n");
		ComplexNumber number;
		number.real = 56;
		number.imiginary = 24;
		printf("Before: %f + %f * i\n", number.real, number.imiginary);
		multiply_complex_ptr(&number, 56);
		printf("After: %f + %f * i\n\n", number.real, number.imiginary);

	}
 	{
		printf("\u001b[38;5;243mTesting working with complex numbers via references...\u001b[0m\n");
		ComplexNumber number;
		number.real = 98;
		number.imiginary = 3;
		printf("Before: %f + %f * i\n", number.real, number.imiginary);
		multiply_complex_ref(number, 56);
		printf("After: %f + %f * i\n\n", number.real, number.imiginary);

	}
}

void circle_test() {
	printf("\u001b[36m\u001b[1mTesting circles...\u001b[0m\n");
	{
		printf("\u001b[38;5;243mTesting working with circles via pointers...\u001b[0m\n");
		Circle circle;
		circle.radius = 8;
		circle.position.x = 9;
		circle.position.y = 4;
		circle.position.z = 8;
		
		Vec offset;
		offset.x = 7;
		offset.y = 4;
		offset.z = 2;
		
		printf("Before: (x: %f; y: %f; z: %f)[radius: %f]\n", circle.position.x, circle.position.y, circle.position.z, circle.radius);
		move_circle_ptr(&circle, offset);
		printf("After: (x: %f; y: %f; z: %f)[radius: %f]\n\n", circle.position.x, circle.position.y, circle.position.z, circle.radius);

	}
	{
		printf("\u001b[38;5;243mTesting working with circles via references...\u001b[0m\n");
		Circle circle;
		circle.radius = 8;
		circle.position.x = 9;
		circle.position.y = 4;
		circle.position.z = 8;
		
		Vec offset;
		offset.x = 7;
		offset.y = 4;
		offset.z = 2;
		
		printf("Before: (x: %f; y: %f; z: %f)[radius: %f]\n", circle.position.x, circle.position.y, circle.position.z, circle.radius);
		move_circle_ref(circle, offset);
		printf("After: (x: %f; y: %f; z: %f)[radius: %f]\n\n", circle.position.x, circle.position.y, circle.position.z, circle.radius);


	}

}

int main() {
	swap_test();
	round_down_test();
	complex_number_test();
	circle_test();
}
