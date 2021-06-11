/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D ./gen_files`
 */

#ifndef	_MeasurementValue_H_
#define	_MeasurementValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeReal.h>
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementValue_PR {
	MeasurementValue_PR_NOTHING,	/* No components present */
	MeasurementValue_PR_valueInt,
	MeasurementValue_PR_valueReal,
	MeasurementValue_PR_noValue,
	MeasurementValue_PR_valueRRC
	/* Extensions may appear below */
	
} MeasurementValue_PR;

/* Forward declarations */
struct L3_RRC_Measurements;

/* MeasurementValue */
typedef struct MeasurementValue {
	MeasurementValue_PR present;
	union MeasurementValue_u {
		long	 valueInt;
		double	 valueReal;
		NULL_t	 noValue;
		struct L3_RRC_Measurements	*valueRRC;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementValue;
extern asn_CHOICE_specifics_t asn_SPC_MeasurementValue_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasurementValue_1[4];
extern asn_per_constraints_t asn_PER_type_MeasurementValue_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementValue_H_ */
#include <asn_internal.h>
