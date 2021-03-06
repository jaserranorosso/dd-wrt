/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.access_functions.conf,v 1.6 2003/09/11 22:48:49 rstory Exp $
 */
#ifndef QOS_ACCESS_H
#define QOS_ACCESS_H

/** User-defined data access functions for data in table qosObjectTable */
/** row level accessors */
//Netsnmp_First_Data_Point _get_first_data_point;
//Netsnmp_Next_Data_Point _get_next_data_point;

Netsnmp_First_Data_Point qosObjectTable_get_first_data_point;
Netsnmp_Next_Data_Point qosObjectTable_get_next_data_point;

int             qosObjectTable_commit_row(void **my_data_context,
                                          int new_or_del);
void           *qosObjectTable_create_data_context(netsnmp_variable_list *
                                                   index_data);

/** column accessors */
long           *get_qosDeviceType(void *data_context, size_t * ret_len);
long           *get_qosDeviceIndex(void *data_context, size_t * ret_len);
u_long           *get_qosMajorHandle(void *data_context, size_t * ret_len);
u_long           *get_qosMinorHandle(void *data_context, size_t * ret_len);
u_long           *get_qosParent(void *data_context, size_t * ret_len);
char 		*get_qosTextParent(void *data_context, size_t * ret_len);
char 		*get_qosTextHandle(void *data_context, size_t * ret_len);
char 		*get_qosTextLeaf(void *data_context, size_t * ret_len);
char 		*get_qosDeviceName(void *data_context, size_t * ret_len);
char 		*get_qosType(void *data_context, size_t * ret_len);
unsigned long long         *get_qosBytes(void *data_context, size_t * ret_len);
u_long         *get_qosPackets(void *data_context, size_t * ret_len);
u_long         *get_qosDropped(void *data_context, size_t * ret_len);
u_long         *get_qosOverlimit(void *data_context, size_t * ret_len);


u_long         *get_qosBps(void *data_context, size_t * ret_len);
u_long         *get_qosPps(void *data_context, size_t * ret_len);
u_long         *get_qosQlen(void *data_context, size_t * ret_len);
u_long         *get_qosBacklog(void *data_context, size_t * ret_len);

u_long         *get_redEarly(void *data_context, size_t * ret_len);
u_long         *get_redPdrop(void *data_context, size_t * ret_len);
u_long         *get_redOther(void *data_context, size_t * ret_len);
u_long         *get_redMarked(void *data_context, size_t * ret_len);

u_long         *get_htbLends(void *data_context, size_t * ret_len);
u_long         *get_htbBorrows(void *data_context, size_t * ret_len);
u_long         *get_htbGiants(void *data_context, size_t * ret_len);
u_long         *get_htbTokens(void *data_context, size_t * ret_len);
u_long         *get_htbCTokens(void *data_context, size_t * ret_len);
u_long         *get_htbRate(void *data_context, size_t * ret_len);
u_long         *get_htbCeil(void *data_context, size_t * ret_len);
u_long         *get_htbPrio(void *data_context, size_t * ret_len);

u_long         *get_cbqBorrows(void *data_context, size_t * ret_len);
u_long         *get_cbqOveractions(void *data_context, size_t * ret_len);
long    	*get_cbqAvgidle(void *data_context, size_t * ret_len);
long 	        *get_cbqUndertime(void *data_context, size_t * ret_len);
char 		*get_qosInfo(void *data_context, size_t * ret_len);

#endif                          /* QOS_ACCESS_H */
