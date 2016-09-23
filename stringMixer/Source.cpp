#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void mixer(char[], char[]);

int main()
{
	char word1[] = {"Hello"};
	char word2[] = {"world"};

	mixer(word1,word2);

	getchar();

	return 0;
}

void mixer(char word1[], char word2[])
{

	if (word1 == NULL && word2 == NULL)
	{
		cout << "Nothing to mix.";
	}

	else if (word1 == NULL || word2 == NULL)
	{
		cout << "2 words needed.";
	}

	else
	{
		int i= 0;
		int j = 0;
		int k = 0;

		int totallength = 1;

		while (word1[i] != NULL)
		{
			i++;
			totallength++;
		}

		i = 0;
		while (word2[i] != NULL)
		{
			i++;
			totallength++;
		}

		char word3[100];

		i = 0;
		
		while (i < totallength)
		{
			if (j == k)
			{
				word3[i] = word1[j];
				i++;
				j++;
			}
			else if (j > k)
			{
				word3[i] = word2[k];
				i++;
				k++;
			}
		}

		word3[i] = NULL;

		cout << word1 << " mixed with " << word2 << " = " << word3;

	}

}


