/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"

lv_chart_series_t *update;
lv_ui *uii;

void update_chart()
{
lv_chart_set_next(uii->screen_chart0, update, 50);
lv_chart_refresh(uii->screen_chart0);
}

void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_chart0
	ui->screen_chart0 = lv_chart_create(ui->screen, NULL);

	//Write style LV_CHART_PART_BG for screen_chart0
	static lv_style_t style_screen_chart0_bg;
	lv_style_init(&style_screen_chart0_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_chart0_bg
	lv_style_set_bg_color(&style_screen_chart0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_chart0_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_chart0_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_chart0_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_chart0, LV_CHART_PART_BG, &style_screen_chart0_bg);

	//Write style LV_CHART_PART_SERIES_BG for screen_chart0
	static lv_style_t style_screen_chart0_series_bg;
	lv_style_init(&style_screen_chart0_series_bg);

	//Write style state: LV_STATE_DEFAULT for style_screen_chart0_series_bg
	lv_style_set_line_color(&style_screen_chart0_series_bg, LV_STATE_DEFAULT, lv_color_make(0xe8, 0xe8, 0xe8));
	lv_style_set_line_width(&style_screen_chart0_series_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_line_opa(&style_screen_chart0_series_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_chart0, LV_CHART_PART_SERIES_BG, &style_screen_chart0_series_bg);
	lv_obj_set_pos(ui->screen_chart0, 78, 80);
	lv_obj_set_size(ui->screen_chart0, 317, 163);
	lv_chart_set_type(ui->screen_chart0,LV_CHART_TYPE_LINE);
	lv_chart_set_range(ui->screen_chart0,0,100);
	lv_chart_set_div_line_count(ui->screen_chart0, 3, 5);
	lv_chart_series_t * screen_chart0_0 = lv_chart_add_series(ui->screen_chart0, lv_color_make(0x00, 0x00, 0x00));
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,10);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,20);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,30);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,40);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,10);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,50);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,70);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,30);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,10);
	lv_chart_set_next(ui->screen_chart0, screen_chart0_0,30);
       
	update=screen_chart0_0;
	uii=ui;
	lv_task_create(update_chart,5000,LV_TASK_PRIO_LOW,NULL);
	//Write codes screen_btn1
	ui->screen_btn1 = lv_btn_create(ui->screen, NULL);

	//Write style LV_BTN_PART_MAIN for screen_btn1
	static lv_style_t style_screen_btn1_main;
	lv_style_init(&style_screen_btn1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn1_main
	lv_style_set_radius(&style_screen_btn1_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_screen_btn1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_btn1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_btn1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_btn1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_screen_btn1_main, LV_STATE_DEFAULT, lv_color_make(0x0f, 0x0f, 0x0f));
	lv_style_set_border_width(&style_screen_btn1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_screen_btn1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_screen_btn1_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_screen_btn1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_btn1, LV_BTN_PART_MAIN, &style_screen_btn1_main);
	lv_obj_set_pos(ui->screen_btn1, 365, 9);
	lv_obj_set_size(ui->screen_btn1, 100, 35);
	ui->screen_btn1_label = lv_label_create(ui->screen_btn1, NULL);
	lv_label_set_text(ui->screen_btn1_label, "Start");
	lv_obj_set_style_local_text_color(ui->screen_btn1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->screen_btn1_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_12);

	//Write codes screen_label2
	ui->screen_label2 = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_label2, "Internet Speed");
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
	lv_style_set_text_font(&style_screen_label2_main, LV_STATE_DEFAULT, &lv_font_simsun_16);
	lv_style_set_text_letter_space(&style_screen_label2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_label2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_label2, LV_LABEL_PART_MAIN, &style_screen_label2_main);
	lv_obj_set_pos(ui->screen_label2, 107, 13);
	lv_obj_set_size(ui->screen_label2, 94, 0);

	//Init events for screen
	events_init_screen(ui);
}
