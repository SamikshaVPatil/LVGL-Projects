/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"

static lv_obj_t * kb;
static void kb_event_cb(lv_obj_t * event_kb, lv_event_t event)
{
	/* Just call the regular event handler */
	lv_keyboard_def_event_cb(event_kb, event);
	if(event == LV_EVENT_APPLY || event == LV_EVENT_CANCEL){
		if(NULL != kb){
			lv_obj_del(kb);
			kb = NULL;
		}
	}
}
static void text_area_event_cb(lv_obj_t* ta, lv_event_t event)
{

	if(event == LV_EVENT_CLICKED){
		 if( NULL == kb){
			/* Create a keyboard and make it fill the width of the above text areas */
			kb = lv_keyboard_create(lv_scr_act(), NULL);
			lv_obj_set_event_cb(kb, kb_event_cb);
			lv_obj_set_size(kb,  LV_HOR_RES, LV_VER_RES / 2);
		}
		lv_keyboard_set_textarea(kb, ta);
		lv_keyboard_set_cursor_manage(kb, true); 
	}
}

void setup_scr_Change_Password(lv_ui *ui){

	//Write codes Change_Password
	ui->Change_Password = lv_obj_create(NULL, NULL);

	//Write codes Change_Password_label0
	ui->Change_Password_label0 = lv_label_create(ui->Change_Password, NULL);
	lv_label_set_text(ui->Change_Password_label0, "CHANGE YOUR PASSWORD");
	lv_label_set_long_mode(ui->Change_Password_label0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Change_Password_label0, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Change_Password_label0
	static lv_style_t style_Change_Password_label0_main;
	lv_style_init(&style_Change_Password_label0_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_label0_main
	lv_style_set_radius(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_label0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_label0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_label0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Change_Password_label0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Change_Password_label0_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Change_Password_label0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Change_Password_label0, LV_LABEL_PART_MAIN, &style_Change_Password_label0_main);
	lv_obj_set_pos(ui->Change_Password_label0, 204, 22);
	lv_obj_set_size(ui->Change_Password_label0, 209, 0);

	//Write codes Change_Password_label6
	ui->Change_Password_label6 = lv_label_create(ui->Change_Password, NULL);
	lv_label_set_text(ui->Change_Password_label6, "USERNAME");
	lv_label_set_long_mode(ui->Change_Password_label6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Change_Password_label6, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Change_Password_label6
	static lv_style_t style_Change_Password_label6_main;
	lv_style_init(&style_Change_Password_label6_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_label6_main
	lv_style_set_radius(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_label6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Change_Password_label6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Change_Password_label6_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Change_Password_label6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Change_Password_label6, LV_LABEL_PART_MAIN, &style_Change_Password_label6_main);
	lv_obj_set_pos(ui->Change_Password_label6, 163, 57);
	lv_obj_set_size(ui->Change_Password_label6, 100, 0);

	//Write codes Change_Password_label7
	ui->Change_Password_label7 = lv_label_create(ui->Change_Password, NULL);
	lv_label_set_text(ui->Change_Password_label7, "NEWPASSWORD");
	lv_label_set_long_mode(ui->Change_Password_label7, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Change_Password_label7, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Change_Password_label7
	static lv_style_t style_Change_Password_label7_main;
	lv_style_init(&style_Change_Password_label7_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_label7_main
	lv_style_set_radius(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_label7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Change_Password_label7_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Change_Password_label7_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Change_Password_label7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Change_Password_label7, LV_LABEL_PART_MAIN, &style_Change_Password_label7_main);
	lv_obj_set_pos(ui->Change_Password_label7, 159, 114);
	lv_obj_set_size(ui->Change_Password_label7, 138, 0);

	//Write codes Change_Password_label8
	ui->Change_Password_label8 = lv_label_create(ui->Change_Password, NULL);
	lv_label_set_text(ui->Change_Password_label8, "CONFIRM PASSWORD");
	lv_label_set_long_mode(ui->Change_Password_label8, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Change_Password_label8, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Change_Password_label8
	static lv_style_t style_Change_Password_label8_main;
	lv_style_init(&style_Change_Password_label8_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_label8_main
	lv_style_set_radius(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_label8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_label8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_label8_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Change_Password_label8_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Change_Password_label8_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Change_Password_label8_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Change_Password_label8, LV_LABEL_PART_MAIN, &style_Change_Password_label8_main);
	lv_obj_set_pos(ui->Change_Password_label8, 164, 167);
	lv_obj_set_size(ui->Change_Password_label8, 174, 0);

	//Write codes Change_Password_ta9
	ui->Change_Password_ta9 = lv_textarea_create(ui->Change_Password, NULL);

	//Write style LV_PAGE_PART_BG for Change_Password_ta9
	static lv_style_t style_Change_Password_ta9_bg;
	lv_style_init(&style_Change_Password_ta9_bg);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta9_bg
	lv_style_set_radius(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Change_Password_ta9_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Change_Password_ta9, LV_PAGE_PART_BG, &style_Change_Password_ta9_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for Change_Password_ta9
	static lv_style_t style_Change_Password_ta9_scrollable;
	lv_style_init(&style_Change_Password_ta9_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta9_scrollable
	lv_style_set_radius(&style_Change_Password_ta9_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta9_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta9_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta9_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta9_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta9, LV_PAGE_PART_SCROLLABLE, &style_Change_Password_ta9_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for Change_Password_ta9
	static lv_style_t style_Change_Password_ta9_edge_flash;
	lv_style_init(&style_Change_Password_ta9_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta9_edge_flash
	lv_style_set_radius(&style_Change_Password_ta9_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta9_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta9_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta9_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta9_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta9, LV_PAGE_PART_EDGE_FLASH, &style_Change_Password_ta9_edge_flash);
	lv_obj_set_pos(ui->Change_Password_ta9, 166, 78);
	lv_obj_set_size(ui->Change_Password_ta9, 118, 21);
	lv_obj_set_event_cb(ui->Change_Password_ta9, text_area_event_cb);
	lv_textarea_set_text_align(ui->Change_Password_ta9, LV_LABEL_ALIGN_LEFT);

	//Write codes Change_Password_ta10
	ui->Change_Password_ta10 = lv_textarea_create(ui->Change_Password, NULL);

	//Write style LV_PAGE_PART_BG for Change_Password_ta10
	static lv_style_t style_Change_Password_ta10_bg;
	lv_style_init(&style_Change_Password_ta10_bg);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta10_bg
	lv_style_set_radius(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Change_Password_ta10_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Change_Password_ta10, LV_PAGE_PART_BG, &style_Change_Password_ta10_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for Change_Password_ta10
	static lv_style_t style_Change_Password_ta10_scrollable;
	lv_style_init(&style_Change_Password_ta10_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta10_scrollable
	lv_style_set_radius(&style_Change_Password_ta10_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta10_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta10_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta10_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta10_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta10, LV_PAGE_PART_SCROLLABLE, &style_Change_Password_ta10_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for Change_Password_ta10
	static lv_style_t style_Change_Password_ta10_edge_flash;
	lv_style_init(&style_Change_Password_ta10_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta10_edge_flash
	lv_style_set_radius(&style_Change_Password_ta10_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta10_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta10_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta10_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta10_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta10, LV_PAGE_PART_EDGE_FLASH, &style_Change_Password_ta10_edge_flash);
	lv_obj_set_pos(ui->Change_Password_ta10, 166, 135);
	lv_obj_set_size(ui->Change_Password_ta10, 118, 21);
	lv_obj_set_event_cb(ui->Change_Password_ta10, text_area_event_cb);
	lv_textarea_set_text_align(ui->Change_Password_ta10, LV_LABEL_ALIGN_LEFT);

	//Write codes Change_Password_img8
	ui->Change_Password_img8 = lv_img_create(ui->Change_Password, NULL);

	//Write style LV_IMG_PART_MAIN for Change_Password_img8
	static lv_style_t style_Change_Password_img8_main;
	lv_style_init(&style_Change_Password_img8_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_img8_main
	lv_style_set_image_recolor(&style_Change_Password_img8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Change_Password_img8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Change_Password_img8_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_img8, LV_IMG_PART_MAIN, &style_Change_Password_img8_main);
	lv_obj_set_pos(ui->Change_Password_img8, 7, 9);
	lv_obj_set_size(ui->Change_Password_img8, 130, 249);
	lv_obj_set_click(ui->Change_Password_img8, true);
	lv_img_set_src(ui->Change_Password_img8,&_solidcolor_alpha_130x249);
	lv_img_set_pivot(ui->Change_Password_img8, 0,0);
	lv_img_set_angle(ui->Change_Password_img8, 0);

	//Write codes Change_Password_label10
	ui->Change_Password_label10 = lv_label_create(ui->Change_Password, NULL);
	lv_label_set_text(ui->Change_Password_label10, "HOME");
	lv_label_set_long_mode(ui->Change_Password_label10, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Change_Password_label10, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Change_Password_label10
	static lv_style_t style_Change_Password_label10_main;
	lv_style_init(&style_Change_Password_label10_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_label10_main
	lv_style_set_radius(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_label10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_label10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_label10_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_Change_Password_label10_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_Change_Password_label10_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Change_Password_label10_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Change_Password_label10, LV_LABEL_PART_MAIN, &style_Change_Password_label10_main);
	lv_obj_set_pos(ui->Change_Password_label10, 18, 33);
	lv_obj_set_size(ui->Change_Password_label10, 100, 0);

	//Write codes Change_Password_ta8
	ui->Change_Password_ta8 = lv_textarea_create(ui->Change_Password, NULL);

	//Write style LV_PAGE_PART_BG for Change_Password_ta8
	static lv_style_t style_Change_Password_ta8_bg;
	lv_style_init(&style_Change_Password_ta8_bg);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta8_bg
	lv_style_set_radius(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_Change_Password_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->Change_Password_ta8, LV_PAGE_PART_BG, &style_Change_Password_ta8_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for Change_Password_ta8
	static lv_style_t style_Change_Password_ta8_scrollable;
	lv_style_init(&style_Change_Password_ta8_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta8_scrollable
	lv_style_set_radius(&style_Change_Password_ta8_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta8_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta8_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta8_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta8_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta8, LV_PAGE_PART_SCROLLABLE, &style_Change_Password_ta8_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for Change_Password_ta8
	static lv_style_t style_Change_Password_ta8_edge_flash;
	lv_style_init(&style_Change_Password_ta8_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_ta8_edge_flash
	lv_style_set_radius(&style_Change_Password_ta8_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Change_Password_ta8_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_ta8_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_ta8_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_ta8_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_ta8, LV_PAGE_PART_EDGE_FLASH, &style_Change_Password_ta8_edge_flash);
	lv_obj_set_pos(ui->Change_Password_ta8, 168, 187);
	lv_obj_set_size(ui->Change_Password_ta8, 118, 21);
	lv_obj_set_event_cb(ui->Change_Password_ta8, text_area_event_cb);
	lv_textarea_set_text_align(ui->Change_Password_ta8, LV_LABEL_ALIGN_LEFT);

	//Write codes Change_Password_btn9
	ui->Change_Password_btn9 = lv_btn_create(ui->Change_Password, NULL);

	//Write style LV_BTN_PART_MAIN for Change_Password_btn9
	static lv_style_t style_Change_Password_btn9_main;
	lv_style_init(&style_Change_Password_btn9_main);

	//Write style state: LV_STATE_DEFAULT for style_Change_Password_btn9_main
	lv_style_set_radius(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Change_Password_btn9_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Change_Password_btn9, LV_BTN_PART_MAIN, &style_Change_Password_btn9_main);
	lv_obj_set_pos(ui->Change_Password_btn9, 234, 221);
	lv_obj_set_size(ui->Change_Password_btn9, 120, 25);
	ui->Change_Password_btn9_label = lv_label_create(ui->Change_Password_btn9, NULL);
	lv_label_set_text(ui->Change_Password_btn9_label, "Change Password");
	lv_obj_set_style_local_text_color(ui->Change_Password_btn9_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Change_Password_btn9_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Init events for screen
	events_init_Change_Password(ui);
}