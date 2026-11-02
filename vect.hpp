#ifndef VECT_HPP
# define VECT_HPP

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
	vect2 &operator=(const vect2 &obj);

	int operator[](int index) const;
	int &operator[](int index);

	vect2 operator+(const vect2 &obj) const;
	vect2 operator*(const vect2 &obj) const;
	vect2 operator-(const vect2 &obj) const;

	vect2 operator*(int num) const;

	vect2 &operator+=(const vect2 &obj);
	vect2 &operator-=(const vect2 &obj);
	vect2 &operator*=(const vect2 &obj);

	vect2 operator++(int);
	vect2 operator--(int);
	vect2 &operator--();
	vect2 &operator++();
};


vect2 operator*(int num, const vect2 &obj);

std::ostream &operator<<(std::ostream &os, const vect2 &obj);

#endif
