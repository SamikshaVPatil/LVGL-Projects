/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "setup_scr_screen2.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

static lv_task_t* task2;
static lv_obj_t* bar3;
static lv_obj_t* bar4;
static lv_obj_t* time2;
char taketime[50];

lv_task_t* setup_scr_scr2()
{ return task2;
}

void dataupd()
{ 	int hours, minutes;
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
	
	lv_label_set_text(time2,taketime);

	int r3=(rand()%101)+1;
	lv_bar_set_value(bar3, r3, LV_ANIM_ON);
	
	int r4=(rand()%101)+1;
	lv_bar_set_value(bar4, r4, LV_ANIM_ON);
}

void setup_scr_screen2(lv_ui *ui){

	//Write codes screen2
	ui->screen2 = lv_obj_create(NULL, NULL);

	//Write codes screen2_img0
	ui->screen2_img0 = lv_img_create(ui->screen2, NULL);

	//Write style LV_IMG_PART_MAIN for screen2_img0
	static lv_style_t style_screen2_img0_main;
	lv_style_init(&style_screen2_img0_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_img0_main
	lv_style_set_image_recolor(&style_screen2_img0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen2_img0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen2_img0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_img0, LV_IMG_PART_MAIN, &style_screen2_img0_main);
	lv_obj_set_pos(ui->screen2_img0, -2, 0);
	lv_obj_set_size(ui->screen2_img0, 482, 74);
	lv_obj_set_click(ui->screen2_img0, true);
	lv_img_set_src(ui->screen2_img0,&_solidcolor_alpha_482x74);
	lv_img_set_pivot(ui->screen2_img0, 0,0);
	lv_img_set_angle(ui->screen2_img0, 0);

	//Write codes screen2_label1
	ui->screen2_label1 = lv_label_create(ui->screen2, NULL);
	lv_label_set_text(ui->screen2_label1, "DASHBOARD");
	lv_label_set_long_mode(ui->screen2_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen2_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen2_label1
	static lv_style_t style_screen2_label1_main;
	lv_style_init(&style_screen2_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_label1_main
	lv_style_set_radius(&style_screen2_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen2_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen2_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen2_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen2_label1_main, LV_STATE_DEFAULT, lv_color_make(0x13, 0x2f, 0xb9));
	lv_style_set_text_font(&style_screen2_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_22);
	lv_style_set_text_letter_space(&style_screen2_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen2_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen2_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen2_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen2_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen2_label1, LV_LABEL_PART_MAIN, &style_screen2_label1_main);
	lv_obj_set_pos(ui->screen2_label1, 43, 25);
	lv_obj_set_size(ui->screen2_label1, 161, 0);

	//Write codes screen2_label2
	ui->screen2_label2 = lv_label_create(ui->screen2, NULL);
	lv_label_set_text(ui->screen2_label2, "10:00 PM");
	lv_label_set_long_mode(ui->screen2_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen2_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen2_label2
	static lv_style_t style_screen2_label2_main;
	lv_style_init(&style_screen2_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_label2_main
	lv_style_set_radius(&style_screen2_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen2_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen2_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen2_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen2_label2_main, LV_STATE_DEFAULT, lv_color_make(0x19, 0x27, 0xe6));
	lv_style_set_text_font(&style_screen2_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_screen2_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen2_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen2_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen2_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen2_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen2_label2, LV_LABEL_PART_MAIN, &style_screen2_label2_main);
	lv_obj_set_pos(ui->screen2_label2, 361, 27);
	lv_obj_set_size(ui->screen2_label2, 100, 0);

	//Write codes screen2_label3
	ui->screen2_label3 = lv_label_create(ui->screen2, NULL);
	lv_label_set_text(ui->screen2_label3, "MOTOR 1 HEALTH ");
	lv_label_set_long_mode(ui->screen2_label3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen2_label3, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen2_label3
	static lv_style_t style_screen2_label3_main;
	lv_style_init(&style_screen2_label3_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_label3_main
	lv_style_set_radius(&style_screen2_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen2_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen2_label3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen2_label3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_label3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen2_label3_main, LV_STATE_DEFAULT, lv_color_make(0x02, 0x4a, 0xf2));
	lv_style_set_text_font(&style_screen2_label3_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_screen2_label3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen2_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen2_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen2_label3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen2_label3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen2_label3, LV_LABEL_PART_MAIN, &style_screen2_label3_main);
	lv_obj_set_pos(ui->screen2_label3, 19, 90);
	lv_obj_set_size(ui->screen2_label3, 194, 0);

	//Write codes screen2_label4
	ui->screen2_label4 = lv_label_create(ui->screen2, NULL);
	lv_label_set_text(ui->screen2_label4, "MOTOR 2 HEALTH");
	lv_label_set_long_mode(ui->screen2_label4, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen2_label4, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen2_label4
	static lv_style_t style_screen2_label4_main;
	lv_style_init(&style_screen2_label4_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_label4_main
	lv_style_set_radius(&style_screen2_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen2_label4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen2_label4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen2_label4_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_label4_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen2_label4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x49, 0xf5));
	lv_style_set_text_font(&style_screen2_label4_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_screen2_label4_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen2_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen2_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen2_label4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen2_label4_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen2_label4, LV_LABEL_PART_MAIN, &style_screen2_label4_main);
	lv_obj_set_pos(ui->screen2_label4, 272, 89);
	lv_obj_set_size(ui->screen2_label4, 197, 0);

	//Write codes screen2_line5
	ui->screen2_line5 = lv_line_create(ui->screen2, NULL);

	//Write style LV_LINE_PART_MAIN for screen2_line5
	static lv_style_t style_screen2_line5_main;
	lv_style_init(&style_screen2_line5_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_line5_main
	lv_style_set_line_color(&style_screen2_line5_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_line_width(&style_screen2_line5_main, LV_STATE_DEFAULT, 4);
	lv_obj_add_style(ui->screen2_line5, LV_LINE_PART_MAIN, &style_screen2_line5_main);
	lv_obj_set_pos(ui->screen2_line5, 245, 139);
	lv_obj_set_size(ui->screen2_line5, 56, 87);
	static lv_point_t screen2_line5[] ={{0,0},{0,60}};
	lv_line_set_points(ui->screen2_line5,screen2_line5,2);

	//Write codes screen2_bar6
	ui->screen2_bar6 = lv_bar_create(ui->screen2, NULL);

	//Write style LV_BAR_PART_BG for screen2_bar6
	static lv_style_t style_screen2_bar6_bg;
	lv_style_init(&style_screen2_bar6_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen2_bar6_bg
	lv_style_set_radius(&style_screen2_bar6_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen2_bar6_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen2_bar6_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen2_bar6_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_bar6_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_bar6, LV_BAR_PART_BG, &style_screen2_bar6_bg);

	//Write style LV_BAR_PART_INDIC for screen2_bar6
	static lv_style_t style_screen2_bar6_indic;
	lv_style_init(&style_screen2_bar6_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen2_bar6_indic
	lv_style_set_radius(&style_screen2_bar6_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen2_bar6_indic, LV_STATE_DEFAULT, lv_color_make(0x0d, 0x35, 0xfd));
	lv_style_set_bg_grad_color(&style_screen2_bar6_indic, LV_STATE_DEFAULT, lv_color_make(0x22, 0x15, 0xe0));
	lv_style_set_bg_grad_dir(&style_screen2_bar6_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_bar6_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_bar6, LV_BAR_PART_INDIC, &style_screen2_bar6_indic);
	lv_obj_set_pos(ui->screen2_bar6, 26, 164);
	lv_obj_set_size(ui->screen2_bar6, 155, 16);
	lv_bar_set_anim_time(ui->screen2_bar6,1000);
	lv_bar_set_value(ui->screen2_bar6,50,LV_ANIM_OFF);
	lv_bar_set_range(ui->screen2_bar6,0,100);

	//Write codes screen2_bar7
	ui->screen2_bar7 = lv_bar_create(ui->screen2, NULL);

	//Write style LV_BAR_PART_BG for screen2_bar7
	static lv_style_t style_screen2_bar7_bg;
	lv_style_init(&style_screen2_bar7_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen2_bar7_bg
	lv_style_set_radius(&style_screen2_bar7_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen2_bar7_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_color(&style_screen2_bar7_bg, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_bg_grad_dir(&style_screen2_bar7_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_bar7_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_bar7, LV_BAR_PART_BG, &style_screen2_bar7_bg);

	//Write style LV_BAR_PART_INDIC for screen2_bar7
	static lv_style_t style_screen2_bar7_indic;
	lv_style_init(&style_screen2_bar7_indic);

	//Write style state: LV_STATE_DEFAULT for style_screen2_bar7_indic
	lv_style_set_radius(&style_screen2_bar7_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_screen2_bar7_indic, LV_STATE_DEFAULT, lv_color_make(0x1a, 0x0c, 0xdf));
	lv_style_set_bg_grad_color(&style_screen2_bar7_indic, LV_STATE_DEFAULT, lv_color_make(0x3d, 0x1a, 0xea));
	lv_style_set_bg_grad_dir(&style_screen2_bar7_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen2_bar7_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_bar7, LV_BAR_PART_INDIC, &style_screen2_bar7_indic);
	lv_obj_set_pos(ui->screen2_bar7, 296, 163);
	lv_obj_set_size(ui->screen2_bar7, 164, 16);
	lv_bar_set_anim_time(ui->screen2_bar7,1000);
	lv_bar_set_value(ui->screen2_bar7,50,LV_ANIM_OFF);
	lv_bar_set_range(ui->screen2_bar7,0,100);

	//Write codes screen2_imgbtn8
	ui->screen2_imgbtn8 = lv_imgbtn_create(ui->screen2, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen2_imgbtn8
	static lv_style_t style_screen2_imgbtn8_main;
	lv_style_init(&style_screen2_imgbtn8_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_imgbtn8_main
	lv_style_set_text_color(&style_screen2_imgbtn8_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen2_imgbtn8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen2_imgbtn8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen2_imgbtn8_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_imgbtn8, LV_IMGBTN_PART_MAIN, &style_screen2_imgbtn8_main);
	lv_obj_set_pos(ui->screen2_imgbtn8, 389, 221);
	lv_obj_set_size(ui->screen2_imgbtn8, 51, 41);
	lv_imgbtn_set_src(ui->screen2_imgbtn8,LV_BTN_STATE_RELEASED,&_back_alpha_51x41);
	lv_imgbtn_set_checkable(ui->screen2_imgbtn8, true);

	//Write codes screen2_imgbtn9
	ui->screen2_imgbtn9 = lv_imgbtn_create(ui->screen2, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen2_imgbtn9
	static lv_style_t style_screen2_imgbtn9_main;
	lv_style_init(&style_screen2_imgbtn9_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_imgbtn9_main
	lv_style_set_text_color(&style_screen2_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen2_imgbtn9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen2_imgbtn9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen2_imgbtn9_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_imgbtn9, LV_IMGBTN_PART_MAIN, &style_screen2_imgbtn9_main);
	lv_obj_set_pos(ui->screen2_imgbtn9, 270, 225);
	lv_obj_set_size(ui->screen2_imgbtn9, 44, 39);
	lv_imgbtn_set_src(ui->screen2_imgbtn9,LV_BTN_STATE_RELEASED,&_settings_alpha_44x39);
	lv_imgbtn_set_checkable(ui->screen2_imgbtn9, true);

	//Write codes screen2_imgbtn10
	ui->screen2_imgbtn10 = lv_imgbtn_create(ui->screen2, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen2_imgbtn10
	static lv_style_t style_screen2_imgbtn10_main;
	lv_style_init(&style_screen2_imgbtn10_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_imgbtn10_main
	lv_style_set_text_color(&style_screen2_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen2_imgbtn10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen2_imgbtn10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen2_imgbtn10_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_imgbtn10, LV_IMGBTN_PART_MAIN, &style_screen2_imgbtn10_main);
	lv_obj_set_pos(ui->screen2_imgbtn10, 34, 228);
	lv_obj_set_size(ui->screen2_imgbtn10, 54, 41);
	lv_imgbtn_set_src(ui->screen2_imgbtn10,LV_BTN_STATE_RELEASED,&_graph_alpha_54x41);
	lv_imgbtn_set_checkable(ui->screen2_imgbtn10, true);

	//Write codes screen2_imgbtn11
	ui->screen2_imgbtn11 = lv_imgbtn_create(ui->screen2, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen2_imgbtn11
	static lv_style_t style_screen2_imgbtn11_main;
	lv_style_init(&style_screen2_imgbtn11_main);

	//Write style state: LV_STATE_DEFAULT for style_screen2_imgbtn11_main
	lv_style_set_text_color(&style_screen2_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen2_imgbtn11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen2_imgbtn11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen2_imgbtn11_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen2_imgbtn11, LV_IMGBTN_PART_MAIN, &style_screen2_imgbtn11_main);
	lv_obj_set_pos(ui->screen2_imgbtn11, 146, 223);
	lv_obj_set_size(ui->screen2_imgbtn11, 50, 44);
	lv_imgbtn_set_src(ui->screen2_imgbtn11,LV_BTN_STATE_RELEASED,&_representation_alpha_50x44);
	lv_imgbtn_set_checkable(ui->screen2_imgbtn11, true);
	
	bar3=ui->screen2_bar6;
	bar4=ui->screen2_bar7;
	time2=ui->screen2_label2;
	task2=lv_task_create(dataupd,1000,LV_TASK_PRIO_LOW,time2);

	//Init events for screen
	events_init_screen2(ui);
}
