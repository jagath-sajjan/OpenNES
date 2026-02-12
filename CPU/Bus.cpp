//
// Created by G M Jagath Sajjan on 11/02/26.
//

#include "Bus.h"

Bus::Bus() {
    // Make CPU Love With Comms Bus
    cpu.ConnectBus(this);

    // Clear RAM Contents
    for (auto &i : ram) i = 0x00;

}

Bus::~Bus() {

}

void Bus::write(uint16_t addr, uint8_t data) {
    if (addr >= 0x0000 && addr <= 0xFFFF)
        ram[addr] = data;
}

uint8_t Bus::read(uint16_t addr, bool bReadOnly) {
    if (addr >= 0x0000 && addr <= 0xFFFF)
        return ram[addr];

    return 0x00;
}
