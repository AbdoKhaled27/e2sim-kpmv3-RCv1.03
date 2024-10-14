/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm_kpm_v03.00_standard.asn1"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_MatchingUEidList_PerGP_H_
#define	_MatchingUEidList_PerGP_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MatchingUEidItem_PerGP;

/* MatchingUEidList-PerGP */
typedef struct MatchingUEidList_PerGP {
	A_SEQUENCE_OF(struct MatchingUEidItem_PerGP) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingUEidList_PerGP_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingUEidList_PerGP;
extern asn_SET_OF_specifics_t asn_SPC_MatchingUEidList_PerGP_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingUEidList_PerGP_1[1];
extern asn_per_constraints_t asn_PER_type_MatchingUEidList_PerGP_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingUEidList_PerGP_H_ */
#include <asn_internal.h>
