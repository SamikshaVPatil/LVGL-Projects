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
	lv_obj_t *screen_table0;
	lv_obj_t *screen_imgbtn1;
	lv_obj_t *screen_imgbtn1_label;
	lv_obj_t *screen_imgbtn2;
	lv_obj_t *screen_imgbtn2_label;
	lv_obj_t *screen_imgbtn4;
	lv_obj_t *screen_imgbtn4_label;
	lv_obj_t *screen_imgbtn5;
	lv_obj_t *screen_imgbtn5_label;
	lv_obj_t *screen_imgbtn6;
	lv_obj_t *screen_imgbtn6_label;
	lv_obj_t *screen_label7;
	lv_obj_t *screen_label8;
	lv_obj_t *screen_label9;
	lv_obj_t *screen_label10;
	lv_obj_t *screen_label11;
	lv_obj_t *screen_label12;
	lv_obj_t *screen_imgbtn12;
	lv_obj_t *screen_imgbtn12_label;
	lv_obj_t *app_order_sc;
	lv_obj_t *app_order_sc_table0;
	lv_obj_t *app_order_sc_imgbtn1;
	lv_obj_t *app_order_sc_imgbtn1_label;
	lv_obj_t *app_order_sc_imgbtn2;
	lv_obj_t *app_order_sc_imgbtn2_label;
	lv_obj_t *app_order_sc_imgbtn3;
	lv_obj_t *app_order_sc_imgbtn3_label;
	lv_obj_t *app_order_sc_imgbtn4;
	lv_obj_t *app_order_sc_imgbtn4_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
void setup_scr_app_order_sc(lv_ui *ui);
LV_IMG_DECLARE(_uber_alpha_62x50);
LV_IMG_DECLARE(_redbus_alpha_70x50);
LV_IMG_DECLARE(_paymode_alpha_54x40);
LV_IMG_DECLARE(_print_alpha_50x47);
LV_IMG_DECLARE(_undo_alpha_50x50);
LV_IMG_DECLARE(_ebll_alpha_50x46);
LV_IMG_DECLARE(_order_alpha_50x47);
LV_IMG_DECLARE(_undo_alpha_40x40);
LV_IMG_DECLARE(_next_alpha_52x33);
LV_IMG_DECLARE(_sig_alpha_72x50);

#ifdef __cplusplus
}
#endif
#endif