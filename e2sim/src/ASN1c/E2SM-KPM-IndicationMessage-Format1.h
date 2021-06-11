/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D ./gen_files`
 */

#ifndef	_E2SM_KPM_IndicationMessage_Format1_H_
#define	_E2SM_KPM_IndicationMessage_Format1_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellObjectID.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PM_Containers_Item;
struct PerUE_PM_Item;

/* E2SM-KPM-IndicationMessage-Format1 */
typedef struct E2SM_KPM_IndicationMessage_Format1 {
	struct E2SM_KPM_IndicationMessage_Format1__pm_Containers {
		A_SEQUENCE_OF(struct PM_Containers_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} pm_Containers;
	CellObjectID_t	 cellObjectID;
	struct E2SM_KPM_IndicationMessage_Format1__list_of_matched_UEs {
		A_SEQUENCE_OF(struct PerUE_PM_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *list_of_matched_UEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_IndicationMessage_Format1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_IndicationMessage_Format1;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_IndicationMessage_Format1_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_IndicationMessage_Format1_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_IndicationMessage_Format1_H_ */
#include <asn_internal.h>
