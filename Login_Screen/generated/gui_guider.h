/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen;
	lv_obj_t *screen_label0;
	lv_obj_t *screen_label1;
	lv_obj_t *screen_label2;
	lv_obj_t *screen_unt;
	lv_obj_t *screen_ta4;
	lv_obj_t *screen_btn5;
	lv_obj_t *screen_btn5_label;
	lv_obj_t *screen_btn6;
	lv_obj_t *screen_btn6_label;
	lv_obj_t *screen_img7;
	lv_obj_t *Change_Password;
	lv_obj_t *Change_Password_label0;
	lv_obj_t *Change_Password_label6;
	lv_obj_t *Change_Password_label7;
	lv_obj_t *Change_Password_label8;
	lv_obj_t *Change_Password_ta9;
	lv_obj_t *Change_Password_ta10;
	lv_obj_t *Change_Password_img8;
	lv_obj_t *Change_Password_label10;
	lv_obj_t *Change_Password_ta8;
	lv_obj_t *Change_Password_btn9;
	lv_obj_t *Change_Password_btn9_label;
	lv_obj_t *form;
	lv_obj_t *form_label0;
	lv_obj_t *form_label1;
	lv_obj_t *form_label2;
	lv_obj_t *form_ta3;
	lv_obj_t *form_ta4;
	lv_obj_t *form_label5;
	lv_obj_t *form_label6;
	lv_obj_t *form_ta7;
	lv_obj_t *form_ta8;
	lv_obj_t *form_cb9;
	lv_obj_t *form_cb10;
	lv_obj_t *form_btn11;
	lv_obj_t *form_btn11_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
void setup_scr_Change_Password(lv_ui *ui);
void setup_scr_form(lv_ui *ui);
LV_IMG_DECLARE(_login_alpha_125x100);
LV_IMG_DECLARE(_solidcolor_alpha_130x249);

#ifdef __cplusplus
}
#endif
#endif