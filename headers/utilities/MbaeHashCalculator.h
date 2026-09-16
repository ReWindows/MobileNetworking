#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MobileNetworking.dll by Windissect. 6 member(s).
class MbaeHashCalculator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Calculate@MbaeHashCalculator@@QEAAJPEAG@Z
    long Calculate(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashHexString@MbaeHashCalculator@@QEBAPEBGXZ
    unsigned short const * GetHashHexString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MbaeHashCalculator@@QEAAJXZ
    long Initialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MbaeHashCalculator@@QEAA@PEBG@Z
    MbaeHashCalculator(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MbaeHashCalculator@@QEAA@XZ
    ~MbaeHashCalculator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@MbaeHashCalculator@@AEAAXXZ
    void Cleanup();
};
