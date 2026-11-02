#include "vect2.hpp"

vect2::vect2()
{
	_x = 0;
	_y = 0;
}

vect2::~vect2() {}

vect2::vect2(int num1, int num2)
{
	_x = num1;
	_y = num2;
}

vect2::vect2(const vect2& src)
{
	*this = src;
}

vect2 &vect2::operator=(const vect2 &src)
{
	if (this != &src)
	{
		_x = src._x;
		_y = src._y;
	}
	return (*this);
}

int vect2::operator[](int index) const
{
	if(index == 0)
		return(_x);
	return(_y);
}

int& vect2::operator[](int index)
{
	if(index == 0)
		return(_x);
	return(_y);
}

vect2 vect2::operator-() const
{
	return (vect2(-_x, -_y));
}

vect2 vect2::operator*(int num) const
{
	vect2 r(*this);
	return (r *= num);
}
vect2 vect2::operator+(const vect2 &obj) const
{
	vect2 r(*this);
	return (r += obj);
}

vect2 vect2::operator-(const vect2 &obj) const
{
	vect2 r(*this);
	return (r -= obj);
}

vect2 vect2::operator*(const vect2 &obj) const
{
	vect2 r(*this);
	return (r *= obj);
}

vect2 vect2::operator++(int)
{
	vect2 old(*this);
	++*this;
	return (old);
}

vect2 vect2::operator--(int)
{
	vect2 old(*this);
	--*this;
	return (old);
}

vect2 operator*(int num, const vect2 &obj)
{
	return (obj * num);
}

vect2 &vect2::operator*=(int num)
{
	_x *= num;
	_y *= num;
	return (*this);
}

vect2 &vect2::operator+=(const vect2 &obj)
{
	_x += obj._x;
	_y += obj._y;
	return (*this);
}

vect2 &vect2::operator-=(const vect2 &obj)
{
	_x -= obj._x;
	_y -= obj._y;
	return (*this);
}

vect2 &vect2::operator*=(const vect2 &obj)
{
	_x *= obj._x;
	_y *= obj._y;
	return (*this);
}

vect2 &vect2::operator++()
{
	_x++;
	_y++;
	return (*this);
}

vect2 &vect2::operator--()
{
	_x--;
	_y--;
	return (*this);
}

bool vect2::operator==(const vect2 &obj) const
{
	return (_x == obj._x && _y == obj._y);
}

bool vect2::operator!=(const vect2 &obj) const
{
	return (!(*this == obj));
}

std::ostream &operator<<(std::ostream &os, const vect2 &obj)
{
	return os << "{" << obj[0] << ", " << obj[1] << "}";
}
