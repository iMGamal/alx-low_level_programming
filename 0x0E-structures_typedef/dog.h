#ifndef _DOG_H
#define _DOG_H

/**
 * main - define new type struct dog
 * name, type = char *
 * age, type = float
 * owner, type = char *
 * Return: Always (0).
 */

#endif

struct dog
{
	char *name;
	float age;
	char *owner;
};

int main(void)
{
	struct dog my_dog;
	my_dog.name ="Zack";
	my_dog.age ="3";
	my_dog.owner ="Mace";

	return (0);
}
