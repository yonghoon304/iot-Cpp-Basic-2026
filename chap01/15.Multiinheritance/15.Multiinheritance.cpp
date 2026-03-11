#include "tea.h"

int main() {
	Tea t("Charlie", 3.5, 20000.0);
	Student s("Alice", 3.8);
	Professor p("Bob", 75000.0);

	t.print();
	s.print();
	p.print();

	return 0;
}