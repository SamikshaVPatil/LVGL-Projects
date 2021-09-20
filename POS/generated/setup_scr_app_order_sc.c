/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_app_order_sc(lv_ui *ui){

	//Write codes app_order_sc
	ui->app_order_sc = lv_obj_create(NULL, NULL);

	//Write codes app_order_sc_table0
	ui->app_order_sc_table0 = lv_table_create(ui->app_order_sc, NULL);

	//Write style LV_TABLE_PART_BG for app_order_sc_table0
	static lv_style_t style_app_order_sc_table0_bg;
	lv_style_init(&style_app_order_sc_table0_bg);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_table0_bg
	lv_style_set_bg_color(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, lv_color_make(0xd5, 0xde, 0xe6));
	lv_style_set_border_width(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 1);
	lv_style_set_text_color(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, lv_color_make(0x39, 0x3c, 0x41));
	lv_style_set_text_decor(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, LV_TEXT_DECOR_NONE);
	lv_style_set_pad_left(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_right(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_top(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 10);
	lv_style_set_pad_bottom(&style_app_order_sc_table0_bg, LV_STATE_DEFAULT, 10);
	lv_obj_add_style(ui->app_order_sc_table0, LV_TABLE_PART_BG, &style_app_order_sc_table0_bg);

	//Write style LV_TABLE_PART_CELL1 for app_order_sc_table0
	static lv_style_t style_app_order_sc_table0_cell1;
	lv_style_init(&style_app_order_sc_table0_cell1);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_table0_cell1
	lv_style_set_border_color(&style_app_order_sc_table0_cell1, LV_STATE_DEFAULT, lv_color_make(0xd5, 0xde, 0xe6));
	lv_style_set_border_width(&style_app_order_sc_table0_cell1, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->app_order_sc_table0, LV_TABLE_PART_CELL1, &style_app_order_sc_table0_cell1);
	lv_obj_set_pos(ui->app_order_sc_table0, 28, 16);
	lv_table_set_col_cnt(ui->app_order_sc_table0,3);
	lv_table_set_row_cnt(ui->app_order_sc_table0,4);
	lv_table_set_cell_value(ui->app_order_sc_table0,0,0,"Order ID");
	lv_table_set_cell_value(ui->app_order_sc_table0,1,0,"1");
	lv_table_set_cell_value(ui->app_order_sc_table0,2,0,"2");
	lv_table_set_cell_value(ui->app_order_sc_table0,3,0,"3");
	lv_table_set_cell_value(ui->app_order_sc_table0,0,1,"Mode");
	lv_table_set_cell_value(ui->app_order_sc_table0,1,1,"COD");
	lv_table_set_cell_value(ui->app_order_sc_table0,2,1,"UPI");
	lv_table_set_cell_value(ui->app_order_sc_table0,3,1,"COD");
	lv_table_set_cell_value(ui->app_order_sc_table0,0,2,"Value");
	lv_table_set_cell_value(ui->app_order_sc_table0,1,2,"200");
	lv_table_set_cell_value(ui->app_order_sc_table0,2,2,"30");
	lv_table_set_cell_value(ui->app_order_sc_table0,3,2,"60");
	lv_obj_set_style_local_pad_left(ui->app_order_sc_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_right(ui->app_order_sc_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_top(ui->app_order_sc_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_bottom(ui->app_order_sc_table0, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 10);

	//Write codes app_order_sc_imgbtn1
	ui->app_order_sc_imgbtn1 = lv_imgbtn_create(ui->app_order_sc, NULL);

	//Write style LV_IMGBTN_PART_MAIN for app_order_sc_imgbtn1
	static lv_style_t style_app_order_sc_imgbtn1_main;
	lv_style_init(&style_app_order_sc_imgbtn1_main);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_imgbtn1_main
	lv_style_set_text_color(&style_app_order_sc_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_app_order_sc_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_order_sc_imgbtn1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_order_sc_imgbtn1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_order_sc_imgbtn1, LV_IMGBTN_PART_MAIN, &style_app_order_sc_imgbtn1_main);
	lv_obj_set_pos(ui->app_order_sc_imgbtn1, 375, 211);
	lv_obj_set_size(ui->app_order_sc_imgbtn1, 50, 50);
	lv_imgbtn_set_src(ui->app_order_sc_imgbtn1,LV_BTN_STATE_RELEASED,&_undo_alpha_50x50);
	lv_imgbtn_set_checkable(ui->app_order_sc_imgbtn1, true);

	//Write codes app_order_sc_imgbtn2
	ui->app_order_sc_imgbtn2 = lv_imgbtn_create(ui->app_order_sc, NULL);

	//Write style LV_IMGBTN_PART_MAIN for app_order_sc_imgbtn2
	static lv_style_t style_app_order_sc_imgbtn2_main;
	lv_style_init(&style_app_order_sc_imgbtn2_main);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_imgbtn2_main
	lv_style_set_text_color(&style_app_order_sc_imgbtn2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_app_order_sc_imgbtn2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_order_sc_imgbtn2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_order_sc_imgbtn2_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_order_sc_imgbtn2, LV_IMGBTN_PART_MAIN, &style_app_order_sc_imgbtn2_main);
	lv_obj_set_pos(ui->app_order_sc_imgbtn2, 19, 212);
	lv_obj_set_size(ui->app_order_sc_imgbtn2, 72, 50);
	lv_imgbtn_set_src(ui->app_order_sc_imgbtn2,LV_BTN_STATE_RELEASED,&_sig_alpha_72x50);
	lv_imgbtn_set_checkable(ui->app_order_sc_imgbtn2, true);

	//Write codes app_order_sc_imgbtn3
	ui->app_order_sc_imgbtn3 = lv_imgbtn_create(ui->app_order_sc, NULL);

	//Write style LV_IMGBTN_PART_MAIN for app_order_sc_imgbtn3
	static lv_style_t style_app_order_sc_imgbtn3_main;
	lv_style_init(&style_app_order_sc_imgbtn3_main);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_imgbtn3_main
	lv_style_set_text_color(&style_app_order_sc_imgbtn3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_app_order_sc_imgbtn3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_order_sc_imgbtn3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_order_sc_imgbtn3_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_order_sc_imgbtn3, LV_IMGBTN_PART_MAIN, &style_app_order_sc_imgbtn3_main);
	lv_obj_set_pos(ui->app_order_sc_imgbtn3, 245, 212);
	lv_obj_set_size(ui->app_order_sc_imgbtn3, 62, 50);
	lv_imgbtn_set_src(ui->app_order_sc_imgbtn3,LV_BTN_STATE_RELEASED,&_uber_alpha_62x50);
	lv_imgbtn_set_checkable(ui->app_order_sc_imgbtn3, true);

	//Write codes app_order_sc_imgbtn4
	ui->app_order_sc_imgbtn4 = lv_imgbtn_create(ui->app_order_sc, NULL);

	//Write style LV_IMGBTN_PART_MAIN for app_order_sc_imgbtn4
	static lv_style_t style_app_order_sc_imgbtn4_main;
	lv_style_init(&style_app_order_sc_imgbtn4_main);

	//Write style state: LV_STATE_DEFAULT for style_app_order_sc_imgbtn4_main
	lv_style_set_text_color(&style_app_order_sc_imgbtn4_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_app_order_sc_imgbtn4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_app_order_sc_imgbtn4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_app_order_sc_imgbtn4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->app_order_sc_imgbtn4, LV_IMGBTN_PART_MAIN, &style_app_order_sc_imgbtn4_main);
	lv_obj_set_pos(ui->app_order_sc_imgbtn4, 130, 214);
	lv_obj_set_size(ui->app_order_sc_imgbtn4, 70, 50);
	lv_imgbtn_set_src(ui->app_order_sc_imgbtn4,LV_BTN_STATE_RELEASED,&_redbus_alpha_70x50);
	lv_imgbtn_set_checkable(ui->app_order_sc_imgbtn4, true);

	//Init events for screen
	events_init_app_order_sc(ui);
}