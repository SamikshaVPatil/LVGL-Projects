/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"

void events_init(lv_ui *ui)
{
}

static void screen_btn5event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{   
		lv_obj_clean(lv_scr_act());
		setup_scr_Change_Password(&guider_ui);
		lv_scr_load(guider_ui.Change_Password);
	}
		break;
	default:
		break;
	}
}

static void screen_btn6event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{ // Declare the file pointer
             FILE *filePointer ;
          // Get the data to be written in file
             const char *un=lv_textarea_get_text(guider_ui.screen_unt);
             char uname[100];
             strcpy(uname,un);
             const char *ps=lv_textarea_get_text(guider_ui.screen_ta4);
             char pword[100];
             strcpy(pword, ps);
     printf("Username is: %s\n",uname);
     printf("Password is: %s\n",pword);
    // Open the existing file infor.txt using fopen() // in write mode using "w" attribute
             filePointer = fopen("input.txt", "w") ;
    // Check if this filePointer is null // which maybe if the file does not exist
    if ( filePointer == NULL )
    {       printf( "input.txt file failed to open." ) ;
    }
    else
    {       printf("The file is now opened.\n") ;
         // Write the dataToBeWritten into the file     
    
   	    fprintf(filePointer,"Username = %s\n", uname);
	    fprintf(filePointer,"Password = %s\n", pword);
 
        fclose(filePointer) ;
        printf("Data successfully written in file input.txt\n");
        printf("The file is now closed.") ;
    }
		lv_obj_clean(lv_scr_act());
		setup_scr_form(&guider_ui);
		lv_scr_load(guider_ui.form);
	}
		break;
	default:
		break;
	}
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen_btn5, screen_btn5event_handler);
	lv_obj_set_event_cb(ui->screen_btn6, screen_btn6event_handler);
}

static void Change_Password_btn9event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{ 
		lv_obj_set_style_local_bg_color(guider_ui.Change_Password_btn9, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	// Declare the file pointer
             FILE *filePointer ;
          // Get the data to be written in file
             const char *un1=lv_textarea_get_text(guider_ui.Change_Password_ta9);
             char uname1[100];
             strcpy(uname1,un1);
             const char *ps1=lv_textarea_get_text(guider_ui.Change_Password_ta10);
             char pword1[100];
             strcpy(pword1, ps1);
             const char *ps2=lv_textarea_get_text(guider_ui.Change_Password_ta8);
             char pword2[100];
             strcpy(pword2, ps2);
     printf("Username is: %s\n",uname1);
     printf("NEW Password is: %s\n",pword1);
     printf("Confirm Password is: %s\n",pword2);
    // Open the existing file infor.txt using fopen() // in write mode using "w" attribute
             filePointer = fopen("input.txt", "r+") ;
    // Check if this filePointer is null // which maybe if the file does not exist
    if ( filePointer == NULL )
    {       printf( "input.txt file failed to open." ) ;
    }
    else
    {       printf("The file is now opened.\n") ;
         // Write the dataToBeWritten into the file     
    
   	    fprintf(filePointer,"Username = %s\n", uname1);
	    fprintf(filePointer,"New Password = %s\n", pword1);
 	    fprintf(filePointer,"Confirm Password = %s\n", pword2);
        fclose(filePointer) ;
        printf("Data successfully written in file input.txt\n");
        printf("The file is now closed.") ;
    }
	}
		break;
	default:
		break;
	}
}

void events_init_Change_Password(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->Change_Password_btn9, Change_Password_btn9event_handler);
}

static void form_btn11event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_CLICKED:
	{ // Declare the file pointer
             FILE *filePointer ;
          // Get the data to be written in file
             const char *tcp1=lv_textarea_get_text(guider_ui.form_ta3);
             char ser[100];
             strcpy(ser,tcp1);
             const char *tcp2=lv_textarea_get_text(guider_ui.form_ta4);
             char por[100];
             strcpy(por, tcp2);
	     const char *rtu1=lv_textarea_get_text(guider_ui.form_ta7);
             char bau[100];
             strcpy(bau,rtu1);
             const char *rtu2=lv_textarea_get_text(guider_ui.form_ta8);
             char rser[100];
             strcpy(rser, rtu2);
     printf("TCP Server ID is: %s\n",ser);
     printf("TCP Port is: %s\n",por);
     printf("RTU Server ID is: %s\n",rser);
     printf("RTU Baud rate is: %s\n",bau);
    // Open the existing file infor.txt using fopen() // in write mode using "w" attribute
             filePointer = fopen("data.txt", "r+") ;
    // Check if this filePointer is null // which maybe if the file does not exist
    if ( filePointer == NULL )
    {       printf( "input.txt file failed to open." ) ;
    }
    else
    {       printf("The file is now opened.\n") ;
         // Write the dataToBeWritten into the file     
    
   	    fprintf(filePointer,"TCP SERVER ID = %s\n", ser);
	    fprintf(filePointer,"TCP PORT = %s\n", por);
	    fprintf(filePointer,"RTU BAUD RATE = %s\n", bau);
	    fprintf(filePointer,"RTU SERVER ID = %s\n", rser);
 
        fclose(filePointer) ;
        printf("Data successfully written in file data.txt\n");
        printf("The file is now closed.") ;
    }
		lv_obj_set_style_local_bg_color(guider_ui.form_btn11, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	}
		break;
	default:
		break;
	}
}

void events_init_form(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->form_btn11, form_btn11event_handler);
}
