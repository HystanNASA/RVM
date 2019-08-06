#pragma once

#include <iostream> // Fix: temporary
#include <vector>
#include <unordered_map>

#include "instruction.hpp"
#include "error.hpp"

class Parser
{
private:
	struct jumpTableNode 
	{ void* location; int8_t value; };

	std::unordered_map<std::string, uint8_t> symbolTable; // Fix: Think of type
	std::unordered_map<std::string, jumpTableNode> jumpTable;
	std::vector<uint8_t> instructions;

	unsigned currentLocation;

public: 
	Parser() : currentLocation(0) {}

public:
	void parse(std::vector<Token>&);

private:
};