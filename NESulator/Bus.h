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
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};