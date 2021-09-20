/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "setup_scr_screen1.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

static lv_obj_t* tem1;
static lv_task_t* task1;
static lv_obj_t* tem2;
static lv_obj_t* bar1;
static lv_obj_t* bar2;
static lv_obj_t* time1;
char taketime[50];
lv_task_t* setup_scr_scr1()
{ return task1;
}

void dataup()
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
	
	lv_label_set_text(time1,taketime);

	int r1=(rand()%101)+1;
	char temp1[5];
	sprintf(temp1,"%d",r1);
	lv_bar_set_value(bar1, r1, LV_ANIM_ON);
	lv_label_set_text(tem1,temp1);
	int r2=(rand()%101)+1;
	char temp2[5];
	sprintf(temp2,"%d",r2);
	lv_label_set_text(tem2,temp2);
	lv_bar_set_value(bar2, r2, LV_ANIM_ON);


}

void setup_scr_screen1(lv_ui *ui){

	//Write codes screen1
	ui->screen1 = lv_obj_create(NULL, NULL);

	//Write codes screen1_img0
	ui->screen1_img0 = lv_img_create(ui->screen1, NULL);

	//Write style LV_IMG_PART_MAIN for screen1_img0
	static lv_style_t style_screen1_img0_main;
	lv_style_init(&style_screen1_img0_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_img0_main
	lv_style_set_image_recolor(&style_screen1_img0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen1_img0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen1_img0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_img0, LV_IMG_PART_MAIN, &style_screen1_img0_main);
	lv_obj_set_pos(ui->screen1_img0, -2, 0);
	lv_obj_set_size(ui->screen1_img0, 482, 70);
	lv_obj_set_click(ui->screen1_img0, true);
	lv_img_set_src(ui->screen1_img0,&_solidcolor_alpha_482x70);
	lv_img_set_pivot(ui->screen1_img0, 0,0);
	lv_img_set_angle(ui->screen1_img0, 0);

	//Write codes screen1_label1
	ui->screen1_label1 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label1, "DASHBOARD");
	lv_label_set_long_mode(ui->screen1_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label1
	static lv_style_t style_screen1_label1_main;
	lv_style_init(&style_screen1_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label1_main
	lv_style_set_radius(&style_screen1_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label1_main, LV_STATE_DEFAULT, lv_color_make(0x1f, 0x48, 0xdb));
	lv_style_set_text_font(&style_screen1_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_screen1_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label1, LV_LABEL_PART_MAIN, &style_screen1_label1_main);
	lv_obj_set_pos(ui->screen1_label1, 24, 18);
	lv_obj_set_size(ui->screen1_label1, 194, 0);

	//Write codes screen1_label2
	ui->screen1_label2 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label2, "10:00 PM");
	lv_label_set_long_mode(ui->screen1_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label2
	static lv_style_t style_screen1_label2_main;
	lv_style_init(&style_screen1_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label2_main
	lv_style_set_radius(&style_screen1_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label2_main, LV_STATE_DEFAULT, lv_color_make(0x18, 0x3d, 0xf7));
	lv_style_set_text_font(&style_screen1_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_18);
	lv_style_set_text_letter_space(&style_screen1_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label2, LV_LABEL_PART_MAIN, &style_screen1_label2_main);
	lv_obj_set_pos(ui->screen1_label2, 369, 19);
	lv_obj_set_size(ui->screen1_label2, 100, 0);

	//Write codes screen1_label3
	ui->screen1_label3 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label3, "MOTOR 1 TEMPERATURE");
	lv_label_set_long_mode(ui->screen1_label3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label3
	static lv_style_t style_screen1_label3_main;
	lv_style_init(&style_screen1_label3_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label3_main
	lv_style_set_radius(&style_screen1_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label3_main, LV_STATE_DEFAULT, lv_color_make(0x2f, 0x06, 0xf9));
	lv_style_set_text_font(&style_screen1_label3_main, LV_STATE_DEFAULT, &lv_font_simsun_14);
	lv_style_set_text_letter_space(&style_screen1_label3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label3, LV_LABEL_PART_MAIN, &style_screen1_label3_main);
	lv_obj_set_pos(ui->screen1_label3, 19, 89);
	lv_obj_set_size(ui->screen1_label3, 237, 0);

	//Write codes screen1_label5
	ui->screen1_label5 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label5, "MOTOR 2 TEMPERATURE");
	lv_label_set_long_mode(ui->screen1_label5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label5, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label5
	static lv_style_t style_screen1_label5_main;
	lv_style_init(&style_screen1_label5_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label5_main
	lv_style_set_radius(&style_screen1_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label5_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x08, 0xff));
	lv_style_set_text_font(&style_screen1_label5_main, LV_STATE_DEFAULT, &lv_font_simsun_14);
	lv_style_set_text_letter_space(&style_screen1_label5_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label5, LV_LABEL_PART_MAIN, &style_screen1_label5_main);
	lv_obj_set_pos(ui->screen1_label5, 22, 151);
	lv_obj_set_size(ui->screen1_label5, 233, 0);

	//Write codes screen1_label6
	ui->screen1_label6 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label6, "72.36 °C");
	lv_label_set_long_mode(ui->screen1_label6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label6, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label6
	static lv_style_t style_screen1_label6_main;
	lv_style_init(&style_screen1_label6_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label6_main
	lv_style_set_radius(&style_screen1_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x1e, 0xff));
	lv_style_set_text_font(&style_screen1_label6_main, LV_STATE_DEFAULT, &lv_font_simsun_14);
	lv_style_set_text_letter_space(&style_screen1_label6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label6, LV_LABEL_PART_MAIN, &style_screen1_label6_main);
	lv_obj_set_pos(ui->screen1_label6, 22, 120);
	lv_obj_set_size(ui->screen1_label6, 100, 0);

	//Write codes screen1_bar9
	ui->screen1_bar9 = lv_bar_create(ui->screen1, NULL);

	//Write style LV_BAR_PART_BG for screen1_bar9
	static lv_style_t style_screen1_bar9_bg;
	lv_style_init(&style_screen1_bar9_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen1_bar9_bg
	lv_style_set_radius(&style_screen1_bar9_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen1_bar9_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen1_bar9_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen1_bar9_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_bar9_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_bar9, LV_BAR_PART_BG, &style_screen1_bar9_bg);

	//Write style LV_BAR_PART_INDIC for screen1_bar9
	static lv_style_t style_screen1_bar9_indic;
	lv_style_init(&style_screen1_bar9_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen1_bar9_indic
	lv_style_set_radius(&style_screen1_bar9_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen1_bar9_indic, LV_STATE_DEFAULT, lv_color_make(0x0a, 0x65, 0xdb));
	lv_style_set_bg_grad_color(&style_screen1_bar9_indic, LV_STATE_DEFAULT, lv_color_make(0x01, 0x79, 0xf9));
	lv_style_set_bg_grad_dir(&style_screen1_bar9_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_bar9_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_bar9, LV_BAR_PART_INDIC, &style_screen1_bar9_indic);
	lv_obj_set_pos(ui->screen1_bar9, 144, 122);
	lv_obj_set_size(ui->screen1_bar9, 158, 7);
	lv_bar_set_anim_time(ui->screen1_bar9,1000);
	lv_bar_set_value(ui->screen1_bar9,72,LV_ANIM_OFF);
	lv_bar_set_range(ui->screen1_bar9,0,100);

	//Write codes screen1_label7
	ui->screen1_label7 = lv_label_create(ui->screen1, NULL);
	lv_label_set_text(ui->screen1_label7, "83.86 °C");
	lv_label_set_long_mode(ui->screen1_label7, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen1_label7, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen1_label7
	static lv_style_t style_screen1_label7_main;
	lv_style_init(&style_screen1_label7_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_label7_main
	lv_style_set_radius(&style_screen1_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen1_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen1_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_label7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_label7_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen1_label7_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x08, 0xff));
	lv_style_set_text_font(&style_screen1_label7_main, LV_STATE_DEFAULT, &lv_font_simsun_14);
	lv_style_set_text_letter_space(&style_screen1_label7_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen1_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen1_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen1_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen1_label7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen1_label7, LV_LABEL_PART_MAIN, &style_screen1_label7_main);
	lv_obj_set_pos(ui->screen1_label7, 24, 174);
	lv_obj_set_size(ui->screen1_label7, 100, 0);

	//Write codes screen1_bar8
	ui->screen1_bar8 = lv_bar_create(ui->screen1, NULL);

	//Write style LV_BAR_PART_BG for screen1_bar8
	static lv_style_t style_screen1_bar8_bg;
	lv_style_init(&style_screen1_bar8_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen1_bar8_bg
	lv_style_set_radius(&style_screen1_bar8_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen1_bar8_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen1_bar8_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen1_bar8_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_bar8_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_bar8, LV_BAR_PART_BG, &style_screen1_bar8_bg);

	//Write style LV_BAR_PART_INDIC for screen1_bar8
	static lv_style_t style_screen1_bar8_indic;
	lv_style_init(&style_screen1_bar8_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen1_bar8_indic
	lv_style_set_radius(&style_screen1_bar8_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen1_bar8_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0x36, 0xfa));
	lv_style_set_bg_grad_color(&style_screen1_bar8_indic, LV_STATE_DEFAULT, lv_color_make(0x00, 0x40, 0xff));
	lv_style_set_bg_grad_dir(&style_screen1_bar8_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen1_bar8_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_bar8, LV_BAR_PART_INDIC, &style_screen1_bar8_indic);
	lv_obj_set_pos(ui->screen1_bar8, 143, 175);
	lv_obj_set_size(ui->screen1_bar8, 200, 7);
	lv_bar_set_anim_time(ui->screen1_bar8,1000);
	lv_bar_set_value(ui->screen1_bar8,83,LV_ANIM_OFF);
	lv_bar_set_range(ui->screen1_bar8,0,100);

	//Write codes screen1_imgbtn9
	ui->screen1_imgbtn9 = lv_imgbtn_create(ui->screen1, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen1_imgbtn9
	static lv_style_t style_screen1_imgbtn9_main;
	lv_style_init(&style_screen1_imgbtn9_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_imgbtn9_main
	lv_style_set_text_color(&style_screen1_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen1_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen1_imgbtn9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen1_imgbtn9_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_imgbtn9, LV_IMGBTN_PART_MAIN, &style_screen1_imgbtn9_main);
	lv_obj_set_pos(ui->screen1_imgbtn9, 34, 224);
	lv_obj_set_size(ui->screen1_imgbtn9, 53, 41);
	lv_imgbtn_set_src(ui->screen1_imgbtn9,LV_BTN_STATE_RELEASED,&_graph_alpha_53x41);
	lv_imgbtn_set_checkable(ui->screen1_imgbtn9, true);

	//Write codes screen1_imgbtn10
	ui->screen1_imgbtn10 = lv_imgbtn_create(ui->screen1, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen1_imgbtn10
	static lv_style_t style_screen1_imgbtn10_main;
	lv_style_init(&style_screen1_imgbtn10_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_imgbtn10_main
	lv_style_set_text_color(&style_screen1_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen1_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen1_imgbtn10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen1_imgbtn10_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_imgbtn10, LV_IMGBTN_PART_MAIN, &style_screen1_imgbtn10_main);
	lv_obj_set_pos(ui->screen1_imgbtn10, 405, 223);
	lv_obj_set_size(ui->screen1_imgbtn10, 50, 43);
	lv_imgbtn_set_src(ui->screen1_imgbtn10,LV_BTN_STATE_RELEASED,&_back_alpha_50x43);
	lv_imgbtn_set_checkable(ui->screen1_imgbtn10, true);

	//Write codes screen1_imgbtn11
	ui->screen1_imgbtn11 = lv_imgbtn_create(ui->screen1, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen1_imgbtn11
	static lv_style_t style_screen1_imgbtn11_main;
	lv_style_init(&style_screen1_imgbtn11_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_imgbtn11_main
	lv_style_set_text_color(&style_screen1_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen1_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen1_imgbtn11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen1_imgbtn11_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_imgbtn11, LV_IMGBTN_PART_MAIN, &style_screen1_imgbtn11_main);
	lv_obj_set_pos(ui->screen1_imgbtn11, 281, 221);
	lv_obj_set_size(ui->screen1_imgbtn11, 47, 43);
	lv_imgbtn_set_src(ui->screen1_imgbtn11,LV_BTN_STATE_RELEASED,&_settings_alpha_47x43);
	lv_imgbtn_set_checkable(ui->screen1_imgbtn11, true);

	//Write codes screen1_imgbtn12
	ui->screen1_imgbtn12 = lv_imgbtn_create(ui->screen1, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen1_imgbtn12
	static lv_style_t style_screen1_imgbtn12_main;
	lv_style_init(&style_screen1_imgbtn12_main);

	//Write style state: LV_STATE_DEFAULT for style_screen1_imgbtn12_main
	lv_style_set_text_color(&style_screen1_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen1_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen1_imgbtn12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen1_imgbtn12_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen1_imgbtn12, LV_IMGBTN_PART_MAIN, &style_screen1_imgbtn12_main);
	lv_obj_set_pos(ui->screen1_imgbtn12, 152, 220);
	lv_obj_set_size(ui->screen1_imgbtn12, 47, 45);
	lv_imgbtn_set_src(ui->screen1_imgbtn12,LV_BTN_STATE_RELEASED,&_representation_alpha_47x45);
	lv_imgbtn_set_checkable(ui->screen1_imgbtn12, true);
//edit
	tem1=ui->screen1_label6;
	tem2=ui->screen1_label7;
	bar1=ui->screen1_bar9;
	bar2=ui->screen1_bar8;
	time1=ui->screen1_label2;
	task1=lv_task_create(dataup,1000,LV_TASK_PRIO_LOW,tem1);
	//Init events for screen
	events_init_screen1(ui);
}
