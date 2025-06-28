
#include <furi.h>
#include <gui/gui.h>
#include <gui/view.h>

int32_t blackbat_app(void* p) {
    UNUSED(p);
    furi_hal_light_set(LightRed, 100);
    notification_message(NULL, &sequence_blink_red_10);
    return 0;
}
