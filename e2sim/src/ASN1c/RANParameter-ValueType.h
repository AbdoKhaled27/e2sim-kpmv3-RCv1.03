/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D ./gen_files`
 */

#ifndef	_RANParameter_ValueType_H_
#define	_RANParameter_ValueType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RANParameter_ValueType_PR {
	RANParameter_ValueType_PR_NOTHING,	/* No components present */
	RANParameter_ValueType_PR_ranParameter_Element,
	RANParameter_ValueType_PR_ranParameter_Structure,
	RANParameter_ValueType_PR_ranParameter_List
	/* Extensions may appear below */
	
} RANParameter_ValueType_PR;

/* Forward declarations */
struct RANParameter_ELEMENT;
struct RANParameter_STRUCTURE;
struct RANParameter_LIST;

/* RANParameter-ValueType */
typedef struct RANParameter_ValueType {
	RANParameter_ValueType_PR present;
	union RANParameter_ValueType_u {
		struct RANParameter_ELEMENT	*ranParameter_Element;
		struct RANParameter_STRUCTURE	*ranParameter_Structure;
		struct RANParameter_LIST	*ranParameter_List;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANParameter_ValueType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANParameter_ValueType;
extern asn_CHOICE_specifics_t asn_SPC_RANParameter_ValueType_specs_1;
extern asn_TYPE_member_t asn_MBR_RANParameter_ValueType_1[3];
extern asn_per_constraints_t asn_PER_type_RANParameter_ValueType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RANParameter_ValueType_H_ */
#include <asn_internal.h>
