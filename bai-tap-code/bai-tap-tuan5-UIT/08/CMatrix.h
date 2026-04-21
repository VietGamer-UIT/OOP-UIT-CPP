#pragma once

class CVector;

class CMatrix {
private:
	int rows, cols;
	double** maTran;
public:
	CMatrix();
	~CMatrix();
	CMatrix(const CMatrix& other);
	friend std::istream& operator>>(std::istream & in, CMatrix& cm);
	friend std::ostream& operator<<(std::ostream& out, const CMatrix& cm);
	friend CMatrix operator*(const CMatrix& a, const CMatrix& b);
	friend CVector operator*(const CMatrix& a, const CVector& v);
};