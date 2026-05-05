#include <iostream>
#include "WordSearch.h"

WordSearch::WordSearch(const std::string& puzzleFile, const std::string& dictionaryFile) :
	_puzzleFile(puzzleFile), _dictionaryFile(dictionaryFile) 
{
}

uint32_t WordSearch::createSimplePuzzle(std::chrono::microseconds& duration)
{
	std::cout << "Creating simple puzzle..." << std::endl;
	uint32_t byteSize = 0;
	const auto start = std::chrono::high_resolution_clock::now();

	// Add code here

	duration = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
	return byteSize;
}

uint32_t WordSearch::createAdvancedPuzzle(std::chrono::microseconds& duration)
{
	std::cout << "Creating advanced puzzle..." << std::endl;
	uint32_t byteSize = 0;
	const auto start = std::chrono::high_resolution_clock::now();

	// Add code here

	duration = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
	return byteSize;
}

uint32_t WordSearch::createSimpleDictionary(std::chrono::microseconds& duration)
{
	std::cout << "Creating simple dictionary..." << std::endl;
	uint32_t byteSize = 0;
	const auto start = std::chrono::high_resolution_clock::now();

	// Add code here

	duration = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
	return byteSize;
}

uint32_t WordSearch::createAdvancedDictionary(std::chrono::microseconds& duration)
{
	std::cout << "Creating advanced dictionary..." << std::endl;
	uint32_t byteSize = 0;
	const auto start = std::chrono::high_resolution_clock::now();

	// Add code here

	duration = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
	return byteSize;
}

void WordSearch::solvePuzzle(std::chrono::microseconds& duration)
{
	std::cout << "Solving puzzle..." << std::endl;
	const auto start = std::chrono::high_resolution_clock::now();

	// Add code here

	duration = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::high_resolution_clock::now() - start);
}

void WordSearch::outputResults(const std::string& outputFile, const PerformanceResult& data)
{
	std::cout << "Outputting results...\n" << std::endl;
	
	// Add code here
}
