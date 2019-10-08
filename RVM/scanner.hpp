#pragma once

#include <string>
#include <fstream>

#include "error.hpp"

class Scanner
{
private:
	const unsigned c_lineSize = 128;
	std::ifstream file;
	unsigned lineNumber;

public:
	Scanner() {}
	Scanner(const std::string& c_filename) : file(c_filename) {}
	Scanner(const char* const c_filename) : file(c_filename) {}

	~Scanner() { file.close(); }
	
	void open(const std::string&);
	void open(const char* const);
	
	bool isEOF() noexcept;

	std::string getLine(std::string&) noexcept;
	unsigned getLineNumber();
};