/** \file Variable.h
\brief Define the environment variable
\author alpha_one_x86
\version 0.3
\date 2010 */

#ifndef VARIABLE_H
#define VARIABLE_H

//Un-comment this next line to put ultracopier plugin in debug mode
#define ULTRACOPIER_PLUGIN_DEBUG
#define ULTRACOPIER_PLUGIN_DEBUG_WINDOW
#define ULTRACOPIER_PLUGIN_DEBUG_WINDOW_TIMER		150

#define ULTRACOPIER_PLUGIN_MAXBUFFERBLOCK		64
#define ULTRACOPIER_PLUGIN_MINTIMERINTERVAL		50
#define ULTRACOPIER_PLUGIN_MAXTIMERINTERVAL		100
#define ULTRACOPIER_PLUGIN_NUMSEMSPEEDMANAGEMENT	2
#define ULTRACOPIER_PLUGIN_MAXPARALLELINODEOPT		64
#define ULTRACOPIER_PLUGIN_MAXPARALLELTRANFER		1

//if set, check the inode type at scanFileOrFolder, deprecated into the new algorithm and not used
#define ULTRACOPIER_PLUGIN_CHECKLISTTYPE

#endif // VARIABLE_H


