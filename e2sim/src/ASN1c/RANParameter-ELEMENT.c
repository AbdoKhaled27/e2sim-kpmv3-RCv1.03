/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2sm-kpm-rc"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -no-gen-BER -no-gen-UPER -no-gen-OER -no-gen-JER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps`
 */

#include "RANParameter-ELEMENT.h"

asn_TYPE_member_t asn_MBR_RANParameter_ELEMENT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANParameter_ELEMENT, keyFlag),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"keyFlag"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RANParameter_ELEMENT, ranParameter_Value),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANParameter_Value,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ranParameter-Value"
		},
};
static const ber_tlv_tag_t asn_DEF_RANParameter_ELEMENT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANParameter_ELEMENT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* keyFlag */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranParameter-Value */
};
asn_SEQUENCE_specifics_t asn_SPC_RANParameter_ELEMENT_specs_1 = {
	sizeof(struct RANParameter_ELEMENT),
	offsetof(struct RANParameter_ELEMENT, _asn_ctx),
	asn_MAP_RANParameter_ELEMENT_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANParameter_ELEMENT = {
	"RANParameter-ELEMENT",
	"RANParameter-ELEMENT",
	&asn_OP_SEQUENCE,
	asn_DEF_RANParameter_ELEMENT_tags_1,
	sizeof(asn_DEF_RANParameter_ELEMENT_tags_1)
		/sizeof(asn_DEF_RANParameter_ELEMENT_tags_1[0]), /* 1 */
	asn_DEF_RANParameter_ELEMENT_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANParameter_ELEMENT_tags_1)
		/sizeof(asn_DEF_RANParameter_ELEMENT_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANParameter_ELEMENT_1,
	2,	/* Elements count */
	&asn_SPC_RANParameter_ELEMENT_specs_1	/* Additional specs */
};

