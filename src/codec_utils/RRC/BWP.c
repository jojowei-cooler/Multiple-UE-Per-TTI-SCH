/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "BWP.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_locationAndBandwidth_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 37949)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cyclicPrefix_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cyclicPrefix_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_locationAndBandwidth_constr_2 CC_NOTUSED = {
	{ 2, 1 }	/* (0..37949) */,
	-1};
static asn_per_constraints_t asn_PER_memb_locationAndBandwidth_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  37949 }	/* (0..37949) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cyclicPrefix_value2enum_4[] = {
	{ 0,	8,	"extended" }
};
static const unsigned int asn_MAP_cyclicPrefix_enum2value_4[] = {
	0	/* extended(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cyclicPrefix_specs_4 = {
	asn_MAP_cyclicPrefix_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_cyclicPrefix_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cyclicPrefix_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cyclicPrefix_4 = {
	"cyclicPrefix",
	"cyclicPrefix",
	&asn_OP_NativeEnumerated,
	asn_DEF_cyclicPrefix_tags_4,
	sizeof(asn_DEF_cyclicPrefix_tags_4)
		/sizeof(asn_DEF_cyclicPrefix_tags_4[0]) - 1, /* 1 */
	asn_DEF_cyclicPrefix_tags_4,	/* Same as above */
	sizeof(asn_DEF_cyclicPrefix_tags_4)
		/sizeof(asn_DEF_cyclicPrefix_tags_4[0]), /* 2 */
	{ &asn_OER_type_cyclicPrefix_constr_4, &asn_PER_type_cyclicPrefix_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cyclicPrefix_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BWP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BWP, locationAndBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_locationAndBandwidth_constr_2, &asn_PER_memb_locationAndBandwidth_constr_2,  memb_locationAndBandwidth_constraint_1 },
		0, 0, /* No default value */
		"locationAndBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BWP, subcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacing"
		},
	{ ATF_POINTER, 1, offsetof(struct BWP, cyclicPrefix),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cyclicPrefix_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicPrefix"
		},
};
static const int asn_MAP_BWP_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_BWP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BWP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* locationAndBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cyclicPrefix */
};
asn_SEQUENCE_specifics_t asn_SPC_BWP_specs_1 = {
	sizeof(struct BWP),
	offsetof(struct BWP, _asn_ctx),
	asn_MAP_BWP_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BWP_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BWP = {
	"BWP",
	"BWP",
	&asn_OP_SEQUENCE,
	asn_DEF_BWP_tags_1,
	sizeof(asn_DEF_BWP_tags_1)
		/sizeof(asn_DEF_BWP_tags_1[0]), /* 1 */
	asn_DEF_BWP_tags_1,	/* Same as above */
	sizeof(asn_DEF_BWP_tags_1)
		/sizeof(asn_DEF_BWP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BWP_1,
	3,	/* Elements count */
	&asn_SPC_BWP_specs_1	/* Additional specs */
};

