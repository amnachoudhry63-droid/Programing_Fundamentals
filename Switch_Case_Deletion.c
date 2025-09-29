#include <stdio.h>
int main ()
{
char options;
	printf("Choose one of the option Bellow:\n");
	printf("'Y'||'y':Enter Either 'Y' or 'y'\n");
	printf("'N'||'n':Enter Either 'N' or 'n'\n");
	scanf("%c",&options);
	
	switch (options){
		case 'Y' :
			case 'y':
			printf("Deleted successfully.");
			break;
			
		case 'N':
			case 'n':
			printf("Delete Cancelled.");
			break;
			
			default :
				printf("Choose the right option.");
				
	}
	return 0;
	
	
}