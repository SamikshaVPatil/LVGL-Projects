/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"

static lv_obj_t * kb;
static lv_obj_t * ta;

void events_init(lv_ui *ui)
{
}

static void kb_event_cb(lv_obj_t * keyboard, lv_event_t e)
{
    lv_keyboard_def_event_cb(kb, e);
    if(e == LV_EVENT_CANCEL || e== LV_EVENT_APPLY)
 {
    if( kb!= NULL)
 {
    lv_keyboard_set_textarea(kb, NULL);
        lv_obj_del(kb);
        kb = NULL;}
    }
}



static void kb_create(void)
{
    kb = lv_keyboard_create(lv_scr_act(), NULL);
    lv_keyboard_set_cursor_manage(kb, true);
    lv_obj_set_size(kb,  LV_HOR_RES, LV_VER_RES / 2);
    lv_obj_set_event_cb(kb, kb_event_cb);
    lv_keyboard_set_textarea(kb, ta);

}


static void ta_event_cb(lv_obj_t * ta_local, lv_event_t e)
{
    if(e == LV_EVENT_CLICKED && kb == NULL) {
        kb_create();
    }
}

void Print_Bill(void)
{
    static const char * btnsbill[] ={"YES", "NO", ""};

    lv_obj_t * msgb1 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(msgb1, "Do You Want To Print The Bill?");
    lv_msgbox_add_btns(msgb1, btnsbill);
    lv_obj_set_width(msgb1, 400);
    lv_obj_align(msgb1, NULL, LV_ALIGN_CENTER, 0, 0);
}

void Print_eBill(void)
{
    static const char * btns[] ={"Send", "Cancle", ""};

    lv_obj_t * msgb2 = lv_msgbox_create(lv_scr_act(),NULL);
    lv_msgbox_set_text(msgb2,"Enter Your Mobile number");
    lv_obj_set_width(msgb2, 400);
    lv_obj_align(msgb2, NULL, LV_ALIGN_CENTER, 0, 0); 
   
    ta = lv_textarea_create(msgb2, NULL);
    lv_obj_set_size(ta, 100, 20);
    lv_obj_set_event_cb(ta, ta_event_cb);
    lv_obj_set_pos(ta, 0, 0);
    lv_textarea_set_text(ta, "");
    lv_textarea_set_placeholder_text(ta, "Type Number");
    lv_msgbox_add_btns(msgb2, btns);
    lv_obj_align(msgb2, NULL, LV_ALIGN_CENTER, 0, 0);
}

void Pay_Mode(void)
{
    static const char * btnsmode[] ={"COD", "UPI", ""};

    lv_obj_t * msgb3 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(msgb3, "Mode Of Payment:");
    lv_msgbox_add_btns(msgb3, btnsmode);
    lv_obj_set_width(msgb3, 400);
    lv_obj_align(msgb3, NULL, LV_ALIGN_CENTER, 0, 0);
}

void Swig_AR(void)
{
    static const char * btnswig[] ={"Accept", "Reject", ""};

    lv_obj_t * msgb3 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(msgb3, "Continue With Swiggy?");
    lv_msgbox_add_btns(msgb3, btnswig);
    lv_obj_set_width(msgb3, 400);
    lv_obj_align(msgb3, NULL, LV_ALIGN_CENTER, 0, 0);
}
void Redbus_AR(void)
{
    static const char * btnsred[] ={"Accept", "Reject", ""};

    lv_obj_t * msgb3 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(msgb3, "Continue With RedBus?");
    lv_msgbox_add_btns(msgb3, btnsred);
    lv_obj_set_width(msgb3, 400);
    lv_obj_align(msgb3, NULL, LV_ALIGN_CENTER, 0, 0);
}

void Uber_AR(void)
{
    static const char * btnsuber[] ={"Accept", "Reject", ""};

    lv_obj_t * msgb3 = lv_msgbox_create(lv_scr_act(), NULL);
    lv_msgbox_set_text(msgb3, "Continue With Uber?");
    lv_msgbox_add_btns(msgb3, btnsuber);
    lv_obj_set_width(msgb3, 400);
    lv_obj_align(msgb3, NULL, LV_ALIGN_CENTER, 0, 0);
}

static void screen_imgbtn1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_app_order_sc(&guider_ui);
		lv_scr_load(guider_ui.app_order_sc);
	}
		break;
	default:
		break;
	}
}

static void screen_imgbtn2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Print_Bill();
		lv_obj_set_style_local_bg_color(guider_ui.screen_imgbtn2, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void screen_imgbtn5event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Print_eBill();
		lv_obj_set_style_local_bg_color(guider_ui.screen_imgbtn5, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

static void screen_imgbtn4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_screen(&guider_ui);
		lv_scr_load(guider_ui.screen);
	}
		break;
	default:
		break;
	}
}

static void screen_imgbtn6event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_app_order_sc(&guider_ui);
		lv_scr_load(guider_ui.app_order_sc);
	}
		break;
	default:
		break;
	}
}

static void screen_imgbtn12event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Pay_Mode();
		lv_obj_set_style_local_bg_color(guider_ui.screen_imgbtn12, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}
void events_init_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen_imgbtn1, screen_imgbtn1event_handler);
	lv_obj_set_event_cb(ui->screen_imgbtn2, screen_imgbtn2event_handler);
	lv_obj_set_event_cb(ui->screen_imgbtn4, screen_imgbtn4event_handler);
	lv_obj_set_event_cb(ui->screen_imgbtn5, screen_imgbtn5event_handler);
	lv_obj_set_event_cb(ui->screen_imgbtn6, screen_imgbtn6event_handler);
	lv_obj_set_event_cb(ui->screen_imgbtn12, screen_imgbtn12event_handler);
	
}

static void app_order_sc_imgbtn1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_screen(&guider_ui);
		lv_scr_load(guider_ui.screen);
	}
		break;
	default:
		break;
	}
}



static void app_order_sc_imgbtn2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Swig_AR();
		lv_obj_set_style_local_bg_color(guider_ui.app_order_sc_imgbtn2, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}



static void app_order_sc_imgbtn4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Redbus_AR();
		lv_obj_set_style_local_bg_color(guider_ui.app_order_sc_imgbtn4, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}



static void app_order_sc_imgbtn3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		 Uber_AR();
		lv_obj_set_style_local_bg_color(guider_ui.app_order_sc_imgbtn3, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}


void events_init_app_order_sc(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->app_order_sc_imgbtn1, app_order_sc_imgbtn1event_handler);
	lv_obj_set_event_cb(ui->app_order_sc_imgbtn2, app_order_sc_imgbtn2event_handler);
	lv_obj_set_event_cb(ui->app_order_sc_imgbtn4, app_order_sc_imgbtn4event_handler);
	lv_obj_set_event_cb(ui->app_order_sc_imgbtn3, app_order_sc_imgbtn3event_handler);
}
