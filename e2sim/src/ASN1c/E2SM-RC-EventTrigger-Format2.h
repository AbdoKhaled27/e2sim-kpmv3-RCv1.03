/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_E2SM_RC_EventTrigger_Format2_H_
#define	_E2SM_RC_EventTrigger_Format2_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RIC-CallProcessType-ID.h"
#include "RIC-CallProcessBreakpoint-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANParameter_Testing;
struct EventTrigger_UE_Info;

/* E2SM-RC-EventTrigger-Format2 */
typedef struct E2SM_RC_EventTrigger_Format2 {
	RIC_CallProcessType_ID_t	 ric_callProcessType_ID;
	RIC_CallProcessBreakpoint_ID_t	 ric_callProcessBreakpoint_ID;
	struct RANParameter_Testing	*associatedE2NodeInfo	/* OPTIONAL */;
	struct EventTrigger_UE_Info	*associatedUEInfo	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_RC_EventTrigger_Format2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_RC_EventTrigger_Format2;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_RC_EventTrigger_Format2_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_RC_EventTrigger_Format2_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_RC_EventTrigger_Format2_H_ */
#include <asn_internal.h>
