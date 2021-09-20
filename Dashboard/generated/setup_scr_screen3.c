/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "setup_scr_screen3.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

static lv_task_t* task3;
static lv_obj_t* time3;
char taketime[50];

lv_task_t* setup_scr_scr3()
{ return task3;
}

void dataupdt()
{
	int hours, minutes;
 	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
	hours = local->tm_hour;         // get hours since midnight (0-23)
        minutes = local->tm_min;        // get minutes passed after the hour (0-59)

   	 if (hours < 12) {    // before midday
		sprintf(taketime,"%02d:%02d AM",hours,minutes);
   		 }
   	 else {    // after midday
		sprintf(taketime,"%02d:%02d PM",hours-12,minutes);
 		}
	
	lv_label_set_text(time3,taketime);
}

void setup_scr_screen3(lv_ui *ui){

	//Write codes screen3
	ui->screen3 = lv_obj_create(NULL, NULL);

	//Write codes screen3_img0
	ui->screen3_img0 = lv_img_create(ui->screen3, NULL);

	//Write style LV_IMG_PART_MAIN for screen3_img0
	static lv_style_t style_screen3_img0_main;
	lv_style_init(&style_screen3_img0_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_img0_main
	lv_style_set_image_recolor(&style_screen3_img0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen3_img0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen3_img0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_img0, LV_IMG_PART_MAIN, &style_screen3_img0_main);
	lv_obj_set_pos(ui->screen3_img0, 0, 0);
	lv_obj_set_size(ui->screen3_img0, 482, 73);
	lv_obj_set_click(ui->screen3_img0, true);
	lv_img_set_src(ui->screen3_img0,&_solidcolor_alpha_482x73);
	lv_img_set_pivot(ui->screen3_img0, 0,0);
	lv_img_set_angle(ui->screen3_img0, 0);

	//Write codes screen3_label1
	ui->screen3_label1 = lv_label_create(ui->screen3, NULL);
	lv_label_set_text(ui->screen3_label1, "TOGGLE");
	lv_label_set_long_mode(ui->screen3_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen3_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen3_label1
	static lv_style_t style_screen3_label1_main;
	lv_style_init(&style_screen3_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_label1_main
	lv_style_set_radius(&style_screen3_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen3_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen3_label1_main, LV_STATE_DEFAULT, lv_color_make(0x31, 0x01, 0xdf));
	lv_style_set_text_font(&style_screen3_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_screen3_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen3_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen3_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen3_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen3_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen3_label1, LV_LABEL_PART_MAIN, &style_screen3_label1_main);
	lv_obj_set_pos(ui->screen3_label1, 48, 22);
	lv_obj_set_size(ui->screen3_label1, 118, 0);

	//Write codes screen3_label2
	ui->screen3_label2 = lv_label_create(ui->screen3, NULL);
	lv_label_set_text(ui->screen3_label2, "10:00 PM");
	lv_label_set_long_mode(ui->screen3_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen3_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen3_label2
	static lv_style_t style_screen3_label2_main;
	lv_style_init(&style_screen3_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_label2_main
	lv_style_set_radius(&style_screen3_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen3_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen3_label2_main, LV_STATE_DEFAULT, lv_color_make(0x23, 0x06, 0xf9));
	lv_style_set_text_font(&style_screen3_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_screen3_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen3_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen3_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen3_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen3_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen3_label2, LV_LABEL_PART_MAIN, &style_screen3_label2_main);
	lv_obj_set_pos(ui->screen3_label2, 364, 21);
	lv_obj_set_size(ui->screen3_label2, 100, 0);

	//Write codes screen3_label3
	ui->screen3_label3 = lv_label_create(ui->screen3, NULL);
	lv_label_set_text(ui->screen3_label3, "COOLING ");
	lv_label_set_long_mode(ui->screen3_label3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen3_label3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen3_label3
	static lv_style_t style_screen3_label3_main;
	lv_style_init(&style_screen3_label3_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_label3_main
	lv_style_set_radius(&style_screen3_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen3_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_label3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_label3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen3_label3_main, LV_STATE_DEFAULT, lv_color_make(0x43, 0x06, 0xea));
	lv_style_set_text_font(&style_screen3_label3_main, LV_STATE_DEFAULT, &lv_font_simsun_20);
	lv_style_set_text_letter_space(&style_screen3_label3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen3_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen3_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen3_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen3_label3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen3_label3, LV_LABEL_PART_MAIN, &style_screen3_label3_main);
	lv_obj_set_pos(ui->screen3_label3, 101, 91);
	lv_obj_set_size(ui->screen3_label3, 126, 0);

	//Write codes screen3_sw4
	ui->screen3_sw4 = lv_switch_create(ui->screen3, NULL);

	//Write style LV_SWITCH_PART_BG for screen3_sw4
	static lv_style_t style_screen3_sw4_bg;
	lv_style_init(&style_screen3_sw4_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw4_bg
	lv_style_set_radius(&style_screen3_sw4_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw4_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen3_sw4_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen3_sw4_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw4_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw4, LV_SWITCH_PART_BG, &style_screen3_sw4_bg);

	//Write style LV_SWITCH_PART_INDIC for screen3_sw4
	static lv_style_t style_screen3_sw4_indic;
	lv_style_init(&style_screen3_sw4_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw4_indic
	lv_style_set_radius(&style_screen3_sw4_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw4_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_screen3_sw4_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_screen3_sw4_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw4_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw4, LV_SWITCH_PART_INDIC, &style_screen3_sw4_indic);

	//Write style LV_SWITCH_PART_KNOB for screen3_sw4
	static lv_style_t style_screen3_sw4_knob;
	lv_style_init(&style_screen3_sw4_knob);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw4_knob
	lv_style_set_radius(&style_screen3_sw4_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw4_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_sw4_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_sw4_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw4_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw4, LV_SWITCH_PART_KNOB, &style_screen3_sw4_knob);
	lv_obj_set_pos(ui->screen3_sw4, 268, 91);
	lv_obj_set_size(ui->screen3_sw4, 42, 20);
	lv_switch_set_anim_time(ui->screen3_sw4, 600);

	//Write codes screen3_label5
	ui->screen3_label5 = lv_label_create(ui->screen3, NULL);
	lv_label_set_text(ui->screen3_label5, "MOTOR 1");
	lv_label_set_long_mode(ui->screen3_label5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen3_label5, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen3_label5
	static lv_style_t style_screen3_label5_main;
	lv_style_init(&style_screen3_label5_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_label5_main
	lv_style_set_radius(&style_screen3_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen3_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_label5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_label5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen3_label5_main, LV_STATE_DEFAULT, lv_color_make(0x44, 0x0c, 0xdf));
	lv_style_set_text_font(&style_screen3_label5_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_screen3_label5_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen3_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen3_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen3_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen3_label5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen3_label5, LV_LABEL_PART_MAIN, &style_screen3_label5_main);
	lv_obj_set_pos(ui->screen3_label5, 115, 129);
	lv_obj_set_size(ui->screen3_label5, 100, 0);

	//Write codes screen3_sw6
	ui->screen3_sw6 = lv_switch_create(ui->screen3, NULL);

	//Write style LV_SWITCH_PART_BG for screen3_sw6
	static lv_style_t style_screen3_sw6_bg;
	lv_style_init(&style_screen3_sw6_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw6_bg
	lv_style_set_radius(&style_screen3_sw6_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw6_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen3_sw6_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen3_sw6_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw6_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw6, LV_SWITCH_PART_BG, &style_screen3_sw6_bg);

	//Write style LV_SWITCH_PART_INDIC for screen3_sw6
	static lv_style_t style_screen3_sw6_indic;
	lv_style_init(&style_screen3_sw6_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw6_indic
	lv_style_set_radius(&style_screen3_sw6_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw6_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_screen3_sw6_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_screen3_sw6_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw6_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw6, LV_SWITCH_PART_INDIC, &style_screen3_sw6_indic);

	//Write style LV_SWITCH_PART_KNOB for screen3_sw6
	static lv_style_t style_screen3_sw6_knob;
	lv_style_init(&style_screen3_sw6_knob);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw6_knob
	lv_style_set_radius(&style_screen3_sw6_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw6_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_sw6_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_sw6_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw6_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw6, LV_SWITCH_PART_KNOB, &style_screen3_sw6_knob);
	lv_obj_set_pos(ui->screen3_sw6, 270, 127);
	lv_obj_set_size(ui->screen3_sw6, 39, 20);
	lv_switch_set_anim_time(ui->screen3_sw6, 600);

	//Write codes screen3_label7
	ui->screen3_label7 = lv_label_create(ui->screen3, NULL);
	lv_label_set_text(ui->screen3_label7, "MOTOR 2");
	lv_label_set_long_mode(ui->screen3_label7, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen3_label7, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen3_label7
	static lv_style_t style_screen3_label7_main;
	lv_style_init(&style_screen3_label7_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_label7_main
	lv_style_set_radius(&style_screen3_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen3_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_label7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_label7_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen3_label7_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0x09, 0xf4));
	lv_style_set_text_font(&style_screen3_label7_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_screen3_label7_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen3_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen3_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen3_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen3_label7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen3_label7, LV_LABEL_PART_MAIN, &style_screen3_label7_main);
	lv_obj_set_pos(ui->screen3_label7, 116, 169);
	lv_obj_set_size(ui->screen3_label7, 100, 0);

	//Write codes screen3_sw8
	ui->screen3_sw8 = lv_switch_create(ui->screen3, NULL);

	//Write style LV_SWITCH_PART_BG for screen3_sw8
	static lv_style_t style_screen3_sw8_bg;
	lv_style_init(&style_screen3_sw8_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw8_bg
	lv_style_set_radius(&style_screen3_sw8_bg, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw8_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen3_sw8_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen3_sw8_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw8_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw8, LV_SWITCH_PART_BG, &style_screen3_sw8_bg);

	//Write style LV_SWITCH_PART_INDIC for screen3_sw8
	static lv_style_t style_screen3_sw8_indic;
	lv_style_init(&style_screen3_sw8_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw8_indic
	lv_style_set_radius(&style_screen3_sw8_indic, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw8_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_color(&style_screen3_sw8_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0xa1, 0xb5));
	lv_style_set_bg_grad_dir(&style_screen3_sw8_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw8_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw8, LV_SWITCH_PART_INDIC, &style_screen3_sw8_indic);

	//Write style LV_SWITCH_PART_KNOB for screen3_sw8
	static lv_style_t style_screen3_sw8_knob;
	lv_style_init(&style_screen3_sw8_knob);

	//Write style state: LV_STATE_DEFAULT for style_screen3_sw8_knob
	lv_style_set_radius(&style_screen3_sw8_knob, LV_STATE_DEFAULT, 100);
	lv_style_set_bg_color(&style_screen3_sw8_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen3_sw8_knob, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen3_sw8_knob, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen3_sw8_knob, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_sw8, LV_SWITCH_PART_KNOB, &style_screen3_sw8_knob);
	lv_obj_set_pos(ui->screen3_sw8, 269, 170);
	lv_obj_set_size(ui->screen3_sw8, 40, 20);
	lv_switch_set_anim_time(ui->screen3_sw8, 600);

	//Write codes screen3_imgbtn9
	ui->screen3_imgbtn9 = lv_imgbtn_create(ui->screen3, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen3_imgbtn9
	static lv_style_t style_screen3_imgbtn9_main;
	lv_style_init(&style_screen3_imgbtn9_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_imgbtn9_main
	lv_style_set_text_color(&style_screen3_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen3_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen3_imgbtn9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen3_imgbtn9_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_imgbtn9, LV_IMGBTN_PART_MAIN, &style_screen3_imgbtn9_main);
	lv_obj_set_pos(ui->screen3_imgbtn9, 280, 221);
	lv_obj_set_size(ui->screen3_imgbtn9, 50, 43);
	lv_imgbtn_set_src(ui->screen3_imgbtn9,LV_BTN_STATE_RELEASED,&_settings_alpha_50x43);
	lv_imgbtn_set_checkable(ui->screen3_imgbtn9, true);

	//Write codes screen3_imgbtn10
	ui->screen3_imgbtn10 = lv_imgbtn_create(ui->screen3, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen3_imgbtn10
	static lv_style_t style_screen3_imgbtn10_main;
	lv_style_init(&style_screen3_imgbtn10_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_imgbtn10_main
	lv_style_set_text_color(&style_screen3_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen3_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen3_imgbtn10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen3_imgbtn10_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_imgbtn10, LV_IMGBTN_PART_MAIN, &style_screen3_imgbtn10_main);
	lv_obj_set_pos(ui->screen3_imgbtn10, 390, 223);
	lv_obj_set_size(ui->screen3_imgbtn10, 56, 43);
	lv_imgbtn_set_src(ui->screen3_imgbtn10,LV_BTN_STATE_RELEASED,&_back_alpha_56x43);
	lv_imgbtn_set_checkable(ui->screen3_imgbtn10, true);

	//Write codes screen3_imgbtn11
	ui->screen3_imgbtn11 = lv_imgbtn_create(ui->screen3, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen3_imgbtn11
	static lv_style_t style_screen3_imgbtn11_main;
	lv_style_init(&style_screen3_imgbtn11_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_imgbtn11_main
	lv_style_set_text_color(&style_screen3_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen3_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen3_imgbtn11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen3_imgbtn11_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_imgbtn11, LV_IMGBTN_PART_MAIN, &style_screen3_imgbtn11_main);
	lv_obj_set_pos(ui->screen3_imgbtn11, 36, 225);
	lv_obj_set_size(ui->screen3_imgbtn11, 54, 41);
	lv_imgbtn_set_src(ui->screen3_imgbtn11,LV_BTN_STATE_RELEASED,&_graph_alpha_54x41);
	lv_imgbtn_set_checkable(ui->screen3_imgbtn11, true);

	//Write codes screen3_imgbtn12
	ui->screen3_imgbtn12 = lv_imgbtn_create(ui->screen3, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen3_imgbtn12
	static lv_style_t style_screen3_imgbtn12_main;
	lv_style_init(&style_screen3_imgbtn12_main);

	//Write style state: LV_STATE_DEFAULT for style_screen3_imgbtn12_main
	lv_style_set_text_color(&style_screen3_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen3_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen3_imgbtn12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen3_imgbtn12_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen3_imgbtn12, LV_IMGBTN_PART_MAIN, &style_screen3_imgbtn12_main);
	lv_obj_set_pos(ui->screen3_imgbtn12, 154, 221);
	lv_obj_set_size(ui->screen3_imgbtn12, 53, 47);
	lv_imgbtn_set_src(ui->screen3_imgbtn12,LV_BTN_STATE_RELEASED,&_representation_alpha_53x47);
	lv_imgbtn_set_checkable(ui->screen3_imgbtn12, true);

//Edit
	time3=ui->screen3_label2;
	task3=lv_task_create(dataupdt,1000,LV_TASK_PRIO_LOW,time3);

	//Init events for screen
	events_init_screen3(ui);
}
