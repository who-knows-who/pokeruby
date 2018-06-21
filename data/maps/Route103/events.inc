Route103_EventObjects:: @ 8381300
	object_event 1, EVENT_OBJ_GFX_MAN_4, 0, 49, 12, 3, 9, 0, 0, 0, 0, Route103_EventScript_14ED82, 0
	object_event 2, EVENT_OBJ_GFX_VAR_0, 0, 10, 2, 3, 7, 0, 0, 0, 0, Route103_EventScript_14EB92, FLAG_HIDE_RIVAL_ROUTE103
	object_event 3, EVENT_OBJ_GFX_WOMAN_3, 0, 71, 10, 3, 18, 0, 0, 1, 3, Route103_EventScript_14ED94, 0
	object_event 4, EVENT_OBJ_GFX_LITTLE_GIRL_1, 0, 65, 11, 3, 8, 0, 0, 1, 0, Route103_EventScript_14EDF1, 0
	object_event 5, EVENT_OBJ_GFX_LITTLE_GIRL_1, 0, 64, 11, 3, 8, 0, 0, 1, 0, Route103_EventScript_14EDAB, 0
	object_event 6, EVENT_OBJ_GFX_FISHERMAN, 0, 50, 8, 3, 26, 0, 1, 1, 3, Route103_EventScript_14EE37, 0
	object_event 7, EVENT_OBJ_GFX_BERRY_TREE, 0, 58, 5, 3, 12, 0, 0, 0, 5, S_BerryTree, 0
	object_event 8, EVENT_OBJ_GFX_BERRY_TREE, 0, 59, 5, 3, 12, 0, 0, 0, 6, S_BerryTree, 0
	object_event 9, EVENT_OBJ_GFX_BERRY_TREE, 0, 60, 5, 3, 12, 0, 0, 0, 7, S_BerryTree, 0
	object_event 10, EVENT_OBJ_GFX_BOY_1, 0, 20, 10, 3, 2, 1, 2, 0, 0, Route103_EventScript_14ED79, 0
	object_event 11, EVENT_OBJ_GFX_PROF_BIRCH, 0, 7, 3, 3, 2, 1, 1, 0, 0, Route103_EventScript_1A037F, FLAG_HIDE_BIRCH_ROUTE103
	object_event 12, EVENT_OBJ_GFX_MAN_3, 0, 56, 12, 3, 10, 0, 0, 1, 5, Route103_EventScript_14EE4E, 0
	object_event 13, EVENT_OBJ_GFX_ITEM_BALL, 0, 63, 8, 3, 1, 1, 1, 0, 0, Route103_EventScript_1B1446, FLAG_ITEM_ROUTE103_1
	object_event 14, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 67, 7, 3, 1, 1, 1, 0, 0, S_CuttableTree, FLAG_TEMP_12
	object_event 15, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 69, 7, 3, 1, 1, 1, 0, 0, S_CuttableTree, FLAG_TEMP_13

Route103_MapBGEvents:: @ 8381468
	bg_event 11, 9, 0, 0, 0, Route103_EventScript_14ED8B

Route103_MapEvents:: @ 8381474
	map_events Route103_EventObjects, 0x0, 0x0, Route103_MapBGEvents