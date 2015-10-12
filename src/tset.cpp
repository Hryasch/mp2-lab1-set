// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tset.cpp - Copyright (c) Гергель В.П. 04.10.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Множество - реализация через битовые поля

#include "tset.h"
#include "tbitfield.h"

TSet::TSet(int mp) : BitField(mp),MaxPower(mp)
{
}

// конструктор копирования
TSet::TSet(const TSet &s) : BitField(-1)
{
}

// конструктор преобразования типа
TSet::TSet(const TBitField &bf) : BitField(-1)
{
	BitField = bf;
	MaxPower = bf.GetLength();
}

TSet::operator TBitField()
{
}

int TSet::GetMaxPower(void) const // получить макс. к-во эл-тов
{
}

int TSet::IsMember(const int Elem) const // элемент множества?
{
    return BitField.GetBit(Elem);
}

void TSet::InsElem(const int Elem) // включение элемента множества
{
	BitField.SetBit(Elem);
}

void TSet::DelElem(const int Elem) // исключение элемента множества
{
	BitField.ClrBit(Elem);
}

// теоретико-множественные операции

TSet& TSet::operator=(const TSet &s) // присваивание
{
}

int TSet::operator==(const TSet &s) const // сравнение
{
    return 0;
}

int TSet::operator!=(const TSet &s) const // сравнение
{
}

TSet TSet::operator+(const TSet &s) // объединение
{
	TBitField tmp (MaxPower);
	tmp = BitField | s.BitField;
	TSet _S (tmp);
	return _S;
}

TSet TSet::operator+(const int Elem) // объединение с элементом
{
}

TSet TSet::operator-(const int Elem) // разность с элементом
{
}

TSet TSet::operator*(const TSet &s) // пересечение
{
}

TSet TSet::operator~(void) // дополнение
{
}

// перегрузка ввода/вывода

istream &operator>>(istream &istr, TSet &s) // ввод
{
	int i=0;
	while ((i >= 0)&&(i < s.MaxPower))
	{
		s.InsElem(i);77
	}
}

ostream& operator<<(ostream &ostr, const TSet &s) // вывод
{
}
