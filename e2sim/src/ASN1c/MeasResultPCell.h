/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D ./gen_files`
 */

#ifndef	_MeasResultPCell_H_
#define	_MeasResultPCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultPCell */
typedef struct MeasResultPCell {
	RSRP_Range_t	 rsrpResult;
	RSRQ_Range_t	 rsrqResult;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultPCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultPCell;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultPCell_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultPCell_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultPCell_H_ */
#include <asn_internal.h>
