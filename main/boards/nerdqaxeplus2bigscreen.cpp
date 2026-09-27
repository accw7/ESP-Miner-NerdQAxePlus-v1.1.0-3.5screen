#include "board.h"
#include "nerdqaxeplus2bigscreen.h"

static const char* TAG = "nerdqaxeplus2bigscreen";

NerdQaxePlus2BigScreen::NerdQaxePlus2BigScreen() : NerdQaxePlus2() {
    // The parent's theme assignment is guarded by #ifdef NERDQAXEPLUS2,
    // which doesn't fire for our BOARD name — so set it explicitly here.
    m_theme = new ThemeNerdqaxeplus2();

    m_deviceModel = "NerdQAxe++ (3.5in screen)";
    m_miningAgent = m_deviceModel;
}

bool NerdQaxePlus2BigScreen::isFlipScreenEnabled() {
    return !Board::isFlipScreenEnabled();
}