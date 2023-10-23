#include <stdio.h>


struct employee
{
	char name[15];
	int ID;
};
int main()
{
	struct employee ahmed = {"Ahmed", 250};
	struct employee ali = {"Ali", 300};
	struct employee hamza = {"Hamza", 300};
	
	struct employee (*arrOfPtr[]) = {&ahmed, &ali, &hamza};

	struct employee* (*ptr)[3] = &arrOfPtr;

	for(int i = 0 ; i < 3; i++)
	{
		printf("%s\n", (**(*ptr+i)).name);
		printf("%d\n", (**(*ptr+i)).ID);
	}		

	return 0;
}