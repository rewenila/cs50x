#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
	FILE *file = fopen("phonebook.csv", "a"); // r - reading, w - writing, a - append
    if (file == NULL)
    {
        return 1;
    }

    // Get name and number
	char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to file
	fprintf(file, "%s,%s\n", name, number);

    // Close file
	fclose(file);
}
