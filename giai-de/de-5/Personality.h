#pragma once

class Personality {
protected:
	char c;
	int chiSo;
public:
	Personality(char _c = '\0', int cs = 0) : c(_c), chiSo(cs) {}
	virtual void Xuat() = 0;
	virtual bool isNguyCoCao() { return false; }
	virtual int getChiSo() { return chiSo; }
	virtual void setChiSo(int chiSo) {
		this->chiSo = chiSo;
	}
};

