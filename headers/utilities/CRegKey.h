#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MobileNetworking.dll by Windissect. 4 member(s).
namespace ATL {
class CRegKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CRegKey@ATL@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z
    long Create(HKEY__*, unsigned short const *, unsigned short *, unsigned long, unsigned long, _SECURITY_ATTRIBUTES *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringValue@CRegKey@ATL@@QEAAJPEBG0K@Z
    long SetStringValue(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegKey@ATL@@QEAA@XZ
    ~CRegKey();
};
} // namespace ATL
