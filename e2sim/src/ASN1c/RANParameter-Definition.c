/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "e2sm_rc_v1_03_modified.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "RANParameter-Definition.h"

#include "RANParameter-Definition-Choice.h"
asn_TYPE_member_t asn_MBR_RANParameter_Definition_1[] = {
	{ ATF_POINTER, 0, offsetof(struct RANParameter_Definition, ranParameter_Definition_Choice),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANParameter_Definition_Choice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranParameter-Definition-Choice"
		},
};
static const ber_tlv_tag_t asn_DEF_RANParameter_Definition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANParameter_Definition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ranParameter-Definition-Choice */
};
asn_SEQUENCE_specifics_t asn_SPC_RANParameter_Definition_specs_1 = {
	sizeof(struct RANParameter_Definition),
	offsetof(struct RANParameter_Definition, _asn_ctx),
	asn_MAP_RANParameter_Definition_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANParameter_Definition = {
	"RANParameter-Definition",
	"RANParameter-Definition",
	&asn_OP_SEQUENCE,
	asn_DEF_RANParameter_Definition_tags_1,
	sizeof(asn_DEF_RANParameter_Definition_tags_1)
		/sizeof(asn_DEF_RANParameter_Definition_tags_1[0]), /* 1 */
	asn_DEF_RANParameter_Definition_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANParameter_Definition_tags_1)
		/sizeof(asn_DEF_RANParameter_Definition_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RANParameter_Definition_1,
	1,	/* Elements count */
	&asn_SPC_RANParameter_Definition_specs_1	/* Additional specs */
};

