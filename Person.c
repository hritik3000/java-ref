#include <stdio.h>

typedef struct Person Person;

struct Person
{
	char* name;
	int age;
	float height;
	float weight;
};

void printDetails(Person);
void introduce(Person);
float calculateBMI(Person);
void update(Person*);

void main()
{
	Person me = {"Chirag", 21, 180.0, 67.5};
	introduce(me);
	for(int i = 0; i <= 3; i++)
	{
		printf("\n>>>> Fast forwarding %d years >>>>\n",i);
		printDetails(me);
		printf("my Current BMI is %.2f\n", calculateBMI(me));
		update(&me);  // sending address of variable (call by reference)
	}
}

void introduce(Person x)
{
	printf("Hello There! my name is %s, and here are my details.\n", x.name);
}

void printDetails(Person x)
{
	printf("NAME   : %s\n", x.name );
	printf("AGE    : %d years\n", x.age);
	printf("HEIGHT : %.2f cm\n", x.height);
	printf("WEIGTH : %.2f kg\n", x.weight);
}

float calculateBMI(Person x)
{
	return (x.weight/x.height);
}

void update(Person* x)  // recieving memory address 
{
	x->age += 1;
	x->weight *= 1.2;  // referring to the object variable
	x->height *= 1.01;
}