#include "ColorHelper.h"

bool ColorHelper::isLightPalette(const QPalette &pal)
{
    auto lightnessText = pal.color(QPalette::WindowText).toHsl().lightness();
    auto lightnessWindow = pal.color(QPalette::Window).toHsl().lightness();
    return lightnessText < lightnessWindow;
}
