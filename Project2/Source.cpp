#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	char *pTmp = NULL;//將多餘的變數存於此
	
	char *field;
	//char sentence[100] = { '0' };
	int len;
	
	char sentence[] = "$GNRMC,074300.00,A,2503.52939,N,12138.07408,E,0.041,,010622,,,A*6E";
	//char sentence[] = "$GNVTG,,T,,M,0.041,N,0.076,K,A*39";
	//charsentence[] = "$GNGGA,074300.00,2503.52939,N,12138.07408,E,1,09,3.04,29.5,M,17.2,M,,*74";
	//gets_s(sentence, 100);
	for (len = 0; len < 100; len++)
	{
		if (sentence[len] == '\0')
			break;
	}
	printf("%d\n", len);
	
	
		
	field = strtok_s(sentence, ",", &pTmp);

	while (field != NULL) {
		
		printf("%s\n", field);
		
		field = strtok_s(NULL, ",", &pTmp);
		
	}
	return 0;
}