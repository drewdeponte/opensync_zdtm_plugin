/*
 * Copyright 2005-2006 Andrew De Ponte
 * 
 * This file is part of os_zdtm_plugin.
 * 
 * os_zdtm_plugin is free software; you can redistribute it and/or
 * modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * any later version.
 * 
 * os_zdtm_plugin is distributed in the hopes that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with os_zdtm_plugin; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

/*
 * Here you can specify a plugin if you like.
 * You should use a format plugin, if the format conversion
 * is rather difficult or if other plugins might be able to reuse
 * your conversion
 * 
 */
#include <opensync/opensync.h>
#include "zdtm_sync.h"

static char *print_zdtm_contact(OSyncChange *change)
{
	/*
	 * If your format is not in a human printable format already
	 * you have to return a human readable string here describing the object
	 * as closely as possible. This information will be used by the user to decide
	 * which object to pick in a conflict.
	 * 
	 */
	 return NULL;
}

static void destroy_zdtm_contact(char *input, size_t inpsize)
{
	/*
	 * Here you have to free the data allocated by your format
	 * 
	 */
}

static osync_bool conv_zdtm_contact_to_xml(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static osync_bool conv_xml_to_zdtm_contact(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static char *print_zdtm_todo(OSyncChange *change)
{
	/*
	 * If your format is not in a human printable format already
	 * you have to return a human readable string here describing the object
	 * as closely as possible. This information will be used by the user to decide
	 * which object to pick in a conflict.
	 * 
	 */
	 return NULL;
}

static void destroy_zdtm_todo(char *input, size_t inpsize)
{
	/*
	 * Here you have to free the data allocated by your format
	 * 
	 */
}

static osync_bool conv_zdtm_todo_to_xml(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static osync_bool conv_xml_to_zdtm_todo(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static void destroy_zdtm_event(char *input, size_t inpsize)
{
	/*
	 * Here you have to free the data allocated by your format
	 * 
	 */
}

static osync_bool conv_zdtm_event_to_xml(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static osync_bool conv_xml_to_zdtm_event(void *conv_data, char *input, int inpsize, char **output, int *outpsize, osync_bool *free_input, OSyncError **error) {
	/*
	 * This function can be used to convert your format to another format.
	 * Return TRUE if the conversion was successfull or return FALSE and set
	 * the error if something bad has happend.
	 * 
	 */
	
	/* The arguments mean:
	 * 
	 * - conv_data:
	 * Pointer to the data you returned in your init function (if any)
	 * 
	 * - input:
	 * The data you need to convert
	 * - inpsize
	 * The size of the input data
	 * 
	 * - output:
	 * After converting you need to set this
	 * to your result
	 * - outpsize:
	 * The size of the output
	 * 
	 * - free_input:
	 * You need to set this to TRUE if opensync
	 * can free the input after the conversion (so you dont
	 * use any reference from or to the input). A example where
	 * *free_input = FALSE; needs to be done would be a encapsulator
	 * that stores the input reference somewhere in its struct
	 * 
	 * - error:
	 * if something bad happens and you cannot convert, set the error!
	 * 
	 */
	
	return TRUE;
}

static char *print_zdtm_event(OSyncChange *change)
{
	/*
	 * If your format is not in a human printable format already
	 * you have to return a human readable string here describing the object
	 * as closely as possible. This information will be used by the user to decide
	 * which object to pick in a conflict.
	 * 
	 */
	 return NULL;
}

void get_info(OSyncEnv *env)
{
	/*
	 * Here you have to give opensync some information about your format
	 * This function will be called directly after the plugin has been loaded.
	 * 
	 */
	
	//Tell opensync for which object type you want to add a format.
	//If the object type does not exist yet, it will be created.

    osync_env_register_objtype(env, "contact");
    osync_env_register_objformat(env, "contact", "zdtm-contact");
	osync_env_format_set_print_func(env, "zdtm-contact",
        print_zdtm_contact);
    osync_env_format_set_destroy_func(env, "zdtm-contact",
        destroy_zdtm_contact);
    
    osync_env_register_converter(env, CONVERTER_CONV, "zdtm-contact",
        "xml-contact", conv_zdtm_contact_to_xml);
    osync_env_register_converter(env, CONVERTER_CONV, "xml-contact",
        "zdtm-contact", conv_xml_to_zdtm_contact);

    osync_env_register_objtype(env, "todo");
    osync_env_register_objformat(env, "todo", "zdtm-todo");
	osync_env_format_set_print_func(env, "zdtm-todo",
        print_zdtm_todo);
    osync_env_format_set_destroy_func(env, "zdtm-todo",
        destroy_zdtm_todo);

    osync_env_register_converter(env, CONVERTER_CONV, "zdtm-todo",
        "xml-todo", conv_zdtm_todo_to_xml);
    osync_env_register_converter(env, CONVERTER_CONV, "xml-todo",
        "zdtm-todo", conv_xml_to_zdtm_todo);

    osync_env_register_objtype(env, "event");
    osync_env_register_objformat(env, "event", "zdtm-event");
	osync_env_format_set_print_func(env, "zdtm-event",
        print_zdtm_event);
    osync_env_format_set_destroy_func(env, "zdtm-event",
        destroy_zdtm_event);
    
    osync_env_register_converter(env, CONVERTER_CONV, "zdtm-event",
        "xml-event", conv_zdtm_event_to_xml);
    osync_env_register_converter(env, CONVERTER_CONV, "xml-event",
        "zdtm-event", conv_xml_to_zdtm_event);
}
