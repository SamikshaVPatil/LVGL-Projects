/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"
#include "setup_scr_screen1.h"
#include "setup_scr_screen2.h"
#include "setup_scr_screen3.h"

void events_init(lv_ui *ui)
{
}

static void screen1_imgbtn9event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task1=setup_scr_scr1();
		lv_task_del(task1);

		lv_obj_clean(lv_scr_act());
		setup_scr_screen1(&guider_ui);
		lv_scr_load(guider_ui.screen1);
	}
		break;
	default:
		break;
	}
}

static void screen1_imgbtn10event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task1=setup_scr_scr1();
		lv_task_del(task1);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen1(&guider_ui);
		lv_scr_load(guider_ui.screen1);
	}
		break;
	default:
		break;
	}
}

static void screen1_imgbtn11event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task1=setup_scr_scr1();
		lv_task_del(task1);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen3(&guider_ui);
		lv_scr_load(guider_ui.screen3);
	}
		break;
	default:
		break;
	}
}

static void screen1_imgbtn12event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task1=setup_scr_scr1();
		lv_task_del(task1);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen2(&guider_ui);
		lv_scr_load(guider_ui.screen2);
	}
		break;
	default:
		break;
	}
}

void events_init_screen1(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen1_imgbtn9, screen1_imgbtn9event_handler);
	lv_obj_set_event_cb(ui->screen1_imgbtn10, screen1_imgbtn10event_handler);
	lv_obj_set_event_cb(ui->screen1_imgbtn11, screen1_imgbtn11event_handler);
	lv_obj_set_event_cb(ui->screen1_imgbtn12, screen1_imgbtn12event_handler);
}

static void screen2_imgbtn8event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task2=setup_scr_scr2();
		lv_task_del(task2);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen1(&guider_ui);
		lv_scr_load(guider_ui.screen1);
	}
		break;
	default:
		break;
	}
}

static void screen2_imgbtn9event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task2=setup_scr_scr2();
		lv_task_del(task2);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen3(&guider_ui);
		lv_scr_load(guider_ui.screen3);
	}
		break;
	default:
		break;
	}
}

static void screen2_imgbtn10event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task2=setup_scr_scr2();
		lv_task_del(task2);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen1(&guider_ui);
		lv_scr_load(guider_ui.screen1);
	}
		break;
	default:
		break;
	}
}

static void screen2_imgbtn11event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task2=setup_scr_scr2();
		lv_task_del(task2);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen2(&guider_ui);
		lv_scr_load(guider_ui.screen2);
	}
		break;
	default:
		break;
	}
}

void events_init_screen2(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen2_imgbtn8, screen2_imgbtn8event_handler);
	lv_obj_set_event_cb(ui->screen2_imgbtn9, screen2_imgbtn9event_handler);
	lv_obj_set_event_cb(ui->screen2_imgbtn10, screen2_imgbtn10event_handler);
	lv_obj_set_event_cb(ui->screen2_imgbtn11, screen2_imgbtn11event_handler);
}

static void screen3_imgbtn9event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task3=setup_scr_scr3();
		lv_task_del(task3);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen3(&guider_ui);
		lv_scr_load(guider_ui.screen3);
	}
		break;
	default:
		break;
	}
}

static void screen3_imgbtn10event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task3=setup_scr_scr3();
		lv_task_del(task3);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen2(&guider_ui);
		lv_scr_load(guider_ui.screen2);
	}
		break;
	default:
		break;
	}
}

static void screen3_imgbtn11event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task3=setup_scr_scr3();
		lv_task_del(task3);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen1(&guider_ui);
		lv_scr_load(guider_ui.screen1);
	}
		break;
	default:
		break;
	}
}

static void screen3_imgbtn12event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{	lv_task_t* task3=setup_scr_scr3();
		lv_task_del(task3);
		lv_obj_clean(lv_scr_act());
		setup_scr_screen2(&guider_ui);
		lv_scr_load(guider_ui.screen2);
	}
		break;
	default:
		break;
	}
}

void events_init_screen3(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen3_imgbtn9, screen3_imgbtn9event_handler);
	lv_obj_set_event_cb(ui->screen3_imgbtn10, screen3_imgbtn10event_handler);
	lv_obj_set_event_cb(ui->screen3_imgbtn11, screen3_imgbtn11event_handler);
	lv_obj_set_event_cb(ui->screen3_imgbtn12, screen3_imgbtn12event_handler);
}
