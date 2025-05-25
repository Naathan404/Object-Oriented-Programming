// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cMatrix.h"

// Khoi tao ma tran voi so hang va so cot 
cMatrix::cMatrix(int sohang, int socot)
{
    Rows.resize(sohang);
    for (int i = 0; i < sohang; i++)
    {
        Rows[i].setSoChieu(socot);
    }
}

// Khoi tao ma tran cot nx1 tu mot vector n chieu
cMatrix::cMatrix(cVector v, bool chuyenThanhMaTranCot)
{
    if(chuyenThanhMaTranCot)
    {
        Rows.resize(v.size());
        for (int i = 0; i < v.size(); i++)
        {
            Rows[i] = cVector(1);
            Rows[i][0] = v[i];
        }
    }
    else
    {
        Rows.resize(1);
        Rows[0] = v;
    }
}

int cMatrix::getSoHang() const
{
    return Rows.size();
}
int cMatrix::getSoCot() const
{
    if (Rows.empty())
        return 0;
    return Rows[0].size();
}

// Cong hai ma tran mxn
cMatrix cMatrix::operator+(cMatrix other)
{
    if (this->getSoHang() != other.getSoHang())
    {
        cout << "Khong thoa man dieu kien cong hai ma tran!";
        return cMatrix();
    }
    cMatrix KQ(*this);
    for (int i = 0; i < this->getSoHang(); i++)
    {
        KQ.Rows[i] = this->Rows[i] + other.Rows[i];
    }
    return KQ;
}
// Tru hai ma tran mxn
cMatrix cMatrix::operator-(cMatrix other)
{
    if (this->getSoHang() != other.getSoHang())
    {
        cout << "Khong thoa man dieu kien tru hai ma tran!";
        return cMatrix();
    }
    cMatrix KQ(*this);
    for (int i = 0; i < this->getSoHang(); i++)
    {
        KQ.Rows[i] = this->Rows[i] - other.Rows[i];
    }
    return KQ;
}
// Nhan ma tran mxn voi 1 so
cMatrix cMatrix::operator*(float factor)
{
    cMatrix KQ(*this);
    for (int i = 0; i < getSoHang(); i++)
    {
        KQ.Rows[i] = this->Rows[i] * factor;
    }
    return KQ;
}
// Nhan ma tran mxn voi ma tran nxp => ma tran mxp
cMatrix cMatrix::operator*(cMatrix other)
{
    // Muon nhan hai ma tran thi so cot cua ma tran thu nhat bang so hang cua ma tran thu hai
    if (this->getSoCot() != other.getSoHang())
    {
        cout << "Khong thoa dieu kien nhan!";
        return cMatrix();
    }
    int n = other.getSoHang();
    cMatrix KQ(this->getSoHang(), other.getSoCot());
    for (int i = 0; i < this->getSoHang(); i++)
    {
        for (int j = 0; j < other.getSoCot(); j++)
        {
            for (int k = 0; k < n; k++)
            {
                KQ.Rows[i][j] += (this->Rows[i][k] * other.Rows[k][j]);
            }
        }
    }
    return KQ;
}
// Nhan mot so voi ma tran mxn
cMatrix operator*(float factor, cMatrix m)
{
    cMatrix KQ(m);
    for (int i = 0; i < m.getSoHang(); i++)
    {
        KQ.Rows[i] = m.Rows[i] * factor;
    }
    return KQ;
}

// Nhan ma tran mxn voi vector n chieu => vector m chieu
cVector operator*(cMatrix m, cVector v)
{
    cMatrix MaTranCot(v);
    if (m.getSoCot() != v.size())
    {
        cout << "Khong thoa dieu kien nhan!";
        return cVector();
    }
    cMatrix temp = m * MaTranCot;
    cVector res(temp.getSoHang());
    // Ma tran mxn nhan voi ma tran nx1 thanh ma tran mx1 => Chuyen thanh vector m chieus
    for (int i = 0; i < temp.getSoHang(); i++)
    {
        res[i] = temp.Rows[i][0];
    }
    return res;
}

// Nhan vector m chieu voi ma tran mxn => vector n chieu
cVector operator*(cVector v, cMatrix m)
{
    cMatrix MaTranHang(v, false);
    if (v.size() != m.getSoHang())
    {
        cout << "Khong thoa dieu kien nhan!";
        return cVector();
    }
    cMatrix temp = MaTranHang * m;
    cVector res(temp.getSoCot());
    // Ma tran 1xm nhan voi ma tran mxn tao ra ma tran 1xn => Chuyen thanh vector n chieu
    for (int i = 0; i < temp.getSoCot(); i++)
    {
        res[i] = temp.Rows[0][i];
    }
    return res;
}

cMatrix cMatrix::operator/(float factor)
{
    return (*this * 1.0 / factor);
}


istream& operator>>(istream& is, cMatrix& m)
{
    for (int i = 0; i < m.getSoHang(); i++)
    {
        cout << "Nhap cac phan tu cua hang thu " << i + 1 << ": ";
        is >> m.Rows[i];
    }
    return is;
}

ostream& operator<<(ostream& os, cMatrix m)
{
    for (int i = 0; i < m.getSoHang(); i++)
    {
        os << m.Rows[i] << endl;
    }
    return os;
}