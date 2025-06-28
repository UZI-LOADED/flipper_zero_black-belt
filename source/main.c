
#include <furi.h>
#include <gui/gui.h>
#include <notification/notification_messages.h>

int32_t blackbat_app(void* p) {
    UNUSED(p);
    NotificationApp* notification = furi_record_open("notification");
    notification_message_block(notification, &sequence_blink_red_10);
    furi_record_close("notification");

    DialogsApp* dialogs = furi_record_open("dialogs");
    dialog_message_show_storage(dialogs, "🦇 BlackBat 2030\nUniversal Card Ready");
    furi_record_close("dialogs");

    return 0;
}
