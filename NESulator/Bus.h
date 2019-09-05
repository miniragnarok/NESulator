#pragma once
#include <cstdint>
#include <array>

#include "CPU6502.h"

class Bus
{
public:
	Bus();
	~Bus();

public: // Devices on bus
	CPU6502 cpu;

	// Fake RAM for this part of the series
	std::array<uint8_t, 64 * 1024> ram;

public: // Bus Read & Write
	uint8_t readByte(uint16_t addr, bool bReadOnly = false);
	uint16_t readWord(uint16_t addr, bool bReadOnly = false);
	
	void writeByte(uint16_t addr, uint8_t data);
	void writeWord(uint16_t addr, uint16_t data);
};