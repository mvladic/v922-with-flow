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
    lv_obj_t *screen2;
    lv_obj_t *usr1;
    lv_obj_t *usr1__obj0;
    lv_obj_t *usr1__obj0__ubtn2;
    lv_obj_t *usr1__obj0__ubtn1;
    lv_obj_t *usr1__obj0__obj0;
    lv_obj_t *usr1__obj1;
    lv_obj_t *usr1__obj2;
    lv_obj_t *usr1__obj3;
    lv_obj_t *usr2;
    lv_obj_t *usr2__obj0;
    lv_obj_t *usr2__obj0__ubtn2;
    lv_obj_t *usr2__obj0__ubtn1;
    lv_obj_t *usr2__obj0__obj0;
    lv_obj_t *usr2__obj1;
    lv_obj_t *usr2__obj2;
    lv_obj_t *usr2__obj3;
    lv_obj_t *label1;
    lv_obj_t *btn1;
    lv_obj_t *btn2;
    lv_obj_t *label2;
    lv_obj_t *btn3;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SCREEN2 = 2,
    SCREEN_ID_MY_USER_WIDGET = 3,
    SCREEN_ID_MY_USER_WIDGET_2 = 4,
};

void create_screen_main();
void tick_screen_main();

void create_screen_screen2();
void tick_screen_screen2();

void create_user_widget_my_user_widget(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_my_user_widget(void *flowState, int startWidgetIndex);

void create_user_widget_my_user_widget_2(lv_obj_t *parent_obj, void *flowState, int startWidgetIndex);
void tick_user_widget_my_user_widget_2(void *flowState, int startWidgetIndex);

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/