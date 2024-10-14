/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#ifndef	_MeasResultNeighCells_H_
#define	_MeasResultNeighCells_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResultNeighCells_PR {
	MeasResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResultNeighCells_PR_measResultListNR,
	MeasResultNeighCells_PR_measResultListEUTRA
	/* Extensions may appear below */
	
} MeasResultNeighCells_PR;

/* Forward declarations */
struct MeasResultListNR;
struct MeasResultListEUTRA;

/* MeasResultNeighCells */
typedef struct MeasResultNeighCells {
	MeasResultNeighCells_PR present;
	union MeasResultNeighCells_u {
		struct MeasResultListNR	*measResultListNR;
		struct MeasResultListEUTRA	*measResultListEUTRA;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultNeighCells_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultNeighCells;
extern asn_CHOICE_specifics_t asn_SPC_MeasResultNeighCells_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultNeighCells_1[2];
extern asn_per_constraints_t asn_PER_type_MeasResultNeighCells_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultNeighCells_H_ */
#include <asn_internal.h>
