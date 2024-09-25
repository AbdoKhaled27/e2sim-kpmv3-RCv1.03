/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_E2SM_RC_ActionDefinition_H_
#define	_E2SM_RC_ActionDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RIC-Style-Type.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR {
	E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR_NOTHING,	/* No components present */
	E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR_actionDefinition_Format1,
	E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR_actionDefinition_Format2,
	E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR_actionDefinition_Format3,
	E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR_actionDefinition_Format4
	/* Extensions may appear below */
	
} E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR;

/* Forward declarations */
struct E2SM_RC_ActionDefinition_Format1;
struct E2SM_RC_ActionDefinition_Format2;
struct E2SM_RC_ActionDefinition_Format3;
struct E2SM_RC_ActionDefinition_Format4;

/* E2SM-RC-ActionDefinition */
typedef struct E2SM_RC_ActionDefinition {
	RIC_Style_Type_t	 ric_Style_Type;
	struct E2SM_RC_ActionDefinition__ric_actionDefinition_formats {
		E2SM_RC_ActionDefinition__ric_actionDefinition_formats_PR present;
		union E2SM_RC_ActionDefinition__ric_actionDefinition_formats_u {
			struct E2SM_RC_ActionDefinition_Format1	*actionDefinition_Format1;
			struct E2SM_RC_ActionDefinition_Format2	*actionDefinition_Format2;
			struct E2SM_RC_ActionDefinition_Format3	*actionDefinition_Format3;
			struct E2SM_RC_ActionDefinition_Format4	*actionDefinition_Format4;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ric_actionDefinition_formats;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_ActionDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ActionDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_ActionDefinition_H_ */
#include <asn_internal.h>
