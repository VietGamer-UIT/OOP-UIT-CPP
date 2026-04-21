#pragma once

class CMatrix;

class CVector {
private:
	int n;
	double* toaDo;
public:
	CVector();
	~CVector();
	CVector(const CVector& other);
	CVector& operator=(const CVector& other);
	friend std::istream& operator>>(std::istream& in, CVector& vt);
	friend std::ostream& operator<<(std::ostream& out, const CVector& vt);
	friend CVector operator+(const CVector& a, const CVector& b);
	friend CVector operator-(const CVector& a, const CVector& b);
	friend double operator*(const CVector& a, const CVector& b);
	friend CVector operator*(const CMatrix& a, const CVector& v);
};	