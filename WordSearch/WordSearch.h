#pragma once

#include <chrono>
#include <string>

struct PerformanceResult
{
	uint32_t puzzleSize;
	uint32_t dictionarySize;
	std::chrono::microseconds timeToCreatePuzzle;
	std::chrono::microseconds timeToCreateDictionary;
	std::chrono::microseconds timeToSolve;
};

class WordSearch
{
	const std::string _puzzleFile;
	const std::string _dictionaryFile;

public:
	WordSearch(const std::string& puzzleFile, const std::string& dictionaryFile);

	uint32_t createSimplePuzzle(std::chrono::microseconds& duration);
	uint32_t createAdvancedPuzzle(std::chrono::microseconds& duration);
	uint32_t createSimpleDictionary(std::chrono::microseconds& duration);
	uint32_t createAdvancedDictionary(std::chrono::microseconds& duration);

	void solvePuzzle(std::chrono::microseconds& duration);

	void outputResults(const std::string& outputFile, const PerformanceResult& data);
};

