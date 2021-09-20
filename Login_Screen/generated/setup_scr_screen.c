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

void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_label0
	ui->screen_label0 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label0, "LOGIN");
	lv_label_set_long_mode(ui->screen_label0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label0, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label0
	static lv_style_t style_screen_label0_main;
	lv_style_init(&style_screen_label0_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label0_main
	lv_style_set_radius(&style_screen_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label0_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label0, LV_LABEL_PART_MAIN, &style_screen_label0_main);
	lv_obj_set_pos(ui->screen_label0, 307, 25);
	lv_obj_set_size(ui->screen_label0, 100, 0);

	//Write codes screen_label1
	ui->screen_label1 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label1, "USERNAME");
	lv_label_set_long_mode(ui->screen_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label1
	static lv_style_t style_screen_label1_main;
	lv_style_init(&style_screen_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label1_main
	lv_style_set_radius(&style_screen_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label1, LV_LABEL_PART_MAIN, &style_screen_label1_main);
	lv_obj_set_pos(ui->screen_label1, 304, 59);
	lv_obj_set_size(ui->screen_label1, 100, 0);

	//Write codes screen_label2
	ui->screen_label2 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label2, "PASSWORD");
	lv_label_set_long_mode(ui->screen_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label2
	static lv_style_t style_screen_label2_main;
	lv_style_init(&style_screen_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label2_main
	lv_style_set_radius(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label2, LV_LABEL_PART_MAIN, &style_screen_label2_main);
	lv_obj_set_pos(ui->screen_label2, 304, 116);
	lv_obj_set_size(ui->screen_label2, 100, 0);

	//Write codes screen_unt
	ui->screen_unt = lv_textarea_create(ui->screen, NULL);

	//Write style LV_PAGE_PART_BG for screen_unt
	static lv_style_t style_screen_unt_bg;
	lv_style_init(&style_screen_unt_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_unt_bg
	lv_style_set_radius(&style_screen_unt_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_screen_unt_bg, LV_STATE_DEFAULT, lv_color_make(0x62, 0x6e, 0x6f));
	lv_style_set_border_width(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_screen_unt_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_screen_unt_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->screen_unt, LV_PAGE_PART_BG, &style_screen_unt_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for screen_unt
	static lv_style_t style_screen_unt_scrollable;
	lv_style_init(&style_screen_unt_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_screen_unt_scrollable
	lv_style_set_radius(&style_screen_unt_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_unt_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_unt_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_unt_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_unt_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_unt, LV_PAGE_PART_SCROLLABLE, &style_screen_unt_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for screen_unt
	static lv_style_t style_screen_unt_edge_flash;
	lv_style_init(&style_screen_unt_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_screen_unt_edge_flash
	lv_style_set_radius(&style_screen_unt_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_unt_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_unt_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_unt_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_unt_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_unt, LV_PAGE_PART_EDGE_FLASH, &style_screen_unt_edge_flash);
	lv_obj_set_pos(ui->screen_unt, 298, 81);
	lv_obj_set_size(ui->screen_unt, 118, 21);
	lv_obj_set_event_cb(ui->screen_unt, text_area_event_cb);
	lv_textarea_set_text_align(ui->screen_unt, LV_LABEL_ALIGN_LEFT);

	//Write codes screen_ta4
	ui->screen_ta4 = lv_textarea_create(ui->screen, NULL);

	//Write style LV_PAGE_PART_BG for screen_ta4
	static lv_style_t style_screen_ta4_bg;
	lv_style_init(&style_screen_ta4_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_ta4_bg
	lv_style_set_radius(&style_screen_ta4_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_screen_ta4_bg, LV_STATE_DEFAULT, lv_color_make(0x67, 0x73, 0x74));
	lv_style_set_border_width(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_screen_ta4_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_screen_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->screen_ta4, LV_PAGE_PART_BG, &style_screen_ta4_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for screen_ta4
	static lv_style_t style_screen_ta4_scrollable;
	lv_style_init(&style_screen_ta4_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_screen_ta4_scrollable
	lv_style_set_radius(&style_screen_ta4_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_ta4_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_ta4_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_ta4_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_ta4_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_ta4, LV_PAGE_PART_SCROLLABLE, &style_screen_ta4_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for screen_ta4
	static lv_style_t style_screen_ta4_edge_flash;
	lv_style_init(&style_screen_ta4_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_screen_ta4_edge_flash
	lv_style_set_radius(&style_screen_ta4_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_ta4_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_ta4_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_ta4_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_ta4_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_ta4, LV_PAGE_PART_EDGE_FLASH, &style_screen_ta4_edge_flash);
	lv_obj_set_pos(ui->screen_ta4, 297, 136);
	lv_obj_set_size(ui->screen_ta4, 118, 21);
	lv_obj_set_event_cb(ui->screen_ta4, text_area_event_cb);
	lv_textarea_set_text_align(ui->screen_ta4, LV_LABEL_ALIGN_LEFT);

	//Write codes screen_btn5
	ui->screen_btn5 = lv_btn_create(ui->screen, NULL);

	//Write style LV_BTN_PART_MAIN for screen_btn5
	static lv_style_t style_screen_btn5_main;
	lv_style_init(&style_screen_btn5_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn5_main
	lv_style_set_radius(&style_screen_btn5_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_screen_btn5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btn5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btn5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btn5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btn5_main, LV_STATE_DEFAULT, lv_color_make(0x68, 0x6e, 0x6e));
	lv_style_set_border_width(&style_screen_btn5_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_screen_btn5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_screen_btn5_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_screen_btn5_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_btn5, LV_BTN_PART_MAIN, &style_screen_btn5_main);
	lv_obj_set_pos(ui->screen_btn5, 297, 174);
	lv_obj_set_size(ui->screen_btn5, 125, 20);
	ui->screen_btn5_label = lv_label_create(ui->screen_btn5, NULL);
	lv_label_set_text(ui->screen_btn5_label, "FORGOT PASSWORD");
	lv_obj_set_style_local_text_color(ui->screen_btn5_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->screen_btn5_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes screen_btn6
	ui->screen_btn6 = lv_btn_create(ui->screen, NULL);

	//Write style LV_BTN_PART_MAIN for screen_btn6
	static lv_style_t style_screen_btn6_main;
	lv_style_init(&style_screen_btn6_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn6_main
	lv_style_set_radius(&style_screen_btn6_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_screen_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btn6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btn6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btn6_main, LV_STATE_DEFAULT, lv_color_make(0x50, 0x5c, 0x5e));
	lv_style_set_border_width(&style_screen_btn6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_screen_btn6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_screen_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_screen_btn6_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_btn6, LV_BTN_PART_MAIN, &style_screen_btn6_main);
	lv_obj_set_pos(ui->screen_btn6, 308, 211);
	lv_obj_set_size(ui->screen_btn6, 100, 30);
	ui->screen_btn6_label = lv_label_create(ui->screen_btn6, NULL);
	lv_label_set_text(ui->screen_btn6_label, "LOGIN");
	lv_obj_set_style_local_text_color(ui->screen_btn6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->screen_btn6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes screen_img7
	ui->screen_img7 = lv_img_create(ui->screen, NULL);

	//Write style LV_IMG_PART_MAIN for screen_img7
	static lv_style_t style_screen_img7_main;
	lv_style_init(&style_screen_img7_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_img7_main
	lv_style_set_image_recolor(&style_screen_img7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_img7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_img7_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_img7, LV_IMG_PART_MAIN, &style_screen_img7_main);
	lv_obj_set_pos(ui->screen_img7, 74, 88);
	lv_obj_set_size(ui->screen_img7, 125, 100);
	lv_obj_set_click(ui->screen_img7, true);
	lv_img_set_src(ui->screen_img7,&_login_alpha_125x100);
	lv_img_set_pivot(ui->screen_img7, 0,0);
	lv_img_set_angle(ui->screen_img7, 0);

	//Init events for screen
	events_init_screen(ui);
}