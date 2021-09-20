/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_table0
	ui->screen_table0 = lv_table_create(ui->screen, NULL);

	//Write style LV_TABLE_PART_BG for screen_table0
	static lv_style_t style_screen_table0_bg;
	lv_style_init(&style_screen_table0_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_table0_bg
	lv_style_set_bg_color(&style_screen_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_table0_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_table0_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xd5, 0xde, 0xe6));
	lv_style_set_border_width(&style_screen_table0_bg, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_screen_table0_bg, LV_STATE_DEFAULT, lv_color_make(0x39, 0x3c, 0x41));
	lv_style_set_text_decor(&style_screen_table0_bg, LV_STATE_DEFAULT, LV_TEXT_DECOR_NONE);
	lv_style_set_pad_left(&style_screen_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_right(&style_screen_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_top(&style_screen_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_bottom(&style_screen_table0_bg, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->screen_table0, LV_TABLE_PART_BG, &style_screen_table0_bg);

	//Write style LV_TABLE_PART_CELL1 for screen_table0
	static lv_style_t style_screen_table0_cell1;
	lv_style_init(&style_screen_table0_cell1);

	//Write style state: LV_STATE_DEFAULT for style_screen_table0_cell1
	lv_style_set_border_color(&style_screen_table0_cell1, LV_STATE_DEFAULT, lv_color_make(0xd5, 0xde, 0xe6));
	lv_style_set_border_width(&style_screen_table0_cell1, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->screen_table0, LV_TABLE_PART_CELL1, &style_screen_table0_cell1);
	lv_obj_set_pos(ui->screen_table0, 0, 0);
	lv_table_set_col_cnt(ui->screen_table0,4);
	lv_table_set_row_cnt(ui->screen_table0,5);
	lv_table_set_cell_value(ui->screen_table0,0,0,"Item");
	lv_table_set_cell_value(ui->screen_table0,1,0,"Apple");
	lv_table_set_cell_value(ui->screen_table0,2,0,"Banana");
	lv_table_set_cell_value(ui->screen_table0,3,0,"Grapes");
	lv_table_set_cell_value(ui->screen_table0,4,0,"");
	lv_table_set_cell_value(ui->screen_table0,0,1,"Net Price");
	lv_table_set_cell_value(ui->screen_table0,1,1,"100");
	lv_table_set_cell_value(ui->screen_table0,2,1,"10");
	lv_table_set_cell_value(ui->screen_table0,3,1,"30");
	lv_table_set_cell_value(ui->screen_table0,4,1,"");
	lv_table_set_cell_value(ui->screen_table0,0,2,"QTY");
	lv_table_set_cell_value(ui->screen_table0,1,2,"2");
	lv_table_set_cell_value(ui->screen_table0,2,2,"3");
	lv_table_set_cell_value(ui->screen_table0,3,2,"2");
	lv_table_set_cell_value(ui->screen_table0,4,2,"TOTAL");
	lv_table_set_cell_value(ui->screen_table0,0,3,"Value");
	lv_table_set_cell_value(ui->screen_table0,1,3,"200");
	lv_table_set_cell_value(ui->screen_table0,2,3,"30");
	lv_table_set_cell_value(ui->screen_table0,3,3,"60");
	lv_table_set_cell_value(ui->screen_table0,4,3,"230");
	lv_obj_set_style_local_pad_left(ui->screen_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_right(ui->screen_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_top(ui->screen_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_bottom(ui->screen_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);

	//Write codes screen_imgbtn1
	ui->screen_imgbtn1 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn1
	static lv_style_t style_screen_imgbtn1_main;
	lv_style_init(&style_screen_imgbtn1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn1_main
	lv_style_set_text_color(&style_screen_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn1, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn1_main);
	lv_obj_set_pos(ui->screen_imgbtn1, 184, 210);
	lv_obj_set_size(ui->screen_imgbtn1, 50, 47);
	lv_imgbtn_set_src(ui->screen_imgbtn1,LV_BTN_STATE_RELEASED,&_order_alpha_50x47);
	lv_imgbtn_set_checkable(ui->screen_imgbtn1, true);

	//Write codes screen_imgbtn2
	ui->screen_imgbtn2 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn2
	static lv_style_t style_screen_imgbtn2_main;
	lv_style_init(&style_screen_imgbtn2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn2_main
	lv_style_set_text_color(&style_screen_imgbtn2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn2, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn2_main);
	lv_obj_set_pos(ui->screen_imgbtn2, 15, 208);
	lv_obj_set_size(ui->screen_imgbtn2, 50, 47);
	lv_imgbtn_set_src(ui->screen_imgbtn2,LV_BTN_STATE_RELEASED,&_print_alpha_50x47);
	lv_imgbtn_set_checkable(ui->screen_imgbtn2, true);

	//Write codes screen_imgbtn4
	ui->screen_imgbtn4 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn4
	static lv_style_t style_screen_imgbtn4_main;
	lv_style_init(&style_screen_imgbtn4_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn4_main
	lv_style_set_text_color(&style_screen_imgbtn4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn4, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn4_main);
	lv_obj_set_pos(ui->screen_imgbtn4, 352, 215);
	lv_obj_set_size(ui->screen_imgbtn4, 40, 40);
	lv_imgbtn_set_src(ui->screen_imgbtn4,LV_BTN_STATE_RELEASED,&_undo_alpha_40x40);
	lv_imgbtn_set_checkable(ui->screen_imgbtn4, true);

	//Write codes screen_imgbtn5
	ui->screen_imgbtn5 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn5
	static lv_style_t style_screen_imgbtn5_main;
	lv_style_init(&style_screen_imgbtn5_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn5_main
	lv_style_set_text_color(&style_screen_imgbtn5_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn5_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn5, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn5_main);
	lv_obj_set_pos(ui->screen_imgbtn5, 96, 208);
	lv_obj_set_size(ui->screen_imgbtn5, 50, 46);
	lv_imgbtn_set_src(ui->screen_imgbtn5,LV_BTN_STATE_RELEASED,&_ebll_alpha_50x46);
	lv_imgbtn_set_checkable(ui->screen_imgbtn5, true);

	//Write codes screen_imgbtn6
	ui->screen_imgbtn6 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn6
	static lv_style_t style_screen_imgbtn6_main;
	lv_style_init(&style_screen_imgbtn6_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn6_main
	lv_style_set_text_color(&style_screen_imgbtn6_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn6_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn6_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn6, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn6_main);
	lv_obj_set_pos(ui->screen_imgbtn6, 414, 218);
	lv_obj_set_size(ui->screen_imgbtn6, 52, 33);
	lv_imgbtn_set_src(ui->screen_imgbtn6,LV_BTN_STATE_RELEASED,&_next_alpha_52x33);
	lv_imgbtn_set_checkable(ui->screen_imgbtn6, true);

	//Write codes screen_label7
	ui->screen_label7 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label7, "Print");
	lv_label_set_long_mode(ui->screen_label7, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label7, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label7
	static lv_style_t style_screen_label7_main;
	lv_style_init(&style_screen_label7_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label7_main
	lv_style_set_radius(&style_screen_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label7_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label7_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label7_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label7_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label7_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label7_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label7_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label7_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label7, LV_LABEL_PART_MAIN, &style_screen_label7_main);
	lv_obj_set_pos(ui->screen_label7, 14, 259);
	lv_obj_set_size(ui->screen_label7, 50, 0);

	//Write codes screen_label8
	ui->screen_label8 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label8, "eBill");
	lv_label_set_long_mode(ui->screen_label8, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label8, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label8
	static lv_style_t style_screen_label8_main;
	lv_style_init(&style_screen_label8_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label8_main
	lv_style_set_radius(&style_screen_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label8_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label8_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label8_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label8_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label8_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label8_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label8_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label8_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label8, LV_LABEL_PART_MAIN, &style_screen_label8_main);
	lv_obj_set_pos(ui->screen_label8, 94, 257);
	lv_obj_set_size(ui->screen_label8, 50, 0);

	//Write codes screen_label9
	ui->screen_label9 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label9, "App Order");
	lv_label_set_long_mode(ui->screen_label9, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label9, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label9
	static lv_style_t style_screen_label9_main;
	lv_style_init(&style_screen_label9_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label9_main
	lv_style_set_radius(&style_screen_label9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label9_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label9_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label9_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label9_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label9_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label9_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label9_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label9_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label9, LV_LABEL_PART_MAIN, &style_screen_label9_main);
	lv_obj_set_pos(ui->screen_label9, 164, 256);
	lv_obj_set_size(ui->screen_label9, 82, 0);

	//Write codes screen_label10
	ui->screen_label10 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label10, "Payment Mode");
	lv_label_set_long_mode(ui->screen_label10, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label10, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label10
	static lv_style_t style_screen_label10_main;
	lv_style_init(&style_screen_label10_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label10_main
	lv_style_set_radius(&style_screen_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label10_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label10_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label10_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label10_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label10_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label10_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label10_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label10_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label10, LV_LABEL_PART_MAIN, &style_screen_label10_main);
	lv_obj_set_pos(ui->screen_label10, 264, 248);
	lv_obj_set_size(ui->screen_label10, 67, 0);

	//Write codes screen_label11
	ui->screen_label11 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label11, "Undo");
	lv_label_set_long_mode(ui->screen_label11, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label11, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label11
	static lv_style_t style_screen_label11_main;
	lv_style_init(&style_screen_label11_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label11_main
	lv_style_set_radius(&style_screen_label11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label11_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label11_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label11_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label11_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label11_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label11_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label11_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label11_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label11, LV_LABEL_PART_MAIN, &style_screen_label11_main);
	lv_obj_set_pos(ui->screen_label11, 350, 256);
	lv_obj_set_size(ui->screen_label11, 50, 0);

	//Write codes screen_label12
	ui->screen_label12 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label12, "Next");
	lv_label_set_long_mode(ui->screen_label12, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_label12, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_label12
	static lv_style_t style_screen_label12_main;
	lv_style_init(&style_screen_label12_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_label12_main
	lv_style_set_radius(&style_screen_label12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_label12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_label12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_label12_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_label12_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen_label12_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label12_main, LV_STATE_DEFAULT, &lv_font_simsun_12);
	lv_style_set_text_letter_space(&style_screen_label12_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label12_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label12, LV_LABEL_PART_MAIN, &style_screen_label12_main);
	lv_obj_set_pos(ui->screen_label12, 414, 255);
	lv_obj_set_size(ui->screen_label12, 50, 0);

	//Write codes screen_imgbtn12
	ui->screen_imgbtn12 = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_imgbtn12
	static lv_style_t style_screen_imgbtn12_main;
	lv_style_init(&style_screen_imgbtn12_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_imgbtn12_main
	lv_style_set_text_color(&style_screen_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_imgbtn12_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_imgbtn12_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_imgbtn12_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_imgbtn12, LV_IMGBTN_PART_MAIN, &style_screen_imgbtn12_main);
	lv_obj_set_pos(ui->screen_imgbtn12, 271, 211);
	lv_obj_set_size(ui->screen_imgbtn12, 54, 40);
	lv_imgbtn_set_src(ui->screen_imgbtn12,LV_BTN_STATE_RELEASED,&_paymode_alpha_54x40);
	lv_imgbtn_set_checkable(ui->screen_imgbtn12, true);

	//Init events for screen
	events_init_screen(ui);
}