/******************************************************************************/
/*																										*/
/* Project Number	: 	RB0505     			     		                       	  		*/
/*																										*/
/*----------------------------------------------------------------------------*/
/*                                                                 			  	*/
/* Filename		: DB_IHM_Setting_Adjust_Psimv_Mode_High_Vte.h  	        		   */
/*                                                           				  		*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C 			Functionnal description : 	datas declaration for             		*/
/*%C        DB_IHM_Setting_Adjust_Psimv_Mode_High_Vte   								*/
/*                                                            				  		*/
/******************************************************************************/
/*%I 	Input Parameter :				 None                            		  	   */
/*%IO Input/Output Parameter :    None  	        			                  	*/
/*%O 	Output Parameter : 			 None 	                 				  		   */
/******************************************************************************/

#ifndef ADJUST_PSIMV_MODE_HIGH_VTE_H
#define ADJUST_PSIMV_MODE_HIGH_VTE_H

/******************************************************************************/
/*                      EXTERNAL FUNCTION DECLARATION	                      	*/
/******************************************************************************/

/* Access to the config write value */
extern void DB_ControlWrite(e_DB_CONTROL Id, UWORD16 Value);

#endif