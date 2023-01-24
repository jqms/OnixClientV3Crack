#pragma once
#include <ostream>

enum class Color {
	Black = 0,
	Red,
	Green,
	Yellow,
	Blue,
	Magenta,
	Cyan,
	White,

	BrightBlack,
	BrightRed,
	BrightGreen,
	BrightYellow,
	BrightBlue,
	BrightMagenta,
	BrightCyan,
	BrightWhite
};

inline std::ostream& operator << (std::ostream& stream, Color colour) {
	if (static_cast<int>(colour) >= static_cast<int>(Color::BrightBlack))
		return stream << "\x1B[" << (static_cast<int>(colour) - static_cast<int>(Color::BrightBlack)) + 90 << "m";
	else
		return stream << "\x1B[" << static_cast<int>(colour) + 30 << "m";
}