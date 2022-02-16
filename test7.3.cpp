#include <iostream>

class Screen
{
public:
	typedef std :: string::size_type pos;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
public:
	Screen() = default;
	Screen(const unsigned _height, const unsigned _width, const int num) :height(_height), width(_width), contents(_height* _width, ' ') {};
	Screen(const unsigned _height, const unsigned _width, const char ch) :height(_height), width(_width), contents(_height* _width, ch) {};
	Screen& move(pos r, pos c);
	Screen& set(const char ch);
	Screen& display(std::ostream& os)
	{
		do_display(os);
		return *this;
	}
	const Screen& display(std::ostream& os)const
	{
		do_display(os);
		return *this;
	}
	void do_display(std::ostream& os) const
	{
		os << contents;
	}
};

inline Screen& Screen::move(pos r, pos c)
{
	unsigned num = r * width;
	cursor = num + c;
	return *this;
}

inline Screen& Screen::set(const char ch)
{
	contents[cursor] = ch;
	return *this;
}

int main()
{
	Screen myScreen(2, 2, 'x');
	myScreen.move(1, 0).set('#').display(std::cout);
	std::cout << "\n";
	myScreen.display(std::cout);
	std::cout << "\n";

	system("pause");
	return 0;
}