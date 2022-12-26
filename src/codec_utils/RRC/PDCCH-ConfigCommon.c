/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "PDCCH-ConfigCommon.h"

#include "ControlResourceSet.h"
#include "SearchSpace.h"
static int
memb_commonSearchSpaceList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_commonSearchSpaceList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_commonSearchSpaceList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_commonSearchSpaceList_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_commonSearchSpaceList_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_commonSearchSpaceList_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SearchSpace,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_commonSearchSpaceList_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_commonSearchSpaceList_specs_5 = {
	sizeof(struct PDCCH_ConfigCommon__commonSearchSpaceList),
	offsetof(struct PDCCH_ConfigCommon__commonSearchSpaceList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commonSearchSpaceList_5 = {
	"commonSearchSpaceList",
	"commonSearchSpaceList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_commonSearchSpaceList_tags_5,
	sizeof(asn_DEF_commonSearchSpaceList_tags_5)
		/sizeof(asn_DEF_commonSearchSpaceList_tags_5[0]) - 1, /* 1 */
	asn_DEF_commonSearchSpaceList_tags_5,	/* Same as above */
	sizeof(asn_DEF_commonSearchSpaceList_tags_5)
		/sizeof(asn_DEF_commonSearchSpaceList_tags_5[0]), /* 2 */
	{ &asn_OER_type_commonSearchSpaceList_constr_5, &asn_PER_type_commonSearchSpaceList_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_commonSearchSpaceList_5,
	1,	/* Single element */
	&asn_SPC_commonSearchSpaceList_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PDCCH_ConfigCommon_1[] = {
	{ ATF_POINTER, 8, offsetof(struct PDCCH_ConfigCommon, controlResourceSetZero),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ControlResourceSetZero,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"controlResourceSetZero"
		},
	{ ATF_POINTER, 7, offsetof(struct PDCCH_ConfigCommon, commonControlResourceSet),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ControlResourceSet,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"commonControlResourceSet"
		},
	{ ATF_POINTER, 6, offsetof(struct PDCCH_ConfigCommon, searchSpaceZero),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceZero,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"searchSpaceZero"
		},
	{ ATF_POINTER, 5, offsetof(struct PDCCH_ConfigCommon, commonSearchSpaceList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_commonSearchSpaceList_5,
		0,
		{ &asn_OER_memb_commonSearchSpaceList_constr_5, &asn_PER_memb_commonSearchSpaceList_constr_5,  memb_commonSearchSpaceList_constraint_1 },
		0, 0, /* No default value */
		"commonSearchSpaceList"
		},
	{ ATF_POINTER, 4, offsetof(struct PDCCH_ConfigCommon, searchSpaceSIB1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"searchSpaceSIB1"
		},
	{ ATF_POINTER, 3, offsetof(struct PDCCH_ConfigCommon, searchSpaceOtherSystemInformation),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"searchSpaceOtherSystemInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct PDCCH_ConfigCommon, pagingSearchSpace),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingSearchSpace"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCCH_ConfigCommon, ra_SearchSpace),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SearchSpaceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-SearchSpace"
		},
};
static const int asn_MAP_PDCCH_ConfigCommon_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PDCCH_ConfigCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PDCCH_ConfigCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* controlResourceSetZero */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonControlResourceSet */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* searchSpaceZero */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* commonSearchSpaceList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* searchSpaceSIB1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* searchSpaceOtherSystemInformation */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pagingSearchSpace */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ra-SearchSpace */
};
asn_SEQUENCE_specifics_t asn_SPC_PDCCH_ConfigCommon_specs_1 = {
	sizeof(struct PDCCH_ConfigCommon),
	offsetof(struct PDCCH_ConfigCommon, _asn_ctx),
	asn_MAP_PDCCH_ConfigCommon_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PDCCH_ConfigCommon_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PDCCH_ConfigCommon = {
	"PDCCH-ConfigCommon",
	"PDCCH-ConfigCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_PDCCH_ConfigCommon_tags_1,
	sizeof(asn_DEF_PDCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PDCCH_ConfigCommon_tags_1[0]), /* 1 */
	asn_DEF_PDCCH_ConfigCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCCH_ConfigCommon_tags_1)
		/sizeof(asn_DEF_PDCCH_ConfigCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDCCH_ConfigCommon_1,
	8,	/* Elements count */
	&asn_SPC_PDCCH_ConfigCommon_specs_1	/* Additional specs */
};

