/*
 * Copyright 2005-2006 Andrew De Ponte
 * 
 * This file is part of os_zdtm_plugin.
 * 
 * os_zdtm_plugin is free software; you can redistribute it and/or modify
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

#include "zdtm.h"

//Specify any structs etc here.

typedef struct plugin_environment {
    OSyncMember *member;
    //If you need a hashtable:
    OSyncHashTable *hashtable;
    //More stuff you need goes here

    // The Zaurus DTM environment
    struct zdtm_environment zdtm_env;
} zdtm_plugin_env;
