/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D ./gen_files`
 */

#ifndef	_RANcallProcess_ID_string_H_
#define	_RANcallProcess_ID_string_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANcallProcess-ID-string */
typedef PrintableString_t	 RANcallProcess_ID_string_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANcallProcess_ID_string;
asn_struct_free_f RANcallProcess_ID_string_free;
asn_struct_print_f RANcallProcess_ID_string_print;
asn_constr_check_f RANcallProcess_ID_string_constraint;
ber_type_decoder_f RANcallProcess_ID_string_decode_ber;
der_type_encoder_f RANcallProcess_ID_string_encode_der;
xer_type_decoder_f RANcallProcess_ID_string_decode_xer;
xer_type_encoder_f RANcallProcess_ID_string_encode_xer;
oer_type_decoder_f RANcallProcess_ID_string_decode_oer;
oer_type_encoder_f RANcallProcess_ID_string_encode_oer;
per_type_decoder_f RANcallProcess_ID_string_decode_uper;
per_type_encoder_f RANcallProcess_ID_string_encode_uper;
per_type_decoder_f RANcallProcess_ID_string_decode_aper;
per_type_encoder_f RANcallProcess_ID_string_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RANcallProcess_ID_string_H_ */
#include <asn_internal.h>
