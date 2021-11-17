#include "span.hpp"

void try_def_cons() {
	std::vector<int> tmp(10);
	for (int i = 0; i < 10; i++)
		tmp[i] = i;
	std::cout << "Test Span with Default constructor:" << std::endl;
	Span a;
	std::cout << "Span size: " << a.sizearr() << std::endl;
	try
	{
		std::cout << "Test of addNumber(int)" << std::endl;
		a.addNumber(1);
		std::cout << "You can't see me" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of addNumber(vector, vector)" << std::endl;
		a.addNumber(tmp.begin(), tmp.end());
		std::cout << "You can't see me" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of shortestSpan" << std::endl;
		a.shortestSpan();
		std::cout << "You can't see me" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of longestSpan" << std::endl;
		a.longestSpan();
		std::cout << "You can't see me" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Size a = " << a.sizearr() << std::endl;
}

void try_size_cons() {
	std::cout << std::endl << "Test Span with SIZE constructor:" << std::endl;
	Span a(20000);
	std::vector<int> tmp(10000);
	for (int i = 0; i < 10000; i++)
		tmp[i] = i;
	std::cout << "Span size: " << a.sizearr() << std::endl;
	try
	{
		std::cout << "Test of addNumber(int)" << std::endl;
		a.addNumber(50000);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of addNumber(vector, vector)" << std::endl;
		a.addNumber(tmp.begin(), tmp.end());
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of shortestSpan" << std::endl;
		std::cout << a.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Test of longestSpan" << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Size a = " << a.sizearr() << std::endl;
}

void try_test() {
	std::cout << "\nTest of subject" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int	main()
{
	try_def_cons();
	try_size_cons();
	try_test();
	return 0;
}
