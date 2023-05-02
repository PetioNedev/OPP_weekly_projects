#include "Magazine.h"

Magazine::Magazine(int issueNumber, int id, const char* title, const char* author, int dateDay, int dateMonth, int dateYear):Item(id, title, author, dateDay, dateMonth, dateYear), issueNumber{issueNumber}
{
}
