#include <stdio.h>
#include <stdlib.h>


struct People{
    int age;
    char* name;
};

int main()
{
	int *impInput = malloc(sizeof(int)*100);
	int i, *i_ptr;
    float j, *j_ptr;
    j_ptr = &j;
    i_ptr = &i;
    struct People *localPeople_ptr = malloc(sizeof(struct People));
    
	for (i = 0; i < 0xff; i++) {
        localPeople_ptr->age = 10;
        impInput[i/100] = 6;
        *j_ptr = i+1;
        j = i + 'c' + 0.1234;
        *i_ptr = i;

	}

	return 0;
}
