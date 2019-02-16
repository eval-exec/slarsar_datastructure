#include <stdio.h>
#include <string.h>
typedef struct Books{
	char title[10];
	int book_id;
} book;

int main(){
	struct Books book1;
	strcpy(book1.title,"fea");
	book1.book_id = 2;

	printf("%s,%d",book1.title,book1.book_id);
	return 0;
}
