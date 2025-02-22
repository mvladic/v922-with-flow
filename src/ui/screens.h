#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *screen_1;
    lv_obj_t *screen_2;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SCREEN_1 = 2,
    SCREEN_ID_SCREEN_2 = 3,
};

void create_screen_main();
void delete_screen_main();
void tick_screen_main();

void create_screen_screen_1();
void delete_screen_screen_1();
void tick_screen_screen_1();

void create_screen_screen_2();
void delete_screen_screen_2();
void tick_screen_screen_2();

void create_screen_by_id(enum ScreensEnum screenId);
void delete_screen_by_id(enum ScreensEnum screenId);
void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/