#pragma once
#include <iostream>
using namespace std;

namespace mathlib {

	template<typename T = int>
	class Fraction
	{
	public:
		T numerator;
		T denominator;

	public:
		Fraction(T num, T den) {
			numerator = num;
			if (den == 0) { den = 1; }
			denominator = den;
		}
		Fraction() : numerator{ 1 }, denominator{ 1 } {};

		void simplify() {
			for (int i = numerator; i > 0; i--) {
				if ((numerator % i == 0) && (denominator % i == 0)) {
					numerator /= i;
					denominator /= i;
					return;
				}
			}
		}

		double toDouble() { return numerator / denominator; }

		Fraction<T> const operator + (Fraction<T> f2) {
			if (denominator == f2.denominator) { return Fraction<>(numerator + f2.numerator, denominator); }
			T tempDen = denominator;
			numerator *= f2.denominator;
			denominator *= f2.denominator;
			f2.numerator *= tempDen;

			return Fraction<T>(numerator + f2.numerator, denominator);
		}

		Fraction<T> const operator - (Fraction<T> f2) {
			if (denominator == f2.denominator) { return Fraction<>(numerator - f2.numerator, denominator); }
			T tempDen = denominator;
			numerator *= f2.denominator;
			denominator *= f2.denominator;
			f2.numerator *= tempDen;

			return Fraction<T>(numerator - f2.numerator, denominator);
		}

		Fraction<T> const operator * (Fraction<T> f2) {
			return Fraction<T>(numerator * f2.numerator, denominator * f2.denominator);
		}

		Fraction<T> const operator / (Fraction<T> f2) {
			return Fraction<T>(numerator * f2.denominator, denominator * f2.numerator);
		}

		bool operator == (Fraction<T> f2) { return ((numerator / denominator) == (f2.numerator / f2.denominator)); }
		bool operator != (Fraction<T> f2) { return ((numerator / denominator) != (f2.numerator / f2.denominator)); }
		bool operator > (Fraction<T> f2) { return ((numerator / denominator) > (f2.numerator / f2.denominator)); }
		bool operator < (Fraction<T> f2) { return ((numerator / denominator) < (f2.numerator / f2.denominator)); }
		bool operator >= (Fraction<T> f2) { return ((numerator / denominator) >= (f2.numerator / f2.denominator)); }
		bool operator <= (Fraction<T> f2) { return ((numerator / denominator) <= (f2.numerator / f2.denominator)); }
	};
}

