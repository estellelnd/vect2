#ifndef VECT2_HPP
# define VECT2_HPP

# include <iostream>

class vect2
{
  private:
	int _x;
	int _y;

  public:
	vect2();
	~vect2();
	vect2(int num1, int num2);
	vect2(const vect2 &src);
	vect2 &operator=(const vect2 &src);

	int operator[](int index) const;
	int &operator[](int index); // NON-CONST

	vect2 operator-() const; //(vect2(-_x, -_y));

	vect2 operator*(int num) const; // (r *= num);
	vect2 operator*(const vect2 &obj) const; // (r *= obj);
	vect2 operator+(const vect2 &obj) const; // (r += obj);
	vect2 operator-(const vect2 &obj) const; // (r -= obj);


	vect2 operator++(int); // return old
	vect2 operator--(int); //return old
	vect2 &operator*=(int num); //_x *= num; _y *= num;
	vect2 &operator*=(const vect2 &obj); //_x *= obj._x; _y *= obj._y;
	vect2 &operator+=(const vect2 &obj); //_x += obj._x; _y += obj._y;
	vect2 &operator-=(const vect2 &obj); //_x -= obj._x; _y -= obj._y;

	vect2 &operator++(); //_x++; _y++;
	vect2 &operator--(); //_x--; _y--;

	bool operator==(const vect2 &obj) const; // return (_x == obj._x && _y == obj._y);
	bool operator!=(const vect2 &obj) const; // return (!(*this == obj));
};

vect2 operator*(int num, const vect2 &obj); // (obj * num);

std::ostream &operator<<(std::ostream &os, const vect2 &obj); // os << "{" << obj[0] << ", " << obj[1] << "}";

#endif
