#include "CMatrix.h"
#include "CVector.h"
#include <iostream>

using namespace std;

CMatrix::CMatrix() {
	rows = 0;
	cols = 0;
	maTran = nullptr;
}

CMatrix::~CMatrix() {
	for (int i = 0; i < rows; i++) {
		delete[] maTran[i];
	}
	delete[] maTran;
}

CMatrix::CMatrix(const CMatrix& other) {
	rows = other.rows;
	cols = other.cols;
	maTran = new double* [rows];
	for (int i = 0; i < rows; i++) {
		maTran[i] = new double[cols];
		for (int j = 0; j < cols; j++) {
			maTran[i][j] = other.maTran[i][j];
		}
	}
}

istream& operator>>(istream& in, CMatrix& cm) {
	int r, c;
	in >> r >> c;
	if (cm.maTran != nullptr) {
		for (int i = 0; i < cm.rows; i++) {
			delete[] cm.maTran[i];
		}
		delete[] cm.maTran;
	}
	cm.rows = r;
	cm.cols = c;
	cm.maTran = new double* [cm.rows];
	for (int i = 0; i < cm.rows; i++) {
		cm.maTran[i] = new double[cm.cols];
		for (int j = 0; j < cm.cols; j++) {
			in >> cm.maTran[i][j];
		}
	}
	return in;
}

ostream& operator<<(ostream& out, const CMatrix& cm) {
	for (int i = 0; i < cm.rows; i++) {
		for (int j = 0; j < cm.cols; j++) {
			out << cm.maTran[i][j] << " ";
		}
		cout << endl;
	}
	return out;
}

CMatrix operator*(const CMatrix& a, const CMatrix& b) {
	if (a.cols != b.rows) {
		cout << "Loi!";
		return CMatrix();
	}
	CMatrix res;
	res.rows = a.rows;
	res.cols = b.cols;
	res.maTran = new double* [res.rows];
	for (int i = 0; i < res.rows; i++) {
		res.maTran[i] = new double[res.cols];
		for (int j = 0; j < res.cols; j++) {
			res.maTran[i][j] = 0;
			for (int k = 0; k < a.cols; k++) {
				res.maTran[i][j] += a.maTran[i][k] * b.maTran[k][j];
			}
		}
	}
	return res;
}

CVector operator*(const CMatrix& a, const CVector& v) {
	if (a.cols != v.n) {
		cout << "Loi!";
		return CVector();
	}
	CVector res;
	res.n = a.rows;
	delete[] res.toaDo;
	res.toaDo = new double[res.n];
	for (int i = 0; i < a.rows; i++) {
		res.toaDo[i] = 0;
		for (int j = 0; j < a.cols; j++) {
			res.toaDo[i] += a.maTran[i][j] * v.toaDo[j];
		}
	}
	return res;
}