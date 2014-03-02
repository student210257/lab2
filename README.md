#Laboratorium 2
##Wstęp do klas


Plik `main.cpp` zawiera kod startowy do tego laboratorium. Zawiera się w nim prosty, strukturalny program przechowujący podstawowe parametry *okręgu* (lokalizacja na płaszczyźnie i promień) i pozwalający na wyliczanie jego obwodu i pola.

	float circle_circumference(float radius)
	{
		return 2 * M_PI * radius;
	}
	
	float circle_area(float radius)
	{
		return M_PI * pow(radius,2);
	}
	
	int main()
	{
		float circle_location_x = 5.;
		float circle_location_y = 2.;
		float circle_radius = 10.;
	
		printf("Circle location is %.1fx%.1f.\n", circle_location_x, circle_location_y);
		printf("Circle circumference is %.2f.\n", circle_circumference(circle_radius));
		printf("Circle area is %.2f.\n", circle_area(circle_radius));
	}
	
##Zadanie
Twoim zadaniem będzie konwersja tego programu z podejścia strukturalnego na obiektowe. Aby to osiągnąć, wykonaj kroki opisane w kolejnych akapitach.

Zamiast dwóch zmiennych zawierających dane o lokalizacji (`circle_location_x` i `circle_location_y`), zadeklaruj strukturę `location`. Struktura powinna posiadać atrybuty `x` i `y`.

Używając poniższego kodu, zadeklaruj klasę `Circle`.

	class Circle
	{
		location location;
		float radius;
	};