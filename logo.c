/*
 * logo.c
 *
 *  Created on: Apr 27, 2021
 *      Author: Justin Qiao
 */

#include <logo.h>

/* 
 *  Image data for the logo
 */
const uint8_t logoBitmaps[] =
{
 0x7F, 0x80, 0x7F, 0xC0, 0x3F, 0xFC, 0x03, 0x80, 0x30, 0x1E, 0x3F, 0xFC, 0x3F, 0xC0, //  ########        #########        ############        ###         ##       ####   ############    ########
 0xFF, 0xF0, 0x7F, 0xF8, 0x3F, 0xFC, 0x07, 0x80, 0x78, 0x3E, 0x3F, 0xFC, 0x7F, 0xF8, // ############     ############     ############       ####        ####     #####   ############   ############
 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFC, 0x07, 0xC0, 0x78, 0x7C, 0x3F, 0xFC, 0x7F, 0xFC, // #############    #############    ############       #####       ####    #####    ############   #############
 0xF0, 0x3C, 0x70, 0x1C, 0x38, 0x00, 0x0F, 0xC0, 0x78, 0xF8, 0x38, 0x00, 0x78, 0x1E, // ####      ####   ###       ###    ###               ######       ####   #####     ###            ####      ####
 0xF0, 0x3C, 0x70, 0x1E, 0x38, 0x00, 0x0F, 0xE0, 0x78, 0xF0, 0x38, 0x00, 0x78, 0x0E, // ####      ####   ###       ####   ###               #######      ####   ####      ###            ####       ###
 0xF0, 0x3C, 0x70, 0x1E, 0x38, 0x00, 0x0E, 0xE0, 0x79, 0xE0, 0x38, 0x00, 0x78, 0x0E, // ####      ####   ###       ####   ###               ### ###      ####  ####       ###            ####       ###
 0xF0, 0x38, 0x70, 0x1C, 0x38, 0x00, 0x1C, 0xE0, 0x73, 0xC0, 0x38, 0x00, 0x78, 0x1E, // ####      ###    ###       ###    ###              ###  ###      ###  ####        ###            ####      ####
 0xFF, 0xF0, 0x7F, 0xFC, 0x3F, 0xF8, 0x1C, 0x70, 0x7F, 0xC0, 0x3F, 0xFC, 0x7F, 0xFC, // ############     #############    ###########      ###   ###     #########        ############   #############
 0xFF, 0xF0, 0x7F, 0xF8, 0x3F, 0xF8, 0x3C, 0x70, 0x7F, 0xE0, 0x3F, 0xFC, 0x7F, 0xF8, // ############     ############     ###########     ####   ###     ##########       ############   ############
 0xF7, 0xF8, 0x7F, 0xE0, 0x38, 0x00, 0x38, 0x78, 0x7E, 0xE0, 0x38, 0x00, 0x7F, 0xE0, // #### ########    ##########       ###             ###    ####    ###### ###       ###            ##########
 0xF0, 0x1C, 0x70, 0xF0, 0x38, 0x00, 0x3F, 0xF8, 0x7C, 0x70, 0x38, 0x00, 0x78, 0xF0, // ####       ###   ###    ####      ###             ###########    #####   ###      ###            ####   ####
 0xF0, 0x1C, 0x70, 0x78, 0x38, 0x00, 0x7F, 0xF8, 0x78, 0x78, 0x38, 0x00, 0x78, 0x78, // ####       ###   ###     ####     ###            ############    ####    ####     ###            ####    ####
 0xF0, 0x1C, 0x70, 0x38, 0x38, 0x00, 0x7F, 0xFC, 0x78, 0x38, 0x38, 0x00, 0x78, 0x3C, // ####       ###   ###      ###     ###            #############   ####     ###     ###            ####     ####
 0xF0, 0x3C, 0x70, 0x3C, 0x38, 0x00, 0x70, 0x1C, 0x78, 0x1C, 0x38, 0x00, 0x78, 0x1C, // ####      ####   ###      ####    ###            ###       ###   ####      ###    ###            ####      ###
 0xFF, 0xF8, 0x70, 0x1E, 0x3F, 0xFC, 0xE0, 0x1E, 0x78, 0x1E, 0x3F, 0xFE, 0x78, 0x1E, // #############    ###       ####   ############  ###        ####  ####      ####   #############  ####      ####
 0xFF, 0xF0, 0x70, 0x0E, 0x3F, 0xFC, 0xE0, 0x0E, 0x78, 0x0E, 0x3F, 0xFC, 0x78, 0x0F, // ############     ###        ###   ############  ###         ###  ####       ###   ############   ####       ####
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, //                                                                                #                               #
};

/* Bitmap sizes for logo */
const uint8_t logoWidthPixels = 112;
const uint8_t logoHeightPixels = 17;

