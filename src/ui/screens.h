#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl/lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _groups_t {
    lv_group_t *encoder_group;
} groups_t;

extern groups_t groups;

void ui_create_groups();

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *screen_1;
    lv_obj_t *screen_2;
    lv_obj_t *screen_3;
    lv_obj_t *screen_4;
    lv_obj_t *screen_5;
    lv_obj_t *screen_6;
    lv_obj_t *screen_7;
    lv_obj_t *screen_8;
    lv_obj_t *screen_9;
    lv_obj_t *screen_10;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj3;
    lv_obj_t *obj4;
    lv_obj_t *obj5;
    lv_obj_t *obj6;
    lv_obj_t *obj7;
    lv_obj_t *obj8;
    lv_obj_t *obj9;
    lv_obj_t *obj10;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SCREEN_1 = 2,
    SCREEN_ID_SCREEN_2 = 3,
    SCREEN_ID_SCREEN_3 = 4,
    SCREEN_ID_SCREEN_4 = 5,
    SCREEN_ID_SCREEN_5 = 6,
    SCREEN_ID_SCREEN_6 = 7,
    SCREEN_ID_SCREEN_7 = 8,
    SCREEN_ID_SCREEN_8 = 9,
    SCREEN_ID_SCREEN_9 = 10,
    SCREEN_ID_SCREEN_10 = 11,
};

void create_screen_main();
void tick_screen_main();

void create_screen_screen_1();
void tick_screen_screen_1();

void create_screen_screen_2();
void tick_screen_screen_2();

void create_screen_screen_3();
void tick_screen_screen_3();

void create_screen_screen_4();
void tick_screen_screen_4();

void create_screen_screen_5();
void tick_screen_screen_5();

void create_screen_screen_6();
void tick_screen_screen_6();

void create_screen_screen_7();
void tick_screen_screen_7();

void create_screen_screen_8();
void tick_screen_screen_8();

void create_screen_screen_9();
void tick_screen_screen_9();

void create_screen_screen_10();
void tick_screen_screen_10();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/