#include <string>
#include <iostream>
#include <math.h>
#include <sstream>
#include <limits>

double lat = 40.761749;
double lon = -73.968005;

#define getmax(a, b) a > b ? a : b;

#define sum(a, b) ((a) + (b));

int hailstone(int a) {
	int i = 0;
	while (a != 1) {
		a = a % 2 ? 3 * a + 1 : a / 2;
		++i; 
		return i; }
}

#define printError(s) { std::cout << "ERROR: " \
	std::cout << s; }

#define swap(a, b) a ^= b; \
	b ^= a; \
	a ^= a;

#define min(a, b) (((a)<(b)) ? a : b);

void quicksort(int a[], int b, int c) {
	if (b == c){
		return; }
	int x = (c - b) / 2;
	quicksort(a, b, x);
	quicksort(a, x, c);

	while (b != c) {
		if (a[b] < a[c]) {
			swap(a[b], a[c]);
			++b;
		}
		else {
			swap(a[b], a[c]);
			++c;
		}
	}
}

#define mult(a, b) ((a) * (b));

#define mult3(a, b, c) ((a) * (b) * (c));

#define quadratic(a, b, c) int z = 4 * a * c;\
	double x = -b + sqrt(mult(b, b) - z) / (2 * a); \
	double y = -b - sqrt(mult(b, b) - z) / (2 * a); \
	std::cout << x << " " \
	<< y << std::endl;

#define square(a) mult(a, a);

#define reset(a, b, c, x, y, z) a = 0; b = 0; \
	z = 0; \
	x = 0; y = 0;

void admin(std::string passcode, bool secret = false)
{
	if (!secret) {
		return;
	}

	int x = 3, y = 5, z = 2;

	int s[10][10] = { { 104, 99, 88, 92, 42, 59, 41, 97, 86, 51 },
		{ 59, 95, 54, 65, 63, 60, 45, 65, 87, 51 },
		{ 81, 113, 42, 45, 49, 36, 101, 68, 110, 43 },
		{ 81, 115, 76, 73, 37, 38, 118, 92, 58, 35 },
		{ 48, 57, 87, 44, 56, 35, 105, 97, 107, 52 },
		{ 73, 41, 46, 41, 119, 69, 108, 41, 101, 78 },
		{ 34, 67, 76, 103, 104, 43, 93, 88, 11, 72 },
		{ 53, 102, 32, 53, 40, 111, 99, 120, 112, 36 },
		{ 76, 113, 105, 94, 102, 56, 50, 112, 121, 39 },
		{ 71, 114, 93, 50, 39, 59, 50, 89, 32, 34 } };

	int j = s[x][10 - y];

	for (int i = 0; i < 10; ++i) {
		if (i == 8) j -= 51;
		j = j / 10 + (j % 10) * 10;
		std::cout << (char)j;
		if (passcode[i] != (char)j) return;
		j *= s[j / 10][j % 10];
		j /= 100; }

	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	if (x != 1983 && y != 6 && z != 3) {
		return;
	}

	std::cout << "Welcome admin.\n\n";
	std::cout << "Please enter option.\n";

	std::cin >> x;
	switch (x)
	{
		case 0:
		{
			char c;
			while (true)
			{
				std::cout << "Please enter new target coordinates:\n";

				double x = 0;
				double y = 0;
				std::cin >> x;
				std::cin >> y;

				std::cout << "New coordinates entered as " << x << ", " << y << "\n";
				std::cout << "Confirm? y/N\n";

				std::cin >> c;

				if (c == 'y') {
					lat = x;
					lon = y; }
				else {
					std::cout << "Try again?\ny/N\n";
					std::cin >> c;
					if (c != 'y') {
						break; }
				}
			}
			break;
		}
		case 1:
		{
			int s[] = { 6, 5, 3, 1, 3, 2, 7, 4, 8, 9 };
			int x = 9, y = 1;
			for (int i = 10; i >= 0; --i) {
				std::cout << s[x * y % 10];
				std::cout << " ";
				x = s[x]; y = s[10 - y]; }
			break;
		}
		case 2:
		{
			std::cout << "Change password.\n";
			std::cout << "Please enter old password:\n";

			int a[] = { 5, 8, 1, 2, 1 };

			break;
		}
		case 3:
		{
			int x = 3, y = 2;
			do {
				x = x + 3 % 5; y = y - 1 & 5;
				std::cout << (char)x;
				std::cout << (char)y;
			} while (x != y);
			break;
		}
		case 4:
		{
			unsigned int a = 998265710;
			for ( int i = 0; i < 10; ++i) {
				int j = a % 101;
				std::cout << (char)j;
				j /= 101;
			}
			break;
		}
		case 5:
		{
			std::string a[] = { "A", "B", "C", "D", "E", "F",
				"G", "I", "H", "J", "K", "L",
				"M", "N", "O", "P",
				"Q", "R", "S", "T", "U",
				"W", "V", "X", "Y", "Z" };
			int b[] = { 1, 0, 6, 8, 1, 2, 3, 2, 4, 5, 0, 3 };
			int x = 7;
			for ( int i = 0; i < 12; ++i) {
				x %= 12;
				std::cout << a[b[x]]; 
				x += 5; }
			break;
		}
		case 6:
		{
			int x = 3; int y = 6;
			for ( int i = 0; i < 4; ++i ) {
				int j = y * (5 * i) - (x + i);
				std::cout << (char)(j + 57);
				j = x * y + 14;
				std::cout << (char)(j % 100);
				x += 253;
				y = y + (2 * x);
				y %= 103;
				x %= 18;
				std::cout << (char)(x / 2); }
			break;
		}
		case 7:
		{
			unsigned int a = 12554820;
			for (int i = 0; i < 7; ++i) {
				int j = a % 104;
				std::cout << (char)(j + 2);
				j /= 97;
				j += 3;
			}
			break;
		}
		case 8:
		{
			unsigned int a = 26573;
			int x = 13; int y = -7;
			do {
				y = (x + 2 * y) % 11; x = (x + 3) % 11;
				std::cout << x;
				std::cout << y;
			} while (x != y);
			break;
		}
		case 9:
		{
			int x = 5; int y = 5;
			for (int i = 4; i > 0; --i) {
				int j = x * (5 * i) - (y + i);
				std::cout << (char)(j + 57);
				j = x * y + 14;
				std::cout << (char)(j % 100);
				x += 251;
				y = y + (3 * x);
				y %= 102;
				x %= 94;
				std::cout << (char)(x / 2);
			}
			break;
		}
	}
}

void loadAssets()
{
	std::string a[] = { "T-X", "T-1000", "I-950", "T-800", "T-70" };
	int x = 7, y = 2;
	for (int i = 10; i > 0; --i) {
		std::cout << a[4 * i % 5][5 - i / 2] << "\n";
	}

	int s[] = { 67, 23, 33, 51, 90, 7, 52, 89, 90, 13 };

	do { std::cout << s[x * x + y];
		std::cout << (x % 2) ? '\0' : s[y * y];
		if (x % 3) {
			std::cout << " "; }
		if (x & 17 == 14) {
			std::cout << "\n";
		}
		x += 5; y -= 4;
		x %= 20; y %= 10;
	} while (x != y);

	while (x<-y) {
		std::cout << ++y << " " << x++ << "\n";
	}
}

void displayOptions()
{
	std::string a[] = { "CHECKERS", "REVERSI", "BACKGAMMON", "PICROSS",
		"POKER", "CONTRA", "TETRIS", "PONG", "NIM", "GO", 
		"AIR-TO-GROUND ACTIONS", "THEATERWIDE TACTICAL WARFARE", 
		"MARIO BROTHERS", "CATCH", "MAGIC: THE GATHERING", "SET",
		"THEATERWIDE BIOTOXIC AND CHEMICAL WARFARE", "PAC-MAN",
		"CHESS", "TIC-TAC-TOE", "BATTLESHIP", "CONNECT FOUR", "SEAFARERS OF CATAN" };
	for (int i = 0; i < 13; ++i) {
		std::cout << a[(3 * i) % 22] << "\n";
	}
	char b;
	std::cin >> b;
	if (b == 'm') {
		for (int i = 0; i < 13; ++i) {
			std::cout << a[(3 * i + 1) % 22] << "\n";
		}
	}
	std::cin >> b;
	if (b == 'm') {
		for (int i = 0; i < 12; ++i) {
			std::cout << a[(3 * i + 2) % 22] << "\n";
		}
	}

	int j;
	std::cin >> j;

	if (b == 'n'){
		admin(a[j], true);
	}
}

void conesOfDunshire()
{
	std::string a[] = { "Wizard1", "Maverick", "Arbiter", "Warrior1", 
		"Wizard2", "Ledgerman", "Corporal", "Warrior2" };

	int b[] = { 1, 2, 3, 4, 5, 5, 7, 8, 9 };

	int x = 7, y = 2;

	while (true) {

		std::cout << "Current cone owners:\n";
		for (int i = 0; i < 9; ++i) {
			std::cout << i << ": " << b[i] << "\n";
		}
		std::cout << "\n";

		for (int i = 10; i >= 0; --i) {
			b[i] ^= b[x];
		}

		for (int i = y; i < x; ++i) {
			b[x] ^= b[i];
			b[y] ^= b[10 - i];
		}

		if (x % 2) {
			if (y % 3 == 0) {
				y = ++x; x = (x + 3) % 7;
			}
			else if (y % 3 == 1) {
				x = y--; y = (x + 6) % 10;
			}
			else {
				x = (x + 2) % 5; y = (y + 3) % 5;
			}
		}
		else {
			if (y % 3 == 0) {
				x = (x + 3) % 4; y = (y + 2) % 4;
			}
			else if (y % 3 == 2) {
				x = (x + 2) % 10; y = (y + 3) % 10;
				++x;
			}
			else {
				do {
					y = (x + y) % 10; x = (x + 7) % 10;
				} while (x != y);
			}
		}

		for (int i = 0; i <= 21; i += 3) {
			std::string s = a[b[3 * i]].substr(b[3 * i + 1], b[3 * i + 2]);
		}

		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < 10; ++k) {
				for (int m = 0; m < 10; ++m) {
					for (int n = 0; n < 10; ++n) {
						if (j == k && j == m && j == n &&
							k == m && k == n && m == n) continue;
						if (b[j] == b[k] && b[j] == b[m] && b[j] == b[n])
							break;
					}
				}
			}
		}
	}
}

void theSocialNetwork()
{
	unsigned int a = 483542218;
	int b = 0;

	while (b < a) {
		b += 3;
		a -= 1;
		int z = hailstone(3 * b + 2 * a);
		if (z % 17 == 14) {
			b *= 2;
			a -= 13; }
	}

	while (b == a) {
		int x = 17; int y = 92;

		for (int j = 5, i = 5; i > 0; ++i) {
			x += j; y -= i;
			x *= y;
			i -= 3;
			std::string s[] = { "743d8f1bff4fe2c2c9c389daa7b778d7e6493f68467d0dbc2371a0a190d9519b",
				"a696439e8f4534f1b079533683bdef5d5a50fb3ea091ceb016c9a845da0b8338",
				"b76ee1f9e9dcae6b403be3c332eadbff44e27ea8cf6058e457adab16174a0c57" };
			a += x;
			x /= b;
			char k = s[a % 3][(b % 52) + 12];
			std::cout << k;
			++j; }

		for (int j = 0, i = 0; i < 10; ++i) {
			x -= 3;
			std::string s = std::to_string(j);
			std::cout << i;
			a /= 100; }
	}

	while (b > a) {
		b += ++a; }
}

void contra()
{
	long long a = 257505781557389686;

	for (int i = 11; i > 0; --i) {
		int x = i;
		int y = square(x);
		while (x < y) {
			++x;
			y -= (a / x);
			a = --a / 2;
			int j = a % 100;
			y += j++;
			x /= --j;
			int k = j ^ y;
			std::cout << (char)k; }
		std::cout << x; }

	for (int i = 8; i > 0; --i) {
		int x = 0, y = -7;
		while (x <= y) {
			++x;
			y -= (a / x);
			a = a-- / 2;
			int j = a % 1024;
			y -= j++;
			y += a;
			x /= --j;
			int k = j ^ (x * y);
			std::cout << (char)k; }
		std::cout << i << x; }

	for (int i = 5; i > 0; --i) {
		int y = 2 * i - 1;
		int x = square(y--);
		while (x < y++) {
			y -= (a * x);
			a = --a / 3;
			int j = a % 243;
			x *= j++;
			int b = --j;
			int k = j ^ b ^ x;
			std::cout << (char)++k; }
		std::cout << x; }

	for (int i = 2; i > 0; --i) {
		int y = -2 * i - 1;
		int x = mult(y--, ++y);
		while (x != y) {
			y -= (a * x);
			a = --a / 5;
			int j = a % 125;
			x *= ++j;
			int b = --j * 4;
			int k = b ^ x;
			std::cout << (char)--k; }
		std::cout << x; }
}

void globalThermonuclearWar()
{
	double lat = 40.761749;
	double lon = -73.968005;

	int activationCode[] = { 5, 4, 5, 8, 7, 7, 5, 5, 4, 3, 7, 7, 6, 1, 1, 3 };

	// To be implemented later
}

void poker()
{
	std::string a[] = { "DA", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "DT", "DJ", "DQ", "DK",
		"SA", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "ST", "SJ", "SQ", "SK",
		"HA", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "HT", "HJ", "HQ", "HK",
		"CA", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "CT", "CJ", "CQ", "CK" };

	int b[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
		13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
		26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
		39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 };

	for (int i = 0; i < 52; ++i) {
		for (int j = 0; j < i; ++j) {
			swap(b[i], b[j]);
		}
	}
	

	for (int i = 0; i < 8; ++i) {
		for (int j = 2; j > 0; --j) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl; }

	std::cout << std::endl;

	for (int j = 16; j < 21; ++j) {
		std::cout << a[j] << " ";
	}
}

void chess()
{
	for (int i = 0; i < 64; ++i) {
		for (int j = 63; j >= 0; --j) {
			std::cout << i;
			std::cout << 2 * j;
			int x = i;
			int y = i + 1;
			std::cout << sum(x, y);
			std::cout << (char)j;
			std::cout << (char)i;
			std::cout << (char)++j;
			int a = 2 * x + 3 * y;
			int b = -3 * x + 4 * y;
			std::cout << a;
			if (b % 2) {
				std::cout << (char)(2 * b);}

		}

		for (int j = 63; j >= 0; --j) {
			int k = 14 * j - 7;
			if (k % 7 == 3) {
				std::cout << (char)j << " ";
				int a[10] = { 55, 74, 73, 64, 60, 72, 69, 79, 59, 68};
				for (int i = 4; i < 14; ++i) {
					int b = (i * 3 + 1) % 10;
					std::cout << (char)a[b]; }
				std::cout << std::endl;
			}
			else if (k % 5 == 0) {
				if (k % 2) {
					int a[10] = { 59, 79, 64, 74, 68, 55, 60, 72, 69, 73 };
					for (int i = 0; i < 5; ++i) {
						for (int j = 0; j < 2; ++j) {
							std::cout << (char)a[j * 5 + i];
						}
					}
				}
				else {
					int a[10] = { 59, 74, 68, 79, 64, 55, 60, 72, 69, 73 };
					int l = 0;
					do {
						int b = a[l] + l;
						if (l % 3) {
							b += 1; }
						std::cout << (char)l;
					} while (l < 10);
				}
			}
			else if (k % 4 == 2) {
				int a[10] = { 62, 70, 56, 55, 65, 63, 59, 58, 73, 67 };
				for (int j = 3; j < 15; ++j) {
					if (j % 4 == 0) {
						++j;
						continue;
					}
					else if (j % 4 == 2) {
						std::cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(a[j] * 5) % 26];
						std::cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(a[j] * 3 + 17) % 26];
						std::cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(a[j] + 18) % 25 + 1];
						std::cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[(a[j] * 18) % 26];
						std::cout << "\n"; }
					else if (j % 5 == 1) {
						std::cout << (char)(j + 72);
						std::cout << a[j % 10];
						for (int k = 0; k < 5; k += 2) {
							++j;
							j += k;
							std::cout << a[k];
						}
					}
					else if (j % 7 == 4) {
						for (int k = 17; k >= 3; k -= 3) {
							if (k % 2) {
								std::cout << (char)(a[k * 2 + 1] + a[k * 3 - 1]);}
							else {
								std::cout << (char)(a[k * 3 + 1] + a[k * 2 + 1]);}
							std::cout << j;
						}
					}
					else {
						int x = 3, y = 4;
						int b[10][10] = { { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
							{ 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 },
							{ 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 },
							{ 4, 8, 12, 16, 20, 24, 28, 32, 36, 40 },
							{ 5, 10, 15, 20, 25, 30, 35, 40, 45, 50 },
							{ 6, 12, 18, 24, 30, 36, 42, 48, 54, 60 },
							{ 7, 14, 21, 28, 35, 42, 49, 56, 63, 70 },
							{ 8, 16, 24, 32, 40, 48, 56, 64, 72, 80 },
							{ 9, 18, 27, 36, 45, 54, 63, 72, 81, 90 },
							{ 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } };

						int a[10][10] = { { 4, 1, 6, 5, 10, 7, 8, 9, 3, 2 },
							{ 11, 13, 16, 7, 19, 9, 8, 20, 10, 3 },
							{ 23, 20, 8, 30, 25, 17, 19, 1, 15, 13 },
							{ 32, 35, 12, 34, 14, 1, 7, 38, 40, 33 },
							{ 13, 33, 16, 27, 42, 12, 24, 17, 29, 11 },
							{ 1, 28, 24, 18, 53, 29, 11, 48, 45, 49 },
							{ 32, 49, 46, 10, 4, 59, 26, 56, 7, 50 },
							{ 66, 3, 44, 4, 1, 51, 62, 39, 16, 53 },
							{ 42, 11, 41, 54, 68, 79, 31, 27, 50, 89 },
							{ 24, 50, 7, 37, 26, 53, 97, 4, 73, 1 } };

						for (int i = 0, j = 0; i < 10, j < 10; j += 3) {
							x += j; y += i;
							x %= 10;
							y %= 10;
							if (j % 2) {
								std::cout << (char)(a[x][y] * b[y][x]);
							}
							else {
								if (j % 3 == 1) {
									std::cout << (char)(a[x][y] * b[x][y]);
								}
								else if (j % 3 == 2) {
									std::cout << (char)(a[y][x] * b[y][x]);
								}
								else {
									std::cout << (char)(a[y][x] * b[x][y]);
								}
							}
						}
					}
				}
			}
			else {
				int a[10] = { 75, 72, 73, 78, 60, 68, 76, 60, 61, 62 };
				for (int i = 9; i >= 0; --i) {
					int j = a[i] + 2;
					j /= 3;
					if (i % 2) {
						++j;
					}
					std::cout << (char)j;
				}
			}
		}
	}
}

void fighterCombat()
{
	int a[] = { 2, 4, 6, 8, 3, 5, 7, 1, 0 };

	for (int k = 0; k < 10; ++k) {
		switch (k)
		{
			case 0:
			{
				for (int i = 0, j = 3; i < 5; ++i) {
					int x = j * i;
					int y = i + 4;
					int z = 0;
					do {
						++x;
						y += i;
						int l = a[j] + i;
						y *= 7;
						y -= l;
						if (x / y > 1) {
							++x; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 3:
			{
				for (int i = 0, j = 3; i < 5; ++i) {
					int x = j * i;
					int y = i + 3 * j;
					int z = 0;
					do {
						--x;
						y += i;
						y *= -7;
						y -= i;
						int l = a[i] + j;
						if (x / y > l) {
							++x; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 7:
			{
				for (int i = 1, j = 0; j < 5; ++j) {
					int x = j * i + 2;
					int y = i;
					int z = 0;
					do {
						--x;
						y += --x;
						y *= 3;
						y -= 2 * i;
						if (x + y > 1) {
							j = (j + 2) % 10;
							++x; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 1:
			{
				for (int i = 0, j = 3; i < 5; ++i) {
					int x = j * i;
					int y = i + 4;
					int z = 0;
					do {
						++x;
						y += i;
						int l = a[2 * j] + j;
						y *= -7;
						y -= l;
						if (x / y > 1) {
							j = (j + 3) % 10;
							++y; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 8:
			{
				for (int i = 7, j = 0; j < 7; ++j) {
					int x = j * i;
					int y = i + 7 * j;
					int z = 0;
					do {
						--x;
						y += i;
						y *= 7;
						y -= i;
						if (x > 7 && y > 7) {
							++x; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 9:
			{
				for (int i = 0, j = 3; j < 10; ++j) {
					int x = j * k;
					int y = i + 8 * j;
					int z = 0;
					do {
						--y;
						x += i;
						y *= 12;
						y += j;
						if (x > y + 6) {
							j = (j + 6) % 10;
							++x; }
						z++;
					} while (y <- x);
					std::cout << z;
				}
			}
			break;
			
			case 5:
			{
				for (int i = 0, j = 3; j < 15; ++j) {
					int x = 2 * i;
					int y = j + 6 * i;
					int z = 0;
					do {
						--x;
						y += i + 3;
						y *= 8;
						y += i;
						if (x / y < 1) {
							++y; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			case 4:
			{
				for (int i = 0, j = 0; i < 10; ++i) {
					int x = j * i;
					int y = i + 3;
					int z = 0;
					do {
						++x;
						y += j;
						y *= 2;
						y -= i;
						if (x / y >= 1) {
							++x; }
						z++;
					} while (y <- x);
					std::cout << z;
				}
			}
			break;
			
			case 2:
			{
				for (int i = 1, j = 3; i < 5; ++i) {
					int x = j * j;
					int y = i + 5;
					int z = 0;
					do {
						++y;
						y += i;
						y *= j;
						y -= i;
						if (y / x > 1) {
							j = (i - 1) % 10;
							++x; }
						z++;
					} while (x <- y);
					std::cout << z;
				}
			}
			break;
			
			default:
			{
				for (int i = 4, j = 2; j < 13; ++j) {
					int x = j * i * i * k;
					int y = 4 * i + 5 * j;
					int l = a[i] + j + 1;
					int z = 0;
					do {
						++y;
						y += l;
						y *= k;
						y -= l;
						if (x + y > k) {
							++x; ++y; }
						z++;
					} while (y <- x);
					std::cout << z;
				}
			}
			break;
		}
	}
}

void desertWarfare()
{
	for (int i = 0; i < 20; i += 2) {
		int y = 13 * i;
		if (i % 7 == 1 || i % 7 == 4) {
			y -= 4;
		}
		switch (i)
		{
			case 0:
			{
				int a[] = { 100, 64, 23, 17, 87 };
				int b[] = { 6, 5, 5, 2, 3 };

				int i = 0;

				while (a[0] != b[0]) {
					a[i]++;
					b[i + 1] += 3;
					++i;
					if (i == 5) {
						int x = b[0];
						b[0] = b[1];
						b[1] = b[2];
						b[2] = b[3];
						b[3] = b[4];
						b[4] = x;
						for (int j = 0; j < 5; ++j) {
							--a[j]; }
						std::cout << (char)(a[y] + b[i] * b[3]);
					}
					i %= 4;
				}
			}
			break;

			case 2:
			{
				int a[] = { 90, 54, 13, 7, 77 };
				int b[] = { 4, 2, 5, 3, 2 };

				int i = 0;

				while (a[i] != b[i]) {
					a[i]++;
					b[i + 1] += 3;
					++i;
					if (i == 5) {
						int x = b[0];
						a[0] = b[1];
						a[1] = b[2];
						a[2] = b[3];
						b[3] = a[4];
						b[4] = (x * 2 - 1) / 2;
						for (int j = 0; j < 4; ++j) {
							--b[j];
						}
						std::cout << (char)(a[i + 1] + b[i] * b[2]);
					}
					i %= 4;
				}
			}
			break;

			case 4:
			{
				int a[] = { 87, 17, 64, 100, 23 };
				int b[] = { 7, 5, 5, 1, 5 };

				int i = 1 + y;

				while (a[i] != b[3]) {
					a[i]--;
					b[i + 1] += 3;
					++i;
					if (i == 5) {
						int x = b[0];
						a[0] = b[1];
						a[2] = a[3];
						a[3] = b[2];
						b[3] = a[4];
						b[4] = (x * 2 - 1) / 2;
						for (int j = 0; j < 4; ++j) {
							--b[j]; --a[j];
						}
						std::cout << (char)(a[i + x] + b[i] * b[i / 2]);
					}
					i %= 4;
				}
			}
			break;

			case 6:
			{
				int a[] = { 10, 46, 27, 13, 78 };
				int b[] = { 4, 2, 8, 7, 6 };

				int i = 0;

				while (a[i] != b[(i + 1) % 4 + 1]) {
					a[i]--;
					b[i + 1] += 23;
					++i;
					if (i == 5) {
						int x = b[0];
						a[0] = b[1];
						a[1] = b[2];
						b[3] = a[4];
						b[4] = (x * 3 + 2) / 4;
						for (int j = 0; j <= 4; ++j) {
							--b[j];
						}
						b[i] %= 14;
						std::cout << (char)(a[i + 1] + b[i - 1] * b[2]);
					}
					i %= 4;
				}
			}
			break;

			case 8:
			{
				int a[] = { 82, -46, 32, 16, -87 };
				int b[] = { 1, -5, -5, 4, 6 };

				int i = 0, j = 0;

				while (a[j] != b[j % 4 + 1]) {
					a[j]--;
					b[j + 1] += 24;
					++j;
					if (j == 4) {
						int x = a[0];
						a[0] = a[1];
						a[1] = a[2];
						b[3] = a[4];
						b[4] = (x * 3 + 2) / 4;
						for (int j = 0; j <= 4; ++j) {
							--b[j++];
						}
						b[j] %= 14;
						std::cout << (char)(a[j + y] + b[y - 1] * b[2]);
					}
					j %= 4;
					++j;
				}
			}
			break;

			case 10:
			{
				int a[] = { 23, 74, 76, 23, 24 };
				int b[] = { 3, 2, 5, 5, 6 };
			}
			break;

			case 12:
			{
				int a[] = { 62, 89, 13, 4, 56 };
				int b[] = { 1, 2, 3, 4, 5 };
			}
			break;

			case 14:
			{
				int a[] = { 64, 23, 17, 87, 100 };
				int b[] = { 7, 8, 6, 4, 2 };

				int i = 0;

				while (a[i] != b[i]) {
					a[i]++;
					b[i + 1] += 3;
					++i;
					if (i == 5) {
						int x = b[0];
						a[0] = b[1];
						a[1] = a[2];
						a[3] = b[4];
						b[4] = a[3];
						b[2] = (x * 2 - 1) / 2;
						for (int j = 0; j < 4; ++j) {
							--b[j];
						}
						std::cout << (char)(a[x] + b[y] * b[y]);
					}
					i %= 4;
				}
			}
			break;

			case 16:
			{
				int a[] = { 1, 3, 5, 7, 9 };
				int b[] = { 101, 95, 46, 29, 30 };

				int i = 1;

				while (a[i + 1] != b[4]) {
					b[i]--;
					b[i + 1] += 31;
					++i;
					if (i == 5) {
						int x = b[1];
						a[2] = b[2];
						a[1] = b[3];
						b[4] = a[4];
						b[3] = (x * -1 + 3) / 5;
						for (int j = 1; j <= 4; ++j) {
							--b[j];
						}
						b[i] %= 143;
						std::cout << (char)(a[x] + b[y] * b[2 * x]);
					}
					i %= 4;
				}
			}
			break;

			case 18:
			{
				int a[] = { 12, 98, 97, 45, 22 };
				int b[] = { 7, 6, 6, 2, 4 };

				int i = 3;

				while (a[i - 1] != b[i]) {
					a[i]--;
					b[i + 1] += 23;
					++i;
					if (i == 5) {
						int x = b[0];
						a[0] = b[1];
						a[1] = b[2]++;
						b[3] = a[4];
						b[4] = x * 5 - 13;
						for (int j = 1; j <= 4; ++j) {
							--b[j];
						}
						b[i] %= 14;
						std::cout << (char)(a[y] + b[x] * x);
					}
					i %= 4;
					i += 1;
				}
			}
			break;

			case 20:
			{
				int a[] = { 73, 37, 19, 19, 61 };
				int b[] = { 16, 15, 51, 12, 13 };

				int i = 0;

				while (a[i] != b[i]) {
					a[i]++;
					b[i] += 12;
					++i;
					if (i == 5) {
						int z = b[0];
						a[0] = b[1];
						a[1] = b[2];
						a[4] = (3 * z) / 4;
						for (int j = 0; j < 4; ++j) {
							--a[j++];
						}
						b[i] %= 14;
						std::cout << (char)(a[z] + b[y] * b[y]);
					}
					i %= 4;
				}
			}
			break;

			default:
			{
				int a[] = { 74, 33, 19, 91, 16 };
				int b[] = { 6, 4, 3, 5, 10 };

				int i = 0;

				while (a[i] != b[(i + 1) % 4 + 1]) {
					a[i]--;
					b[i + 1] += 23;
					++i;
					if (i == 5) {
						int x = a[0];
						b[0] = a[1];
						b[1] = a[2];
						b[3] = a[4];
						b[4] = (x * 6 + 3) / -2;
						for (int j = 0; j <= 4; ++j) {
							++b[j];
						}
						b[i] %= 51;
						--b[i];
						std::cout << (char)(a[y] + b[x] * b[x]);
					}
					i %= 4;
				}
			}
			break;

		}
	}
}

void theaterwideChemicalWarfare()
{
}

void exitProgram()
{
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			for (int k = 0; k < 10; ++k) {
				for (int x = 0; x < 10; ++x) {
					for (int y = 0; y < 10; ++y) {
						if (i < j / 2) {
							if (x == y && k == j && k != y) {
								if (x < k) {
									std::cout << j;
								}
								else if (j >= i + 2) {
									std::cout << k;
								}
								else if (y == k) {
									std::cout << j;
								}
							}
							else if (x == y && k == j && y == k) {
								std::cout << k++;
							}
							else {
								std::cout << "\n";
							}
						}
					}
				}
			}
		}
	}
}

void errorMsg()
{
	int a[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
	std::string b[] = { "0", "0", "0", "0", "0", "0", "0", "0", "0", "0" };

	int x = 0, y = 0, z = 0; do {

		++y;
		b[x] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[z];

		for (int i = 0; i < y; ++i) {
			swap(a[++x], a[z++]);
			y += 3;
		}

		z = x + y * 2;
		std::cout << b[x][y];

		for (int j = 0; j < z; ++j) {
			std::cout << b[j];
			if (j % 3) {
				++z; }
		}
		std::cout << "\n";

	} while (x == y);

	do {
		++z;

		b[z] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

		for (int i = 5; i >= 0; --i) {
			z = i % 3 ? 2 + i : (i % 2 ? 4 : z + 2);
		}

		std::cout << b[x][y];

		std::cout << b[y][x];

		if (x % 18 == 12) {
			std::cout << "\n" << ++x;
		}
		else {
			std::cout << "\t";
		}

	} while (x != y);

}

int main()
{
	loadAssets();
	displayOptions();
	int option;
	std::cin >> option;
	bool quit = false;
	while (!quit) {
		switch (option) {
			case '1': {
				conesOfDunshire();
				break;
			}
			case '2': {
				theSocialNetwork();
				break;
			}
			case '3': {
				contra();
				break;
			}
			case '4': {
				globalThermonuclearWar();
				break;
			}
			case '5': {
				poker();
				break;
			}
			case '6': {
				chess();
				break;
			}
			case '7': {
				fighterCombat();
				break;
			}
			case '8': {
				desertWarfare();
				break;
			}
			case '9': {
				theaterwideChemicalWarfare();
				break;
			}
			case '0': {
				admin("");
				break;
			}
			case 'q': {
				exitProgram();
			}
			default: {
				errorMsg();
				break;
			}
			std::cin >> option;
		}
	}

	return 0;
}