#pragma once

#include "board.h"
#include "nerdqaxeplus2.h"

class NerdQaxePlus2BigScreen : public NerdQaxePlus2 {
  public:
    NerdQaxePlus2BigScreen();

    // Display is physically mounted rotated 180° — invert flip-screen toggle
    virtual bool isFlipScreenEnabled() override;

    // 3.5" 480x320 panel, no GRAM centering gap needed
    virtual int getLCDWidth()             override { return 480;            }
    virtual int getLCDHeight()            override { return 320;            }
    virtual int getLCDYGap()              override { return 0;              }
    virtual uint32_t getLCDPixelClockHz() override { return 480 * 320 * 80; }
};