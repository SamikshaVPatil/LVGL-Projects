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
	lv_obj_t *screen1;
	lv_obj_t *screen1_img0;
	lv_obj_t *screen1_label1;
	lv_obj_t *screen1_label2;
	lv_obj_t *screen1_label3;
	lv_obj_t *screen1_label5;
	lv_obj_t *screen1_label6;
	lv_obj_t *screen1_bar9;
	lv_obj_t *screen1_label7;
	lv_obj_t *screen1_bar8;
	lv_obj_t *screen1_imgbtn9;
	lv_obj_t *screen1_imgbtn9_label;
	lv_obj_t *screen1_imgbtn10;
	lv_obj_t *screen1_imgbtn10_label;
	lv_obj_t *screen1_imgbtn11;
	lv_obj_t *screen1_imgbtn11_label;
	lv_obj_t *screen1_imgbtn12;
	lv_obj_t *screen1_imgbtn12_label;
	lv_obj_t *screen2;
	lv_obj_t *screen2_img0;
	lv_obj_t *screen2_label1;
	lv_obj_t *screen2_label2;
	lv_obj_t *screen2_label3;
	lv_obj_t *screen2_label4;
	lv_obj_t *screen2_line5;
	lv_obj_t *screen2_bar6;
	lv_obj_t *screen2_bar7;
	lv_obj_t *screen2_imgbtn8;
	lv_obj_t *screen2_imgbtn8_label;
	lv_obj_t *screen2_imgbtn9;
	lv_obj_t *screen2_imgbtn9_label;
	lv_obj_t *screen2_imgbtn10;
	lv_obj_t *screen2_imgbtn10_label;
	lv_obj_t *screen2_imgbtn11;
	lv_obj_t *screen2_imgbtn11_label;
	lv_obj_t *screen3;
	lv_obj_t *screen3_img0;
	lv_obj_t *screen3_label1;
	lv_obj_t *screen3_label2;
	lv_obj_t *screen3_label3;
	lv_obj_t *screen3_sw4;
	lv_obj_t *screen3_label5;
	lv_obj_t *screen3_sw6;
	lv_obj_t *screen3_label7;
	lv_obj_t *screen3_sw8;
	lv_obj_t *screen3_imgbtn9;
	lv_obj_t *screen3_imgbtn9_label;
	lv_obj_t *screen3_imgbtn10;
	lv_obj_t *screen3_imgbtn10_label;
	lv_obj_t *screen3_imgbtn11;
	lv_obj_t *screen3_imgbtn11_label;
	lv_obj_t *screen3_imgbtn12;
	lv_obj_t *screen3_imgbtn12_label;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen1(lv_ui *ui);
void setup_scr_screen2(lv_ui *ui);
void setup_scr_screen3(lv_ui *ui);
LV_IMG_DECLARE(_back_alpha_50x43);
LV_IMG_DECLARE(_solidcolor_alpha_482x74);
LV_IMG_DECLARE(_graph_alpha_54x41);
LV_IMG_DECLARE(_representation_alpha_47x45);
LV_IMG_DECLARE(_graph_alpha_53x41);
LV_IMG_DECLARE(_settings_alpha_50x43);
LV_IMG_DECLARE(_settings_alpha_47x43);
LV_IMG_DECLARE(_back_alpha_56x43);
LV_IMG_DECLARE(_solidcolor_alpha_482x70);
LV_IMG_DECLARE(_representation_alpha_50x44);
LV_IMG_DECLARE(_solidcolor_alpha_482x73);
LV_IMG_DECLARE(_representation_alpha_53x47);
LV_IMG_DECLARE(_back_alpha_51x41);
LV_IMG_DECLARE(_settings_alpha_44x39);

#ifdef __cplusplus
}
#endif
#endif