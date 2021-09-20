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

void setup_scr_form(lv_ui *ui){

	//Write codes form
	ui->form = lv_obj_create(NULL, NULL);

	//Write codes form_label0
	ui->form_label0 = lv_label_create(ui->form, NULL);
	lv_label_set_text(ui->form_label0, "MODBUS");
	lv_label_set_long_mode(ui->form_label0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->form_label0, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for form_label0
	static lv_style_t style_form_label0_main;
	lv_style_init(&style_form_label0_main);

	//Write style state: LV_STATE_DEFAULT for style_form_label0_main
	lv_style_set_radius(&style_form_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_label0_main, LV_STATE_DEFAULT, lv_color_make(0x6c, 0x65, 0x65));
	lv_style_set_bg_grad_color(&style_form_label0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_label0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_label0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_form_label0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_form_label0_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_label0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_form_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_form_label0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_form_label0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_label0, LV_LABEL_PART_MAIN, &style_form_label0_main);
	lv_obj_set_pos(ui->form_label0, 22, 19);
	lv_obj_set_size(ui->form_label0, 100, 0);

	//Write codes form_label1
	ui->form_label1 = lv_label_create(ui->form, NULL);
	lv_label_set_text(ui->form_label1, "TCP Server Address");
	lv_label_set_long_mode(ui->form_label1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->form_label1, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for form_label1
	static lv_style_t style_form_label1_main;
	lv_style_init(&style_form_label1_main);

	//Write style state: LV_STATE_DEFAULT for style_form_label1_main
	lv_style_set_radius(&style_form_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_label1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_label1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_label1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_form_label1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_form_label1_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_label1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_form_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_form_label1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_form_label1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_label1, LV_LABEL_PART_MAIN, &style_form_label1_main);
	lv_obj_set_pos(ui->form_label1, 27, 59);
	lv_obj_set_size(ui->form_label1, 183, 0);

	//Write codes form_label2
	ui->form_label2 = lv_label_create(ui->form, NULL);
	lv_label_set_text(ui->form_label2, "TCP Port Address");
	lv_label_set_long_mode(ui->form_label2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->form_label2, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for form_label2
	static lv_style_t style_form_label2_main;
	lv_style_init(&style_form_label2_main);

	//Write style state: LV_STATE_DEFAULT for style_form_label2_main
	lv_style_set_radius(&style_form_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_label2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_label2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_label2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_form_label2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_form_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_form_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_form_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_form_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_label2, LV_LABEL_PART_MAIN, &style_form_label2_main);
	lv_obj_set_pos(ui->form_label2, 270, 58);
	lv_obj_set_size(ui->form_label2, 163, 0);

	//Write codes form_ta3
	ui->form_ta3 = lv_textarea_create(ui->form, NULL);

	//Write style LV_PAGE_PART_BG for form_ta3
	static lv_style_t style_form_ta3_bg;
	lv_style_init(&style_form_ta3_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_ta3_bg
	lv_style_set_radius(&style_form_ta3_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_form_ta3_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_form_ta3_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_form_ta3_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->form_ta3, LV_PAGE_PART_BG, &style_form_ta3_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for form_ta3
	static lv_style_t style_form_ta3_scrollable;
	lv_style_init(&style_form_ta3_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_form_ta3_scrollable
	lv_style_set_radius(&style_form_ta3_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta3_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta3_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta3_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta3_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta3, LV_PAGE_PART_SCROLLABLE, &style_form_ta3_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for form_ta3
	static lv_style_t style_form_ta3_edge_flash;
	lv_style_init(&style_form_ta3_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_form_ta3_edge_flash
	lv_style_set_radius(&style_form_ta3_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta3_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta3_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta3_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta3_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta3, LV_PAGE_PART_EDGE_FLASH, &style_form_ta3_edge_flash);
	lv_obj_set_pos(ui->form_ta3, 46, 81);
	lv_obj_set_size(ui->form_ta3, 118, 21);
	lv_obj_set_event_cb(ui->form_ta3, text_area_event_cb);
	lv_textarea_set_text_align(ui->form_ta3, LV_LABEL_ALIGN_LEFT);

	//Write codes form_ta4
	ui->form_ta4 = lv_textarea_create(ui->form, NULL);

	//Write style LV_PAGE_PART_BG for form_ta4
	static lv_style_t style_form_ta4_bg;
	lv_style_init(&style_form_ta4_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_ta4_bg
	lv_style_set_radius(&style_form_ta4_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_form_ta4_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_form_ta4_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_form_ta4_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->form_ta4, LV_PAGE_PART_BG, &style_form_ta4_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for form_ta4
	static lv_style_t style_form_ta4_scrollable;
	lv_style_init(&style_form_ta4_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_form_ta4_scrollable
	lv_style_set_radius(&style_form_ta4_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta4_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta4_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta4_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta4_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta4, LV_PAGE_PART_SCROLLABLE, &style_form_ta4_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for form_ta4
	static lv_style_t style_form_ta4_edge_flash;
	lv_style_init(&style_form_ta4_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_form_ta4_edge_flash
	lv_style_set_radius(&style_form_ta4_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta4_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta4_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta4_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta4_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta4, LV_PAGE_PART_EDGE_FLASH, &style_form_ta4_edge_flash);
	lv_obj_set_pos(ui->form_ta4, 289, 80);
	lv_obj_set_size(ui->form_ta4, 118, 21);
	lv_obj_set_event_cb(ui->form_ta4, text_area_event_cb);
	lv_textarea_set_text_align(ui->form_ta4, LV_LABEL_ALIGN_LEFT);

	//Write codes form_label5
	ui->form_label5 = lv_label_create(ui->form, NULL);
	lv_label_set_text(ui->form_label5, "RTU Baud Rate");
	lv_label_set_long_mode(ui->form_label5, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->form_label5, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for form_label5
	static lv_style_t style_form_label5_main;
	lv_style_init(&style_form_label5_main);

	//Write style state: LV_STATE_DEFAULT for style_form_label5_main
	lv_style_set_radius(&style_form_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_label5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_label5_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_label5_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_form_label5_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_form_label5_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_label5_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_form_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_form_label5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_form_label5_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_label5, LV_LABEL_PART_MAIN, &style_form_label5_main);
	lv_obj_set_pos(ui->form_label5, 37, 121);
	lv_obj_set_size(ui->form_label5, 131, 0);

	//Write codes form_label6
	ui->form_label6 = lv_label_create(ui->form, NULL);
	lv_label_set_text(ui->form_label6, "RTU Server ID");
	lv_label_set_long_mode(ui->form_label6, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->form_label6, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for form_label6
	static lv_style_t style_form_label6_main;
	lv_style_init(&style_form_label6_main);

	//Write style state: LV_STATE_DEFAULT for style_form_label6_main
	lv_style_set_radius(&style_form_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_label6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_label6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_label6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_form_label6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_form_label6_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_label6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_form_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_form_label6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_form_label6_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_label6, LV_LABEL_PART_MAIN, &style_form_label6_main);
	lv_obj_set_pos(ui->form_label6, 276, 123);
	lv_obj_set_size(ui->form_label6, 137, 0);

	//Write codes form_ta7
	ui->form_ta7 = lv_textarea_create(ui->form, NULL);

	//Write style LV_PAGE_PART_BG for form_ta7
	static lv_style_t style_form_ta7_bg;
	lv_style_init(&style_form_ta7_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_ta7_bg
	lv_style_set_radius(&style_form_ta7_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_form_ta7_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_form_ta7_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_form_ta7_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->form_ta7, LV_PAGE_PART_BG, &style_form_ta7_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for form_ta7
	static lv_style_t style_form_ta7_scrollable;
	lv_style_init(&style_form_ta7_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_form_ta7_scrollable
	lv_style_set_radius(&style_form_ta7_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta7_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta7_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta7_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta7_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta7, LV_PAGE_PART_SCROLLABLE, &style_form_ta7_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for form_ta7
	static lv_style_t style_form_ta7_edge_flash;
	lv_style_init(&style_form_ta7_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_form_ta7_edge_flash
	lv_style_set_radius(&style_form_ta7_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta7_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta7_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta7_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta7_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta7, LV_PAGE_PART_EDGE_FLASH, &style_form_ta7_edge_flash);
	lv_obj_set_pos(ui->form_ta7, 45, 147);
	lv_obj_set_size(ui->form_ta7, 118, 21);
	lv_obj_set_event_cb(ui->form_ta7, text_area_event_cb);
	lv_textarea_set_text_align(ui->form_ta7, LV_LABEL_ALIGN_LEFT);

	//Write codes form_ta8
	ui->form_ta8 = lv_textarea_create(ui->form, NULL);

	//Write style LV_PAGE_PART_BG for form_ta8
	static lv_style_t style_form_ta8_bg;
	lv_style_init(&style_form_ta8_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_ta8_bg
	lv_style_set_radius(&style_form_ta8_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_border_color(&style_form_ta8_bg, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_form_ta8_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_letter_space(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_right(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_top(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_bottom(&style_form_ta8_bg, LV_STATE_DEFAULT, 2);
	lv_obj_add_style(ui->form_ta8, LV_PAGE_PART_BG, &style_form_ta8_bg);

	//Write style LV_PAGE_PART_SCROLLABLE for form_ta8
	static lv_style_t style_form_ta8_scrollable;
	lv_style_init(&style_form_ta8_scrollable);

	//Write style state: LV_STATE_DEFAULT for style_form_ta8_scrollable
	lv_style_set_radius(&style_form_ta8_scrollable, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta8_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta8_scrollable, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta8_scrollable, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta8_scrollable, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta8, LV_PAGE_PART_SCROLLABLE, &style_form_ta8_scrollable);

	//Write style LV_PAGE_PART_EDGE_FLASH for form_ta8
	static lv_style_t style_form_ta8_edge_flash;
	lv_style_init(&style_form_ta8_edge_flash);

	//Write style state: LV_STATE_DEFAULT for style_form_ta8_edge_flash
	lv_style_set_radius(&style_form_ta8_edge_flash, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_form_ta8_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_ta8_edge_flash, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_ta8_edge_flash, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_ta8_edge_flash, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_ta8, LV_PAGE_PART_EDGE_FLASH, &style_form_ta8_edge_flash);
	lv_obj_set_pos(ui->form_ta8, 293, 145);
	lv_obj_set_size(ui->form_ta8, 118, 21);
	lv_obj_set_event_cb(ui->form_ta8, text_area_event_cb);
	lv_textarea_set_text_align(ui->form_ta8, LV_LABEL_ALIGN_LEFT);

	//Write codes form_cb9
	ui->form_cb9 = lv_checkbox_create(ui->form, NULL);
	lv_checkbox_set_text(ui->form_cb9, "TCP");

	//Write style LV_CHECKBOX_PART_BG for form_cb9
	static lv_style_t style_form_cb9_bg;
	lv_style_init(&style_form_cb9_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_cb9_bg
	lv_style_set_radius(&style_form_cb9_bg, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_form_cb9_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_cb9_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_cb9_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_cb9_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_form_cb9_bg, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_form_cb9_bg, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_cb9_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_cb9, LV_CHECKBOX_PART_BG, &style_form_cb9_bg);

	//Write style LV_CHECKBOX_PART_BULLET for form_cb9
	static lv_style_t style_form_cb9_bullet;
	lv_style_init(&style_form_cb9_bullet);

	//Write style state: LV_STATE_DEFAULT for style_form_cb9_bullet
	lv_style_set_radius(&style_form_cb9_bullet, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_form_cb9_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_cb9_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_cb9_bullet, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_cb9_bullet, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_form_cb9_bullet, LV_STATE_DEFAULT, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_cb9_bullet, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->form_cb9, LV_CHECKBOX_PART_BULLET, &style_form_cb9_bullet);
	lv_obj_set_pos(ui->form_cb9, 179, 15);

	//Write codes form_cb10
	ui->form_cb10 = lv_checkbox_create(ui->form, NULL);
	lv_checkbox_set_text(ui->form_cb10, "RTU");

	//Write style LV_CHECKBOX_PART_BG for form_cb10
	static lv_style_t style_form_cb10_bg;
	lv_style_init(&style_form_cb10_bg);

	//Write style state: LV_STATE_DEFAULT for style_form_cb10_bg
	lv_style_set_radius(&style_form_cb10_bg, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_form_cb10_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_cb10_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_cb10_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_cb10_bg, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_form_cb10_bg, LV_STATE_DEFAULT, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_form_cb10_bg, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_form_cb10_bg, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->form_cb10, LV_CHECKBOX_PART_BG, &style_form_cb10_bg);

	//Write style LV_CHECKBOX_PART_BULLET for form_cb10
	static lv_style_t style_form_cb10_bullet;
	lv_style_init(&style_form_cb10_bullet);

	//Write style state: LV_STATE_DEFAULT for style_form_cb10_bullet
	lv_style_set_radius(&style_form_cb10_bullet, LV_STATE_DEFAULT, 6);
	lv_style_set_bg_color(&style_form_cb10_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_cb10_bullet, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_cb10_bullet, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_cb10_bullet, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_form_cb10_bullet, LV_STATE_DEFAULT, lv_color_make(0x02, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_cb10_bullet, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->form_cb10, LV_CHECKBOX_PART_BULLET, &style_form_cb10_bullet);
	lv_obj_set_pos(ui->form_cb10, 269, 14);

	//Write codes form_btn11
	ui->form_btn11 = lv_btn_create(ui->form, NULL);

	//Write style LV_BTN_PART_MAIN for form_btn11
	static lv_style_t style_form_btn11_main;
	lv_style_init(&style_form_btn11_main);

	//Write style state: LV_STATE_DEFAULT for style_form_btn11_main
	lv_style_set_radius(&style_form_btn11_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_form_btn11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_form_btn11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_form_btn11_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_form_btn11_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_form_btn11_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_form_btn11_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_form_btn11_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_form_btn11_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_form_btn11_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->form_btn11, LV_BTN_PART_MAIN, &style_form_btn11_main);
	lv_obj_set_pos(ui->form_btn11, 172, 214);
	lv_obj_set_size(ui->form_btn11, 100, 20);
	ui->form_btn11_label = lv_label_create(ui->form_btn11, NULL);
	lv_label_set_text(ui->form_btn11_label, "SAVE");
	lv_obj_set_style_local_text_color(ui->form_btn11_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->form_btn11_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Init events for screen
	events_init_form(ui);
}