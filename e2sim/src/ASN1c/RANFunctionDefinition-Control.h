/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_RANFunctionDefinition_Control_H_
#define	_RANFunctionDefinition_Control_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RANFunctionDefinition_Control_Item;

/* RANFunctionDefinition-Control */
typedef struct RANFunctionDefinition_Control {
	struct RANFunctionDefinition_Control__ric_ControlStyle_List {
		A_SEQUENCE_OF(struct RANFunctionDefinition_Control_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ric_ControlStyle_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANFunctionDefinition_Control_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANFunctionDefinition_Control;
extern asn_SEQUENCE_specifics_t asn_SPC_RANFunctionDefinition_Control_specs_1;
extern asn_TYPE_member_t asn_MBR_RANFunctionDefinition_Control_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RANFunctionDefinition_Control_H_ */
#include <asn_internal.h>
