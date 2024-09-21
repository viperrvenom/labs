#include <iostream>
#include <climits>
#include <cfloat>
#include <cstdint>

int main() {
    using namespace std;

    // Целочисленные типы данных (знаковые и беззнаковые)
    cout << "signed char:\n"
         << "  Size: " << sizeof(signed char) << " bytes\n"
         << "  Min: " << SCHAR_MIN << "\n"
         << "  Max: " << SCHAR_MAX << "\n"
         << "  Example operation: " << char(-5) + char(4) << "\n\n";

    cout << "unsigned char:\n"
         << "  Size: " << sizeof(unsigned char) << " bytes\n"
         << "  Min: " << 0 << "\n"
         << "  Max: " << UCHAR_MAX << "\n"
         << "  Example operation: " << (unsigned char)(5) + (unsigned char)(4) << "\n\n";

    cout << "short:\n"
         << "  Size: " << sizeof(short) << " bytes\n"
         << "  Min: " << SHRT_MIN << "\n"
         << "  Max: " << SHRT_MAX << "\n"
         << "  Example operation: " << short(2) + short(3) << "\n\n";

    cout << "unsigned short:\n"
         << "  Size: " << sizeof(unsigned short) << " bytes\n"
         << "  Min: " << 0 << "\n"
         << "  Max: " << USHRT_MAX << "\n"
         << "  Example operation: " << (unsigned short)(100) + (unsigned short)(500) << "\n\n";

    cout << "int:\n"
         << "  Size: " << sizeof(int) << " bytes\n"
         << "  Min: " << INT_MIN << "\n"
         << "  Max: " << INT_MAX << "\n"
         << "  Example operation: " << int(10) + int(5) << "\n\n";

    cout << "unsigned int:\n"
         << "  Size: " << sizeof(unsigned int) << " bytes\n"
         << "  Min: " << 0 << "\n"
         << "  Max: " << UINT_MAX << "\n"
         << "  Example operation: " << (unsigned int)(-5555) + (unsigned int)(123213) << "\n\n";

    cout << "long:\n"
         << "  Size: " << sizeof(long) << " bytes\n"
         << "  Min: " << LONG_MIN << "\n"
         << "  Max: " << LONG_MAX << "\n"
         << "  Example operation: " << long(-4545654) + long(-465464565) << "\n\n";

    cout << "unsigned long:\n"
         << "  Size: " << sizeof(unsigned long) << " bytes\n"
         << "  Min: " << 0 << "\n"
         << "  Max: " << ULONG_MAX << "\n"
         << "  Example operation: " << (unsigned long)(130) + (unsigned long)(5) << "\n\n";

    // Вещественные типы данных
    cout << "float:\n"
         << "  Size: " << sizeof(float) << " bytes\n"
         << "  Min: " << FLT_MIN << "\n"
         << "  Max: " << FLT_MAX << "\n"
         << "  Example operation: " << float(14.4) + float(5.2) << "\n\n";

    cout << "double:\n"
         << "  Size: " << sizeof(double) << " bytes\n"
         << "  Min: " << DBL_MIN << "\n"
         << "  Max: " << DBL_MAX << "\n"
         << "  Example operation: " << double(6.66666) + double(3.33333) << "\n\n";

    cout << "long double:\n"
         << "  Size: " << sizeof(long double) << " bytes\n"
         << "  Min: " << LDBL_MIN << "\n"
         << "  Max: " << LDBL_MAX << "\n"
         << "  Example operation: " << (long double)(2.3L) + (long double)(6.6L) << "\n\n";

    // Символьный тип данных
    cout << "char:\n"
         << "  Size: " << sizeof(char) << " bytes\n"
         << "  Min: " << numeric_limits<char>::min() << "\n"
         << "  Max: " << numeric_limits<char>::max() << "\n"
         << "  Example operation: " << char('a') + char('b') << "\n\n";

    // Логический тип данных
    cout << "bool:\n"
         << "  Size: " << sizeof(bool) << " bytes\n"
         << "  Min: " << false << "\n"
         << "  Max: " << true << "\n"
         << "  Example operation: " << (true && false) << "\n";

    return 0;
}

<<<<<<< Updated upstream

//Переменная – это область памяти, предназначенная для хранения значений
//Типы данных:
//Целочисленные (знаковые и беззнаковые)
//•    signed char – 1 байт [-128, 127]
//•    Unsigned char  - 1 байт [0, 255]
//•    Short – 2 байта [-32768, 32767]
//•    Unsigned short – 2 байта [0, 65535]
//•    Int – 4 байта [-2^31, 2^31-1]
//•    Unsigned int – 4 байта [0, 2^32-1]
//•    Long – 4/8 байт [-2^63, 2^63-1]
//•    Unsigned long – 4/8 байт [0, 2^64-1]
//Вещественные:
//•    Float – 4 байта [±10^-38, ±10^38]
//•    Double – 8 байт [±10^-308, ±10^308]
//•    Long double – 8/16 байт [±10^-4932, ±10^4932]
//Символьный:
//•    Char – 1 байт [0, 255]
//Логический:
//•    Bool – 1 байт [true, false]
=======
// Переменная – это область памяти, предназначенная для хранения значений
// Типы данных: 
// Целочисленные (знаковые и беззнаковые)
// •	signed char – 1 байт [-128, 127]
// •	Unsigned char  - 1 байт [0, 255]
// •	Short – 2 байта [-32768, 32767]
// •	Unsigned short – 2 байта [0, 65535]
// •	Int – 4 байта [-2^31, 2^31-1]
// •	Unsigned int – 4 байта [0, 2^32-1]
// •	Long – 4/8 байт [-2^63, 2^63-1]
// •	Unsigned long – 4/8 байт [0, 2^64-1]
// Вещественные: 
// •	Float – 4 байта [±10^-38, ±10^38]
// •	Double – 8 байт [±10^-308, ±10^308]
// •	Long double – 8/16 байт [±10^-4932, ±10^4932]
// Символьный:
// •	Char – 1 байт [0, 255]
// Логический:
// •	Bool – 1 байт [true, false]
>>>>>>> Stashed changes
