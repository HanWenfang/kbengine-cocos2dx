//9miao.com �׷�
#pragma once

#define msg_player_role_list_s2c 5


// ��ѯ���߷�����
#define msg_role_line_query_c2s 6

// �ɹ���ѯ���߷�����
#define msg_role_line_query_ok_s2c 7

// ����
#define msg_role_change_line_c2s 9

// ѡ��ĳ����ɫ
#define msg_player_select_role_c2s 10

// �ͻ��˼��ص�ͼ�������
#define msg_map_complete_c2s 13

// ��ҳ�ʼ������
#define msg_role_map_change_s2c 14

// NPC�ĳ�ʼ��Ϣ
#define msg_npc_init_s2c 15

// �Ѿ������ڵ�ͼ�Ľ�ɫ����
#define msg_other_role_map_init_s2c   16

// ������ɫ�����ͼ
//#define msg_other_role_into_map_s2c  20

// ������ɫ�뿪��ͼ
//#define msg_other_role_leave_map_s2c  21

// ������ɫ������ͼ
#define msg_role_change_map_c2s  22

// ��ɫ������ͼ�ɹ�
#define msg_role_change_map_ok_s2c  23

// ��ɫ������ͼʧ��
#define msg_role_change_map_fail_s2c  24

// ��ɫ�ƶ�
#define msg_role_move_c2s  25

// �ƶ�������
#define msg_heartbeat_c2s  26

// �����ƶ��㲥��Ϣ
#define msg_other_role_move_s2c  27

// �ƶ�ȷ��ʧ��
#define msg_role_move_fail_s2c  28

// ��ɫ���𹥻�
#define msg_role_attack_c2s  29

// ��ɫ���𹥻��ظ�
#define msg_role_attack_s2c  31

// ����ȡ��
#define msg_role_cancel_attack_s2c  32

// �����˺��ظ�
#define msg_be_attacked_s2c  33

// ��ұ�KILL��
#define msg_be_killed_s2c  34

// ĳ��ҽ�������Ұ
#define msg_other_role_into_view_s2c   35

// ˵������NPC��Role�Ľ�����Ұ��Ϣ�ֿ����ͻ���ʹ�ò�ͬ�ഴ�����ǣ�
//NPC��Role�뿪��Ұʹ��ͬһ����Ϣ���ͻ���ֻ��Ҫ����ID�����ɾ�����ǣ�
// NPC������Ұ
#define msg_npc_into_view_s2c  36

// ĳ����뿪����Ұ
#define msg_creature_outof_view_s2c  37

// ������Ϣ
#define msg_debug_c2s  38

//��Ʒ��ʹ��
#define msg_use_item_c2s 39

//װ����Ʒ
#define msg_auto_equip_item_c2s  40

//��Ʒת��λ��ʧ�ܣ�װ����Ʒ������
#define msg_change_item_failed_s2c 41

#define msg_use_item_error_s2c 42

#define msg_buff_immune_s2c 43

// ��ҵ�������Ϣ
#define msg_role_attribute_s2c  53

// Npc��������Ϣ
#define msg_npc_attribute_s2c  54

#define msg_role_rename_c2s 55

#define msg_guild_rename_c2s 56

#define msg_rename_result_s2c 57

////////////////////////////////////////////////////////////////////////////////
// �����л���Ϣ
////////////////////////////////////////////////////////////////////////////////
#define msg_role_map_change_c2s   61
#define msg_npc_map_change_c2s  62
#define msg_map_change_failed_s2c 63

////////////////////////////////////////////////////////////////////////////////
// ������ͼ��������Ϣ
////////////////////////////////////////////////////////////////////////////////

// �ͻ��������ȡ����������Ѿ�ѧϰ����Щ����
#define msg_skill_panel_c2s  70

// ������֪ͨ�ͻ���ѧ������Щ����
#define msg_learned_skill_s2c  71

// ���ظ��ͻ��˿�����������
#define msg_display_hotbar_s2c  72

// �ͻ��˶Կ�������в���
#define msg_update_hotbar_c2s  73

// �ͻ��˶Կ������������ʧ��
#define msg_update_hotbar_fail_s2c  74

#define msg_update_skill_s2c	  75

////////////////////////////////////////////////////////////////////////////////
//
//�������
//
////////////////////////////////////////////////////////////////////////////////

//���������ؽ�ɫ����������б� 
#define msg_quest_list_update_s2c 		 81

//���������ؽ�ɫ���񱻴��б���ɾ��
#define msg_quest_list_remove_s2c	 82

//����������,���������
#define msg_quest_list_add_s2c 	   83

//���������ؽ�ɫ������״̬�ı�
#define msg_quest_statu_update_s2c 	  84

//���������б�
#define msg_questgiver_hello_c2s			  85

//���������б�
#define msg_questgiver_quest_details_s2c			  86

//����������
#define msg_questgiver_accept_quest_c2s			 87

//������������
#define msg_quest_quit_c2s			 88

//����������
#define msg_questgiver_complete_quest_c2s 89

////������ɹ�
#define msg_quest_complete_s2c 90

//������ʧ��
#define msg_quest_complete_failed_s2c 91


//����ˢ��npc����״̬
#define msg_questgiver_states_update_c2s 92

//npc����״̬
#define msg_questgiver_states_update_s2c 93

//�鿴��������
#define msg_quest_details_c2s 94

//��������
#define msg_quest_details_s2c 95

//�鿴�ɽ�����
#define msg_quest_get_adapt_c2s 96

#define msg_quest_get_adapt_s2c 97

//������ʧ��
#define msg_quest_accept_failed_s2c 98

#define msg_quest_direct_complete_c2s 99
////////////////////////////////////////////////////////////////////////////////
// BUFF/DEBUFF���
////////////////////////////////////////////////////////////////////////////////

// ĳЩ��Ԫ����ĳ��BUFF
#define msg_add_buff_s2c 101

// ɾ��ĳ��Ԫ�Ѵ��ڵ�BUFF
#define msg_del_buff_s2c 102

// BUFF����ĳ������Ϣ�ĸı�
#define msg_buff_affect_attr_s2c 103

//ֹͣMove
#define msg_move_stop_s2c 104


////////////////////////////////////////////////////////////////////////////////
// //�������
////////////////////////////////////////////////////////////////////////////////
//����
#define msg_loot_s2c 105

//��ѯ����
#define msg_loot_query_c2s 106

//���䷵��
#define msg_loot_response_s2c  107

//����
#define msg_loot_pick_c2s   108

//ɾ��������Ʒ
#define msg_loot_remove_item_s2c 109

//ɾ���������
#define msg_loot_release_s2c 110

//��ɫ�������Ըı�
#define msg_player_level_up_s2c  111

//�û�����ȡ��buff
#define msg_cancel_buff_c2s 112

////////////////////////////////////////////////////////////////////////////////
// ��Ʒ�Ȳ������
////////////////////////////////////////////////////////////////////////////////

//����������Ʒλ�û�����
#define msg_update_item_s2c 120

//��������Ʒ
#define msg_add_item_s2c 121

//������Ʒʧ��
#define msg_add_item_failed_s2c 122

//�ͻ�������ɾ����Ʒ
#define msg_destroy_item_c2s  123

//ɾ����Ʒ
#define msg_delete_item_s2c 124

//�ָ���Ʒ,�漰��������Ʒ
#define msg_split_item_c2s 125

//������Ʒλ��
#define msg_swap_item_c2s   126

//��ͱ������ϰ������Ʒ
#define msg_init_onhands_item_s2c   127

//��ȡ�ֿ���Ʒ
#define msg_npc_storage_items_c2s 128

#define msg_npc_storage_items_s2c 129

//����
#define msg_arrange_items_c2s 130
//������
#define msg_arrange_items_s2c 131

////////////////////////////////////////////////////////////////////////////////
// ������Ϣ
////////////////////////////////////////////////////////////////////////////////
#define msg_chat_c2s					 140
#define msg_chat_s2c					 141
#define msg_chat_failed_s2c					 142
#define msg_loudspeaker_queue_num_c2s 143
#define msg_loudspeaker_queue_num_s2c 144
#define msg_loudspeaker_opt_s2c 145
#define msg_chat_private_c2s 146
#define msg_chat_private_s2c 147  //��˽��

////////////////////////////////////////////////////////////////////////////////
// ������ C -> S
////////////////////////////////////////////////////////////////////////////////

//�������
#define msg_group_apply_c2s 150

//ͬ�����
#define msg_group_agree_c2s 151

//����
#define msg_group_create_c2s 152

//����
#define msg_group_invite_c2s 153

//��������
#define msg_group_accept_c2s 154

//�ܾ�����
#define msg_group_decline_c2s 155

//�߳�����
#define msg_group_kickout_c2s 156

//���öӳ�
#define msg_group_setleader_c2s 157

//��ɢ����
#define msg_group_disband_c2s 158

//�뿪����
#define msg_group_depart_c2s 159

////////////////////////////////////////////////////////////////////////////////
// ������ S -> C
////////////////////////////////////////////////////////////////////////////////
#define msg_group_invite_s2c 160

#define msg_group_decline_s2c 161

#define msg_group_destroy_s2c 162

//���¶�����Ϣ
#define msg_group_list_update_s2c 163

//�������ؽ��
#define msg_group_cmd_result_s2c 164

//���¶���״̬
#define msg_group_member_stats_s2c 165

#define msg_group_apply_s2c 166

////////////////////////////////////////////////////////////////////////////////
// ��ļ
////////////////////////////////////////////////////////////////////////////////
//����������ļ
#define msg_recruite_c2s 167
//ȡ��������ļ
#define msg_recruite_cancel_c2s 168
//������ļ��ѯ
#define msg_recruite_query_c2s 169
//������ļ��ѯ����
#define msg_recruite_query_s2c 170
//ȡ��������ļ
#define msg_recruite_cancel_s2c 171
//������������
#define msg_role_recruite_c2s 172
//ȡ����������
#define msg_role_recruite_cancel_c2s 173
//�������鱻ȡ����ԭ��
#define msg_role_recruite_cancel_s2c 174


//aoi�����Ϣ
#define msg_aoi_role_group_c2s 175

//����aoi�������Ϣ
#define msg_aoi_role_group_s2c 176
////////////////////////////////////////////////////////////////////////////////
// NPC ��Ϣ����
////////////////////////////////////////////////////////////////////////////////

// NPC ���ܹ��ô�����Ϣ
#define msg_npc_fucnction_common_error_s2c	  300
////////////////////////////////////////////////////////////////////////////////
// npc��������
////////////////////////////////////////////////////////////////////////////////
#define msg_npc_function_c2s 301
#define msg_npc_function_s2c 302

////////////////////////////////////////////////////////////////////////////////
// ������Ϣ
////////////////////////////////////////////////////////////////////////////////
// ö���̵���Ʒ����
#define msg_enum_shoping_item_c2s  310
// ö��Fail
#define msg_enum_shoping_item_fail_s2c   311
// �ظ��̵���Ʒ
#define msg_enum_shoping_item_s2c  312

// ��������
#define msg_buy_item_c2s 313
// ����ʧ��
#define msg_buy_item_fail_s2c  314
// ��������
#define msg_sell_item_c2s  315
// ���۳ɹ�
#define msg_sell_item_fail_s2c   316
//����
#define msg_repair_item_c2s								  317

////////////////////////////////////////////////////////////////////////////////
// NPC ��Ϣ���� *����*
////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////
// ƣ��ϵͳ��Ϣ
////////////////////////////////////////////////////////////////////////////////
//�����͵ľ�����ʾ
#define msg_fatigue_prompt_with_type_s2c 340

//ʱ��δ�� ���ܵ�¼
#define msg_fatigue_login_disabled_s2c 341

//������ʾ
#define msg_fatigue_prompt_s2c	 350
//������Ϣ
#define msg_fatigue_alert_s2c	 351
//���ע��url
#define msg_finish_register_s2c	 352
////////////////////////////////////////////////////////////////////////////////
// ƣ��ϵͳ��Ϣ  *����*
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
//
//�Ż�����Ϣ����
//
////////////////////////////////////////////////////////////////////////////////
#define msg_object_update_s2c 353

////////////////////////////////////////////////////////////////////////////////
//
//															����
//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////��������////////////////////////////////////////
//����
#define msg_guild_create_c2s 360
//��ɢ
#define msg_guild_disband_c2s 361
//����
#define msg_guild_member_invite_c2s 362
//�ܾ�
#define msg_guild_member_decline_c2s 363

#define msg_guild_member_accept_c2s 364
//����
#define msg_guild_member_apply_c2s 365
//�뿪
#define msg_guild_member_depart_c2s 366
//�߳�
#define msg_guild_member_kickout_c2s 367

////////////////////////////////ְλ����////////////////////////////////////////
//����
#define msg_guild_set_leader_c2s 368
//��ֵ
#define msg_guild_member_promotion_c2s 369
//��ְ
#define msg_guild_member_demotion_c2s 370

////////////////////////////////��־�鿴////////////////////////////////////////
//�鿴��־
#define msg_guild_log_normal_c2s 371
//�鿴���¼�
#define msg_guild_log_event_c2s 372
//�޸�֪ͨ
#define msg_guild_notice_modify_c2s 373
////////////////////////////////����ʹ��facilityid:1:���� 2:������ 3:�ٱ���////////////////////////////////////////
//���ý�������:-1:������ֱ�Ӽ��� || 0:�����κ��˼���/ʹ�� || x:����x����/���׶� ���ϵ��˼���/ʹ�� 
#define msg_guild_facilities_accede_rules_c2s 374
//�������� 
#define msg_guild_facilities_upgrade_c2s 375
//���ٽ�������,Itemid
#define msg_guild_facilities_speed_up_c2s 376 
//��ȡ���Ž���
#define msg_guild_rewards_c2s 377
//�鿴������ļ
#define msg_guild_recruite_info_c2s 378
//����
#define msg_guild_member_contribute_c2s 379
//���������Ǽӳ���������
#define change_smith_need_contribution_c2s 357

///////////////////////////////////S -> C /////////////////////////////////////////////
//������Ϣ
#define msg_guild_info_s2c 380
//����������ʾ
#define msg_guild_opt_result_s2c 381   
//���Ż�����Ϣ���� {Id,Name,Level,Silver,Gold,Notice}
#define msg_guild_base_update_s2c 382
//������Ա��Ϣ����roleid
#define msg_guild_member_update_s2c 383
//������Ϣ����facilitesid
#define msg_guild_facilities_update_s2c 384
//��Ա�뿪
#define msg_guild_member_delete_s2c 385
//��Ա����
#define msg_guild_member_add_s2c 386
//���뿪������
#define msg_guild_destroy_s2c 387
//�ܾ�
#define msg_guild_member_decline_s2c 388
//����
#define msg_guild_member_invite_s2c 389
//��ļ��Ϣ
#define msg_guild_recruite_info_s2c 391
//��־
#define msg_guild_log_normal_s2c 392
//���¼�
#define msg_guild_log_event_s2c 393  


///////////////////////���Ŷ�������/////////////////////////////////////////////
//��ȡ���������б�
#define msg_guild_get_application_c2s 394
//�������������б�
#define msg_guild_get_application_s2c 395
//����ĳ�˵���������
#define msg_guild_application_op_c2s 396   
//�޸ĳƺ�
#define msg_guild_change_nickname_c2s 397   
//�޸ĵ��������������Ⱥ��
#define msg_guild_change_chatandvoicegroup_c2s 398

//��������log
#define msg_guild_update_log_s2c 399



//���Ųֿ�
#define msg_guild_storage_init_c2s  1961
#define msg_guild_storage_init_s2c  1962

//���Ųֿ��о���ȷ��
#define msg_guild_storage_donate_c2s  1963
//���Ųֿ� ȡ���ֿ���Ʒ
#define msg_guild_storage_take_out_c2s  1964
//����ֿ������Ʒ
#define msg_guild_storage_add_item_s2c  1965
//���Ųֿ� ������Ʒ
#define msg_guild_storage_distribute_item_c2s  1968
//���Ųֿ��вֿ����ȷ��
#define msg_guild_storage_set_state_c2s  1969
#define msg_guild_storage_update_state_s2c  1970


//���Ųֿ���������׼  (�����͸�����)
#define msg_guild_storage_init_apply_c2s  1971
//���Ųֿ���������׼��������߳�ʼ��
#define msg_guild_storage_init_apply_s2c  1972
//���Ųֿ� ��׼
#define msg_guild_storage_approve_apply_c2s  1973
//���Ųֿ� �ܾ�
#define msg_guild_storage_refuse_apply_c2s  1974
//���Ųֿ� ȫ���ܾ�
#define msg_guild_storage_refuse_all_apply_c2s  1975
//���Ųֿ� ���빫��ֿ���Ʒ
#define msg_guild_storage_apply_item_c2s  1976

//�����б����ڣ����ϣ�
#define msg_guild_storage_self_apply_c2s  1977
//�����б��������ڣ����ϣ�
#define msg_guild_storage_self_apply_s2c  1978
//ȡ�������б�
#define msg_guild_storage_cancel_apply_c2s  1979

//���Ųֿ��вֿ��¼
#define msg_guild_storage_log_c2s  1980
#define msg_guild_storage_log_s2c  1981
//���Ųֿ� �ֿ���Ʒ��������
#define msg_guild_storage_set_item_state_c2s  1982
//���Ųֿ�����ť
#define msg_guild_storage_sort_items_c2s  1983


////////////////////////////////////////////////////////////////////////////////
//
//															���Ž���
//
////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////
//ע���������
///////////////////////////////////////////////////////////////////////////////////
//������ɫ
#define msg_create_role_request_c2s 400
//������ɫ
#define msg_create_role_sucess_s2c 401
//������ɫʧ��
#define msg_create_role_failed_s2c 402

///////////////////////////////////////////////////////////////////////////////////
//����ע���������
///////////////////////////////////////////////////////////////////////////////////

//////�۲�    �鿴��������
#define msg_inspect_c2s 403

#define msg_inspect_s2c 404

#define msg_inspect_faild_s2c 405

///////////////////////////////////////////////////////////////////////////////////
//ƽ̨�û���Ϣ����ƽ̨���뵽��Ϸʱ��֤
///////////////////////////////////////////////////////////////////////////////////

#define msg_user_auth_c2s 410

#define msg_user_auth_fail_s2c 411

// ����ѧϰ��Ϣ
////////////////////////////////////////////////////////////////////////////////
// ö�ټ����б�����
#define msg_enum_skill_item_c2s  412
// ö��Fail
#define msg_enum_skill_item_fail_s2c   413
// �ظ������б��ɹ���
#define msg_enum_skill_item_s2c  414


// ѧϰ��������
#define msg_skill_learn_item_c2s  415
// һ��ѧϰ����
#define msg_skill_auto_learn_item_c2s 2055
// ѧϰ����ʧ��
#define msg_skill_learn_item_fail_s2c   416

//����ѧϰ��Ϣ����

//������Ϣ
#define msg_feedback_info_c2s  417

//gm�ύ��Ϣ����ֵ
#define msg_feedback_info_ret_s2c  418

//����
#define msg_role_respawn_c2s  419

//�ظ���¼
#define msg_other_login_s2c			  420

//��ɫ����
#define msg_block_s2c			  421

#define msg_is_jackaroo_s2c 422
//�ο͵�¼
#define msg_is_visitor_c2s 423
//��ƽ̨��ע��ɹ�,loginKey����key.php��ô���ǰ��ʱ���
#define msg_is_finish_visitor_c2s 425
//��ʾ�Ľ�ɫ����
#define msg_visitor_rename_s2c 426
//�Ľ�ɫ����
#define msg_visitor_rename_c2s 427
//�޸Ľ�ɫ����ʧ��
#define msg_visitor_rename_failed_s2c 428

#define msg_mall_item_list_c2s 429	//����ĳ����̳��б�
#define msg_mall_item_list_s2c 430	//����ĳ�����̳��б�
#define msg_init_mall_item_list_c2s 438	//����ĳ����̳��б��ʼ������
#define msg_init_mall_item_list_s2c 439	//����ĳ�����̳��б��ʼ������

#define msg_buy_mall_item_c2s 431	//����ĳһ����Ʒ
#define msg_init_hot_item_s2c 432	//��ʼ�������̳���Ʒ�б�
#define msg_init_latest_item_s2c 433	//��ʼ����������б�
#define msg_mall_item_list_special_c2s 434	//�������������Ʒ�б�
#define msg_mall_item_list_special_s2c 435	//�������������Ʒ�б�
#define msg_mall_item_list_sales_c2s 436	//�����Ż���Ʒ�б�
#define msg_mall_item_list_sales_s2c 437	//�����Ż���Ʒ�б�
#define msg_change_role_mall_integral_s2c 440//���������̳ǻ���

//�û��ͻ������ò�ѯ 
#define msg_query_player_option_c2s 450

//�û��ͻ������ò�ѯ����
#define msg_query_player_option_s2c 451

////�û��ͻ��������滻
#define msg_replace_player_option_c2s 452

//��־�ش�
#define msg_info_back_c2s 453
////////////////////////////////////////////////////////////////////////////////
//������Ϣ
////////////////////////////////////////////////////////////////////////////////

//�ҵĺ���
#define msg_update_friend_info_s2c 468//@@abandon
#define msg_revert_black_c2s 469//@@abandon
#define msg_revert_black_s2c 470//@@abandon
#define msg_init_signature_s2c 471//@@abandon
#define msg_add_signature_c2s 472//@@abandon

#define msg_get_friend_signature_c2s 473//@@abandon
#define msg_get_friend_signature_s2c 474//@@abandon

#define msg_set_black_c2s 475
#define msg_set_black_s2c 476//@@abandon
#define msg_delete_black_c2s 477
#define msg_delete_black_s2c 478
#define msg_black_list_s2c 479


#define msg_myfriends_c2s 480//@@abandon
//�ҵĺ��ѷ�����Ϣ
#define msg_myfriends_s2c 481
//��Ӻ���
#define msg_add_friend_c2s 482
#define msg_add_friend_success_s2c 483
#define msg_add_friend_failed_s2c 484//@@abandon
//����ע��������
#define msg_becare_friend_s2c 485//@@abandon
//ɾ������
#define msg_delete_friend_c2s 486
//ɾ�����ѳɹ���ʧ��
#define msg_delete_friend_success_s2c 487
#define msg_delete_friend_failed_s2c  488//@@abandon
//��������
#define msg_online_friend_s2c 489
//��������
#define msg_offline_friend_s2c 490
//ȡ��ϸ����
#define msg_detail_friend_c2s 491
//������ϸ����
#define msg_detail_friend_s2c 492//@@abandon
#define msg_detail_friend_failed_s2c 493//@@abandon
#define msg_position_friend_c2s 494
#define msg_position_friend_s2c 495//@@abandon
#define msg_position_friend_failed_s2c 496//@@abandon
#define msg_add_black_c2s 497
#define msg_add_black_s2c 498
#define msg_send_flower_to_friend_c2s 499

#define msg_search_role_error_s2c	2249//���Һ���ʧ��
#define msg_add_friend_rejuct_s2c	2250//�ܾ���Ϊ����
#define msg_auto_find_friend_c2s 2251//�Զ�������
#define msg_friend_intimacy_update_s2c	2252//���ܶȸ���
#define msg_friend_add_recent_s2c	2253//����������
#define msg_friend_add_enemy_s2c	2254//��ӳ���
#define msg_friend_update_level_s2c	2255//���ѵȼ�����
#define msg_friend_send_flower_c2s 2256//�����ͻ�
#define msg_friend_send_flower_s2c 2257//�����ͻ�
#define msg_add_friend_confirm_c2s 2258//�Ƿ�ͬ���Ϊ����
#define msg_add_friend_confirm_s2c 2259//���˼���Ϊ����
#define msg_search_role_c2s 2260//����
#define msg_search_role_s2c 2261//���˽��
#define msg_friend_opt_s2c 2262//
#define msg_friend_init_recent_s2c 2263//
#define msg_friend_init_enemy_s2c 2264//
#define msg_auto_find_friend_s2c 2269  //�Զ�������

////////////////////////////////////////////////////////////////////////////////
//�齱��Ϣ
////////////////////////////////////////////////////////////////////////////////
#define msg_lottery_lefttime_s2c 501
#define msg_lottery_leftcount_s2c 502
#define msg_lottery_clickslot_c2s 504
#define msg_lottery_clickslot_s2c 505
#define msg_lottery_otherslot_s2c 506
#define msg_lottery_notic_s2c 507
#define msg_lottery_clickslot_failed_s2c 508
#define msg_lottery_querystatus_c2s 509

//////////////�һ�////////////////
#define msg_start_block_training_c2s 510	
#define msg_start_block_training_s2c 511
#define msg_end_block_training_c2s 512
#define msg_end_block_training_s2c 513


////////////////////////////////////////////////////////////////////////////////
//������Ϣ
////////////////////////////////////////////////////////////////////////////////
#define msg_mail_status_query_c2s 530
#define msg_mail_status_query_s2c 531
#define msg_mail_arrived_s2c  532
#define msg_mail_query_detail_c2s 533
#define msg_mail_query_detail_s2c 534
#define msg_mail_get_addition_c2s 535
#define msg_mail_get_addition_s2c 536
#define msg_mail_send_c2s		  537	//д�ʼ�
#define msg_mail_delete_c2s		  538
#define msg_mail_delete_s2c   539
#define msg_mail_operator_failed_s2c 540
#define msg_mail_sucess_s2c 541
///////////////////////////////////////////////////////////////////////////////////
//����
///////////////////////////////////////////////////////////////////////////////////
//C->S
#define msg_trade_role_apply_c2s 560
#define msg_trade_role_accept_c2s 561
#define msg_trade_role_decline_c2s 562
#define msg_set_trade_money_c2s 563
#define msg_set_trade_item_c2s 564
#define msg_cancel_trade_c2s 565
#define msg_trade_role_lock_c2s 566
#define msg_trade_role_dealit_c2s 567
//S->C
#define msg_trade_role_errno_s2c 570
#define msg_trade_begin_s2c 571
#define msg_update_trade_status_s2c 572
#define msg_trade_role_lock_s2c 573
#define msg_trade_role_dealit_s2c 574
#define msg_trade_role_decline_s2c 575
#define msg_trade_role_apply_s2c 576
#define msg_cancel_trade_s2c 577
#define msg_trade_success_s2c 578

//װ��ǿ��
#define msg_equipment_stonemix_c2s 599
#define msg_equipment_riseup_c2s 600
#define msg_equipment_riseup_s2c 601
#define msg_equipment_riseup_failed_s2c 602
#define msg_equipment_sock_c2s 603
#define msg_equipment_sock_s2c 604
#define msg_equipment_sock_failed_s2c 605
#define msg_equipment_inlay_c2s 606
#define msg_equipment_inlay_s2c 607
#define msg_equipment_inlay_failed_s2c 608
#define msg_equipment_stone_remove_c2s 609
#define msg_equipment_stone_remove_s2c 610
#define msg_equipment_stone_remove_failed_s2c 611
#define msg_equipment_stonemix_single_c2s 612
#define msg_equipment_stonemix_s2c 613
#define msg_equipment_stonemix_failed_s2c 614
#define msg_equipment_upgrade_c2s 615
#define msg_equipment_upgrade_s2c 616
#define msg_equipment_enchant_c2s 617
#define msg_equipment_enchant_s2c 618
#define msg_equipment_recast_c2s 619
#define msg_equipment_recast_s2c 620
#define msg_equipment_recast_confirm_c2s 621
#define msg_equipment_convert_c2s 622
#define msg_equipment_convert_s2c 623
#define msg_equipment_move_c2s 624
#define msg_equipment_move_s2c 625
#define equipment_remove_seal_s2c 626//���
#define equipment_remove_seal_c2s 627//������
#define msg_equipment_fenjie_c2s 628//����ֽ�װ��
#define msg_equip_fenjie_optresult_s2c 629//�ֽ���


//�ɳ�ϵͳ
//��ʼ������
#define msg_achieve_init_c2s 630
//��ʼ������
#define msg_achieve_init_s2c 631
//������Ϣ
#define msg_achieve_update_s2c 632
//������ȡ��Ϣ
#define msg_achieve_reward_c2s 633
//������
#define msg_achieve_error_s2c 634
//�鿴���˳ɾ�
#define msg_inspect_achieve_s2c 635
//ѩ��Ŀ��
#define msg_goals_init_s2c 640
#define msg_goals_update_s2c 641
#define msg_goals_reward_c2s 642
#define msg_goals_error_s2c 643
#define msg_goals_init_c2s 644

//�ֻ���
#define msg_loop_tower_enter_c2s 650
#define msg_loop_tower_enter_failed_s2c 651
#define msg_loop_tower_masters_c2s 652
#define msg_loop_tower_masters_s2c 653
#define msg_loop_tower_enter_s2c 654
#define msg_loop_tower_challenge_c2s 655
#define msg_loop_tower_challenge_success_s2c 656
#define msg_loop_tower_reward_c2s 657
#define msg_loop_tower_challenge_again_c2s 658
#define msg_loop_tower_enter_higher_s2c 659

//VIP
#define msg_vip_ui_c2s 670
#define msg_vip_ui_s2c 671
#define msg_vip_reward_c2s 672
#define msg_vip_error_s2c 673
#define msg_vip_level_up_s2c 674
#define msg_vip_init_s2c 675
#define msg_vip_npc_enum_s2c 676
#define msg_login_bonus_reward_c2s 677
#define msg_vip_role_use_flyshoes_s2c 678
#define msg_join_vip_map_c2s 679

//��ѯϵͳ����
#define msg_query_system_switch_c2s 700
#define msg_system_status_s2c 701

//��������
#define msg_duel_invite_c2s 710
//�ܾ�����
#define msg_duel_decline_c2s 711
//���ܾ���
#define msg_duel_accept_c2s 712

#define msg_duel_invite_s2c 720
#define msg_duel_decline_s2c 721
#define msg_duel_start_s2c 722
#define msg_duel_result_s2c 723
//����pk����
#define msg_set_pkmodel_c2s 730
#define msg_set_pkmodel_faild_s2c 731
#define msg_clear_crime_c2s 733
#define msg_clear_crime_time_s2c 734
//ͬ��ʱ��
#define msg_query_time_c2s 740
#define msg_query_time_s2c 741
#define msg_stop_move_c2s 742


//��Ϸ��������֤��֤
#define msg_identify_verify_c2s  800
#define msg_identify_verify_s2c  801

//С��Ь
#define msg_fly_shoes_c2s 810
//��Ѫ��
#define msg_hp_package_s2c 811

//�ֿ�
#define msg_npc_swap_item_c2s 812
//ָ��Ŀ��ʹ������Ʒ
#define msg_use_target_item_c2s 813

//ս��
#define msg_tangle_battlefield_info_s2c  819     // ս����Ϣ
#define msg_guild_battlefield_info_s2c   1087	 // ����ս��
#define msg_battlefield_info_c2s		 1088	 // ����ս����Ϣ
#define msg_battlefield_info_error_s2c   1089	 // 
#define msg_battlefield_totle_info_s2c   1090	 // 
#define msg_yhzq_battlefield_info_s2c	 1091	 //
#define msg_jszd_battlefield_info_s2c    1710    // ս����Ϣ ��������
#define msg_honor_stores_buy_items_c2s	 1821	 // ����
#define msg_camp_battle_entry_c2s		 1852    // ����ս��
#define msg_camp_battle_player_num_c2s   1864	 //
#define msg_camp_battle_last_record_c2s	 1866	 // ս����¼
#define msg_travel_battle_entry_c2s      1911    // �ݺ���ݽ���ս��
#define msg_travel_battle_all_result_c2s 1917	 //
#define msg_travel_battle_self_result_c2s 1924   // �ݺ����ս����¼���ҵ�ս��

// ԭ��ս����Ϣ,����û�в���
#define msg_battle_self_join_s2c		 823
#define msg_tangle_update_s2c			 824
#define msg_tangle_remove_s2c			 825
#define msg_battle_end_s2c				 826
#define msg_battle_reward_c2s			 827
#define msg_battle_other_join_s2c		 828
#define msg_battle_waiting_s2c			 829  //ս���ȴ���Ϣ
#define msg_tangle_more_records_c2s		 836  //����ս����ϸ��Ϣ
#define msg_tangle_more_records_s2c      837
#define msg_guild_battle_score_init_s2c 1658
#define msg_battle_reward_by_record_c2s 1010  //ս������ȡ����
#define msg_yhzq_apply_start_s2c		1112  //��ʼ����
#define msg_yhzq_apply_over_s2c			1113  //��������
#define msg_yhzq_all_battle_over_s2c	1098  //����ս�����ѽ��� û��Ҫ�ٵȴ���
#define msg_yhzq_error_s2c				1099  //ս��������Ϣ
#define msg_yhzq_list_info_c2s			1100  //��ȡս���б���Ϣ
#define msg_yhzq_list_info_s2c			1101  //����ս���б���Ϣ
#define msg_apply_yhzq_c2s			    1102  //�������ս��
#define msg_apply_yhzq_s2c				1103  //�������ɹ� 
#define msg_cancel_apply_yhzq_c2s	    1104  //�˳��Ŷ�
#define msg_notify_to_join_yhzq_s2c		1105  //֪ͨ���Խ���ս��
#define msg_join_yhzq_c2s			    1106  //����ս��
#define msg_leave_yhzq_c2s				1107  //�˳�ս��
#define msg_yhzq_award_s2c				1108  //ս������ ������ȡ����
#define msg_yhzq_award_c2s				1109  //��ȡ����
#define msg_yhzq_camp_info_s2c			1110  //ս����Ӫ��Ϣ
#define msg_yhzq_zone_info_s2c			1111  //ս��������Ϣ
#define msg_yhzq_battle_self_join_s2c	1114  //�Լ�����ս��
#define msg_yhzq_battle_other_join_s2c	1115  //�����˼���ս��
#define msg_yhzq_battle_update_s2c		1116  //ս����Ϣ����
#define msg_yhzq_battle_remove_s2c		1117
#define msg_yhzq_battle_player_pos_s2c  1118
#define msg_yhzq_battle_end_s2c			1119  //ս������
#define msg_entry_guild_battle_s2c		1655  //��������ս�����
#define msg_leave_guild_battle_c2s		1656  //�����뿪����ս
#define msg_guild_battle_start_s2c		1653  //����ս��ʼ
#define msg_leave_guild_battle_s2c	    1657  //�뿪����ս
#define msg_entry_guild_battle_c2s		1654  //�����������ս��

//������Ϣ
#define msg_instance_info_s2c 830
#define entry_loop_instance_apply_c2s 1800//�ӳ���������
#define entry_loop_instance_vote_s2c 1801//ͶƱ���
#define entry_loop_instance_vote_update_s2c 1802//ͶƱ������
#define entry_loop_instance_vote_c2s 1803//ͶƱ���
#define entry_loop_instance_c2s 1804//�ֲ�ĸ�����Ϣ

#define entry_loop_instance_s2c 1805//�ֲ�ĸ�����Ϣ
#define loop_instance_kill_monsters_info_init_s2c 1813//�ֲ�ĸ�����ɱ����Ϣ


#define msg_get_instance_log_c2s 831
#define msg_get_instance_log_s2c 832
#define msg_tangle_records_s2c 833
#define msg_tangle_records_c2s 834
#define msg_tangle_topman_pos_s2c 835

//�˳���ǰ����
#define msg_instance_exit_c2s 838
//�ӳ����븱��,֪ͨ��Ա����
#define msg_instance_leader_join_s2c 840
//���븱��
#define msg_instance_leader_join_c2s 841
//�ճ��
#define msg_start_everquest_s2c 850
#define msg_update_everquest_s2c 851
#define msg_refresh_everquest_c2s 852
#define msg_refresh_everquest_s2c 853
#define msg_npc_start_everquest_c2s 854
#define msg_npc_everquests_enum_c2s 855
#define msg_npc_everquests_enum_s2c 856
#define msg_everquest_list_s2c 857

#define msg_instance_end_seconds_s2c 858

/////////////�������//////////
//��ʼ������
#define msg_init_pets_s2c 900
//��������
#define msg_create_pet_s2c 901
//�ٻ�����
#define msg_summon_pet_c2s 902
//�ƶ�
#define msg_pet_move_c2s  903
#define msg_pet_stop_move_c2s  904
#define msg_pet_attack_c2s 905
//����
#define msg_pet_rename_c2s 906
//��������
#define msg_pet_present_s2c 907
//��������
#define msg_pet_up_level_c2s 908
#define msg_pet_present_apply_s2c 909
//ˢ����ά����
#define msg_pet_up_reset_c2s 910
#define msg_pet_up_reset_s2c 911

#define msg_pet_xs_c2s 912//����ϴ��
#define msg_pet_xs_update_s2c 913//����ϴ�����

#define msg_pet_up_growth_s2c 914
#define msg_pet_up_stamina_growth_s2c 915

#define pet_evolution_growthvalue_c2s 1492
#define pet_evolution_growthvalue_s2c 1493

#define pet_auto_advance_c2s 947 //�����Զ�����
#define pet_auto_advance_result_s2c 948 //�����Զ�����
#define pet_advance_c2s 946 //�������
#define pet_advance_update_s2c 945//�������
//������Ϣ
#define msg_pet_opt_error_s2c 916

//ѧ����
#define msg_pet_learn_skill_c2s 917
#define msg_pet_up_exp_c2s 918
#define msg_pet_forget_skill_c2s 919


//ɾ������
#define msg_pet_delete_s2c 920
#define msg_pet_swap_slot_c2s 921
//�鿴�����˳���
#define msg_inspect_pet_c2s 922
#define msg_inspect_pet_s2c 923

//��������
#define msg_pet_riseup_c2s 924
#define msg_pet_riseup_s2c 925
//�����������ܲ�
#define msg_pet_skill_slot_lock_c2s 926
#define msg_update_pet_skill_slot_s2c 927
#define msg_update_pet_skill_s2c 928

#define msg_pet_skill_book_init_s2c 929  // ��ʼ�����＼����
//#define msg_init_pet_skill_slots_s2c 930
#define msg_init_pet_skill_slots_c2s 930 //ˢ�¼��ܹ������

//�и߼������Ƿ񸲸�
#define msg_pet_learn_skill_cover_best_s2c 931

#define msg_pet_inheritance_c2s	932//����̳�
#define msg_pet_inheritance_s2c	933//���ܼ̳�
#define msg_pet_shop_init_s2c	934//���ܳ����̵��ʼ��
#define msg_pet_shop_buy_c2s	936//���������
#define msg_pet_shop_init_c2s	938//��������̵��ʼ��
//���������
#define msg_buy_pet_slot_c2s 940

//���³�������Ϣ
#define msg_update_pet_slot_num_s2c 941

//ι������
#define msg_pet_feed_c2s 942


//����ѱ��
#define msg_pet_training_info_s2c 950	 //����ѱ����Ϣ
#define msg_pet_start_training_c2s 951	 //��ʼѱ��
#define msg_pet_stop_training_c2s 952	 //ֹͣѱ��(��ȡѱ������)
#define msg_pet_speedup_training_c2s 953	 //����ѱ��
#define msg_pet_training_init_info_s2c 954		//��ʼ��ѱ����Ϣ

//����̽�ղֿ�
//����ֿ�����
#define msg_explore_storage_init_c2s 960

//���Ͳֿ�����
#define msg_explore_storage_info_s2c 961

//�ֿ���Ϣ��ʼ������
#define msg_explore_storage_init_end_s2c 962

//ȡ��ĳ����Ʒ
#define msg_explore_storage_getitem_c2s 963
//ȡ��ȫ����Ʒ
#define msg_explore_storage_getallitems_c2s 964

//������Ʒ����
#define msg_explore_storage_updateitem_s2c 965

//�����Ʒ
#define msg_explore_storage_additem_s2c 966

//ɾ����Ʒ
#define msg_explore_storage_delitem_s2c 967

//̽�ղֿ������
#define msg_explore_storage_opt_s2c 968

//����̽��
#define msg_pet_explore_info_c2s 970		//̽����Ϣ��ʼ��
#define msg_pet_explore_info_s2c 971			//̽����Ϣ��ʼ��������Ϣ
#define msg_pet_explore_start_c2s 972			//̽������
#define msg_pet_explore_speedup_c2s 973 		//�������̽��
#define msg_pet_explore_stop_c2s 974				//��ֹ����̽��
#define msg_pet_explore_error_s2c 975			//����̽�մ�����Ϣ	
#define msg_pet_explore_gain_info_s2c 976	//����̽�ջ�õ���Ʒ

//������������
#define msg_pet_qualification_c2s 1490 
#define msg_pet_qualification_result_s2c 1491

/////////////////Ԫ���ı�����Ϣ//////////////
//����ˢ��
#define msg_treasure_chest_flush_c2s 981
//����ˢ�³ɹ�
#define msg_treasure_chest_flush_ok_s2c  982
//����ˢ��ʧ��
#define msg_treasure_chest_failed_s2c  983
//�齱����ʼ
#define msg_treasure_chest_raffle_c2s  984
//�齱������
#define msg_treasure_chest_raffle_ok_s2c  985
//��ȡ��Ʒ
#define msg_treasure_chest_obtain_c2s  986
//��ȡ��Ʒ�ɹ�
#define msg_treasure_chest_obtain_ok_s2c  987
//�����ϴ����ݲ�ѯ
#define msg_treasure_chest_query_c2s  989
//�����ϴ����ݲ�ѯ���
#define msg_treasure_chest_query_s2c  990
//���б���ö����㲥
#define msg_treasure_chest_broad_s2c  991
//ȥ��ĳЩ��Ʒ
#define msg_treasure_chest_disable_c2s 992

//�������İ����
//������
#define msg_beads_pray_request_c2s 995
// ���ɹ���Ϣ����
#define msg_beads_pray_response_s2c 996
//��ʧ����Ϣ
#define msg_beads_pray_fail_s2c 997
//ת�̳ɹ�������Ϣ
#define msg_turntable_response_s2c 998
//ת�̳ɹ�ȷ����Ϣ
#define msg_turntable_confirm_c2s 999


// ö�ٶһ���Ʒ����
#define msg_enum_exchange_item_c2s  1001
// ö��Fail
#define msg_enum_exchange_item_fail_s2c   1002
// �ظ��̵���Ʒ
#define msg_enum_exchange_item_s2c  1003
// �һ�����
#define msg_exchange_item_c2s 1004
// �һ�ʧ��
#define msg_exchange_item_fail_s2c  1005



//��ʱ���
//��ʱ�����Ϣ
#define msg_timelimit_gift_info_s2c 1020

//��ȡ���
#define msg_get_timelimit_gift_c2s 1021

//������Ϣ
#define msg_timelimit_gift_error_s2c 1022

//�����콱�ѽ���
#define msg_timelimit_gift_over_s2c 1023

//                 ��̯��Ϣ	begin                                  
//�ϼ�
#define msg_stall_sell_item_c2s 2020			
//�¼�
#define msg_stall_recede_item_c2s 2021
//����̯λ/����̯λ/��һҳ/��һҳ
#define msg_stalls_search_c2s 2023
//�鿴̯λ������Ϣ
#define msg_stall_detail_c2s 2029
//������Ʒ
#define msg_stall_buy_item_c2s 2022
//�޸�̯λ��
#define msg_stall_rename_c2s 1036
//������Ʒ/��һҳ/��һҳ
#define msg_stalls_search_item_c2s 2028
//̯λ������Ϣ
#define msg_stall_detail_s2c 2031
//̯λ��Ϣ
#define msg_stalls_search_s2c 2025
//̯λ��־����
#define msg_stall_log_add_s2c 1042
//��������
#define msg_stall_opt_result_s2c 2033
//����Ҳ鿴̯λ��Ϣ
#define msg_stall_role_detail_c2s 1044
//������Ʒ���ؽ��
#define msg_stalls_search_item_s2c 1045

//                 ��̯��Ϣ	end                                 




//�����ɫ��
#define msg_init_random_rolename_s2c 1120
#define msg_reset_random_rolename_c2s 1121

//����
#define msg_answer_sign_notice_s2c 1122
#define msg_answer_sign_request_c2s 1123
#define msg_answer_sign_success_s2c 1124
#define msg_answer_start_notice_s2c 1125
#define msg_answer_question_c2s 1126
#define msg_answer_question_s2c 1127
#define msg_answer_question_ranklist_s2c 1128
#define msg_answer_end_s2c 1129
#define msg_answer_error_s2c 1130	

//���߾���
#define msg_offline_exp_init_s2c 1131
#define msg_offline_exp_quests_init_s2c 1132
#define msg_offline_exp_exchange_c2s 1133
#define msg_offline_exp_error_s2c 1134
#define msg_offline_exp_exchange_gold_c2s 1135

//����ף��
#define msg_congratulations_levelup_remind_s2c 1140
#define msg_congratulations_levelup_c2s 1141
#define msg_congratulations_levelup_s2c 1142
#define msg_congratulations_receive_s2c 1143
#define msg_congratulations_error_s2c 1144
#define msg_congratulations_received_c2s 1145

//�콵������ʾbuff
#define msg_treasure_buffer_s2c 1160

//�������״̬
#define msg_gift_card_state_s2c 1161
#define msg_gift_card_apply_c2s 1162
#define msg_gift_card_apply_s2c 1163

//���	
//��ʼ�������Ϣ
#define msg_chess_spirit_info_s2c 1170//ͨ���������ʼ����Ϣ
//��ʼ�������Ϣ
#define msg_chess_spirit_role_info_s2c 1171
//�����������ֵ
#define msg_chess_spirit_update_power_s2c 1172
//���������꼼��
#define msg_chess_spirit_update_skill_s2c 1173
//�����������ֵ
#define msg_chess_spirit_update_chess_power_s2c 1174
//��������
#define msg_chess_spirit_skill_levelup_c2s 1175
//�ͷż���
#define msg_chess_spirit_cast_skill_c2s 1176
//�ͷŴ���,�ӳ���
#define msg_chess_spirit_cast_chess_skill_c2s 1177
//�������
#define msg_chess_spirit_opt_result_s2s 1178
//��������¼
#define msg_chess_spirit_log_c2s 1179
//��������¼
#define msg_chess_spirit_log_s2c 1180
//�콱
#define msg_chess_spirit_get_reward_c2s 1181
//�˳����
#define msg_chess_spirit_quit_c2s 1182
//game over
#define msg_chess_spirit_game_over_s2c 1183
//��ʼ����ʱ
#define msg_chess_spirit_prepare_s2c 1184

//////���Ŷ�������//////////////
//�̳�
//��ȡ�̳���Ʒ�б�
#define msg_guild_get_shop_item_c2s 1200
//�����̳���Ʒ�б�
#define msg_guild_get_shop_item_s2c 1201
//�����̳���Ʒ
#define msg_guild_shop_buy_item_c2s 1202

//�ٱ���
//��ȡ�ٱ�����Ʒ�б�
#define msg_guild_get_treasure_item_c2s 1203
//���Ͱٱ�����Ʒ�б�
#define msg_guild_get_treasure_item_s2c 1204
//����ٱ�����Ʒ
#define msg_guild_treasure_buy_item_c2s 1205

//���ðٱ�����Ʒ�۸�
#define msg_guild_treasure_set_price_c2s 1206

//���°ٱ�����Ʒ
#define msg_guild_treasure_update_item_s2c 1207

//��������
#define msg_publish_guild_quest_c2s 1208

//����������Ϣ
#define msg_update_guild_quest_info_s2c 1209

#define msg_update_guild_apply_state_s2c 1210

//��� ɾ�� ����������Ϣ
#define msg_update_guild_update_apply_info_s2c 1211

//�������봦����
#define msg_guild_update_apply_result_s2c 1212

//�������Ź���
#define msg_get_guild_notice_c2s 1213

//�������Ź���
#define msg_send_guild_notice_s2c 1214	

//�����̳���Ʒ
#define msg_guild_shop_update_item_s2c 1215

#define change_guild_right_limit_s2c 1217

#define msg_guild_bonfire_start_s2c	1219

///���Ŷ��� ����///////////////////

//�����Ѿ���ɹ�����������
#define msg_add_levelup_opt_levels_s2c 1220
//���������������
#define msg_levelup_opt_c2s 1221

//���ʼԤ��
#define msg_activity_forecast_begin_s2c 1230
//�����Ԥ��
#define msg_activity_forecast_end_s2c 1231
//ϵͳ�㲥
#define msg_system_broadcast_s2c 1235

//ˢǮ����ʣ��ʱ��
#define msg_moneygame_left_time_s2c 1240
//�������
#define msg_moneygame_result_s2c 1241
//��ʼ����ʱ
#define msg_moneygame_prepare_s2c 1242
//��Ǯ�ң�ÿɱ��һֻ���ͻᷢ��Ϣ
#define money_from_monster_s2c 113

//��ǰ����
#define msg_moneygame_cur_sec_s2c 1243
#define msg_expgame_cur_sec_s2c 1823
//�����ټ�
#define msg_guild_mastercall_s2c 1245
#define msg_guild_mastercall_accept_c2s 1246
#define msg_guild_mastercall_success_s2c 1247
//���ų�Աλ����Ϣ
#define msg_guild_member_pos_c2s 1248
#define msg_guild_member_pos_s2c 1249
//�뿪���Ÿ���
#define  msg_leave_guild_instance_c2s 358
//�������Ÿ���
#define  msg_join_guild_instance_c2s 359
//����
#define msg_sitdown_c2s 1250
//ֹͣ����
#define msg_stop_sitdown_c2s 1251
//����˫��
#define msg_companion_sitdown_apply_c2s 1252		
//ĳ����������˫��
#define msg_companion_sitdown_apply_s2c 1253
//��ʼ˫��
#define msg_companion_sitdown_start_c2s 1254
//˫�޲����ظ�
#define msg_companion_sitdown_result_s2c 1255
//л������
#define msg_companion_reject_c2s 1256
//�Է�л�����������	
#define msg_companion_reject_s2c 1257
//ת����Ӫ
#define msg_dragon_fight_faction_s2c 1258
//����
#define msg_dragon_fight_left_time_s2c 1259
//�鿴״̬
#define msg_dragon_fight_state_s2c 1260
//�������
#define msg_dragon_fight_num_c2s 1261
//�ظ�����
#define msg_dragon_fight_num_s2c 1262
//ת����Ӫ
#define msg_dragon_fight_faction_c2s 1263
//���ʼ
#define msg_dragon_fight_start_s2c 1264
//�����
#define msg_dragon_fight_end_s2c 1265
//�μӻ
#define msg_dragon_fight_join_c2s 1266

//Ⱥ������
#define msg_star_spawns_section_s2c 1267

//��������ͨ��ʼ
#define msg_venation_advanced_start_c2s 1276

//���¾���������Ϣ
#define msg_venation_advanced_update_s2c 1277

//��������ͨ�����������
#define msg_venation_advanced_opt_result_s2c 1278

//������ʼ��
#define msg_venation_init_s2c 1280

//���¾���Ѩ�����ӳ���Ϣ
#define msg_venation_update_s2c 1281

//���¾������������Ϣ
#define msg_venation_shareexp_update_s2c 1282

//��Ѩ��ʼ
#define msg_venation_active_point_start_c2s 1283

//��Ѩ��������ֵ
#define msg_venation_active_point_opt_s2c 1284

//��Ѩ����
#define msg_venation_active_point_end_c2s 1285

//������������ֵ
#define msg_venation_opt_s2c 1286

//��������ʱ
#define msg_venation_time_countdown_s2c 1287

//���˵ľ�����Ϣ
#define msg_other_venation_info_s2c 1288

//�����ͼ��־
#define msg_server_travel_tag_s2c 1290

#define msg_continuous_logging_gift_c2s 1300
#define msg_continuous_logging_board_c2s 1301
#define msg_continuous_days_clear_c2s 1302
#define msg_continuous_opt_result_s2c 1303
#define msg_continuous_logging_board_s2c 1304


//���ֿ�
//����ֿ�����
#define msg_treasure_storage_init_c2s 1310

//���Ͳֿ�����
#define msg_treasure_storage_info_s2c 1311

//�ֿ���Ϣ��ʼ������
#define msg_treasure_storage_init_end_s2c 1312

//ȡ��ĳ����Ʒ
#define msg_treasure_storage_getitem_c2s 1313
//ȡ��ȫ����Ʒ
#define msg_treasure_storage_getallitems_c2s 1314

//������Ʒ����
#define msg_treasure_storage_updateitem_s2c 1315

//�����Ʒ
#define msg_treasure_storage_additem_s2c 1316

//ɾ����Ʒ
#define msg_treasure_storage_delitem_s2c 1317

//���ֿ������
#define msg_treasure_storage_opt_s2c 1318

//�����Ծ�ȳ�ʼ��
#define msg_activity_value_init_c2s 1400

//��Ծ�ȳ�ʼ��
#define msg_activity_value_init_s2c 1401

//���»�Ծ��
#define msg_activity_value_update_s2c 1402

//��ȡ��Ծ�Ƚ���
#define msg_activity_value_reward_c2s 1403

//��Ծ�Ȳ�����
#define msg_activity_value_opt_s2c 1404

//��Ծ��Ʈ��
#define msg_activity_value_notice_s2c 1405

//�״̬
#define msg_activity_state_init_c2s 1410
//�״̬
#define msg_activity_state_init_s2c 1411
//�״̬����
#define msg_activity_state_update_s2c 1412


//boss����״̬
#define msg_activity_boss_born_init_c2s 1413
//boss����״̬����
#define msg_activity_boss_born_init_s2c 1414
//boss����״̬����
#define msg_activity_boss_born_update_s2c 1415

//�׳������ȡ״̬
#define msg_first_charge_gift_state_s2c 1416
//��ȡ�׳����
#define msg_first_charge_gift_reward_c2s 1417
//��ȡ�׳����
#define msg_first_charge_gift_reward_opt_s2c 1418

//�������а���Ϣ
#define msg_rank_get_rank_c2s 1428
//�����ϰ�������Ϣ
#define msg_rank_get_rank_role_c2s 1429

//���а���Ϣ
#define msg_rank_list_s2c 1430
//	msg_rank_loop_tower_s2c �ֻ���ԭ��Ϊ1430������ȡ����

//ս��ɱ�˰�
#define msg_rank_killer_s2c 1431
//�Ƹ���
#define msg_rank_moneys_s2c 1432
//��ս������
#define msg_rank_melee_power_s2c 1433
//���ֹ�����
#define msg_rank_range_power_s2c 1434
//��ʦ������
#define msg_rank_magic_power_s2c 1435
//�ֻ�������
#define msg_rank_loop_tower_num_s2c 1436
//�ȼ�����
#define msg_rank_level_s2c 1437
//��������
#define msg_rank_answer_s2c 1438
//���а������Ϣ
#define msg_rank_get_rank_role_s2c 1439
//����
#define msg_rank_disdain_role_c2s 1440
//����
#define msg_rank_praise_role_c2s 1441
//���۽������
#define msg_rank_judge_opt_result_s2c 1442	
//��ת��굥������
#define msg_rank_chess_spirits_single_s2c 1443
//��ת����������
#define msg_rank_chess_spirits_team_s2c 1444


// facebook
#define msg_facebook_bind_check_c2s 1445
#define msg_facebook_bind_check_result_s2c 1446

//������ųƺ�
#define msg_guild_clear_nickname_c2s 1447

//ÿ���״ε�½����
#define msg_everyday_show_s2c 1448

//��ݱ�����ʾ
#define msg_rank_judge_to_other_s2c 1450
//�����츳����
#define msg_rank_talent_score_s2c 1451
//�������а�
#define msg_rank_mail_line_s2c 1452
//��ѯ������������
#define msg_rank_get_main_line_rank_c2s 1453
//ս�������а�
#define msg_rank_fighting_force_s2c 1454
//�������а�
#define msg_rank_astrology_s2c 1455

//���������Ϣ
//��������ʼ������
#define msg_welfare_panel_init_c2s 1460
#define msg_welfare_panel_init_s2c 1461
//�����״̬����
#define msg_welfare_gifepacks_state_update_s2c 1462
//����Ԫ���һ��
#define msg_welfare_gold_exchange_init_c2s 1463
#define msg_activity_boss_entrust_init_c2s 1900

#define msg_welfare_gold_exchange_init_s2c 1464
//�һ�����
#define msg_welfare_gold_exchange_c2s 1465
//�ٻ�����
#define msg_ride_opt_c2s 1466
#define msg_ride_opt_result_s2c 1467
//��Ʒ��������
#define msg_item_identify_c2s 1480
//��Ʒ�������󷵻�
#define msg_item_identify_error_s2c 1481
//����ϳ�����
#define msg_ride_pet_synthesis_c2s 1482
//����ϳɲ����������
#define msg_ridepet_synthesis_opt_result_s2c 1483
//����ϳɴ��󷵻�
#define msg_ridepet_synthesis_error_s2c 1484
//����ϴ�츳����
#define msg_pet_random_talent_c2s 1485
//�����츳�滻
#define msg_pet_change_talent_c2s 1486
//�����츳������Է���
#define msg_pet_random_talent_s2c 1487
//��Ʒ�����������
#define msg_item_identify_opt_result_s2c 1488

//�����������
#define msg_pet_evolution_c2s 1489
#define msg_pet_growup_c2s 1494

//���ʺ���������������Ϣ

//������������
#define msg_pet_upgrade_quality_c2s 1500
//����������������
#define msg_pet_upgrade_quality_up_c2s 1501
//�������Լӵ�����
#define msg_pet_add_attr_c2s 1502
//��������ϴ��
#define msg_pet_wash_attr_c2s 1503
//�������������������
#define msg_pet_upgrade_quality_s2c 1504
//�����������������������
#define msg_pet_upgrade_quality_up_s2c 1505
//�����ó��＼����
#define msg_pet_get_skill_book_c2s 937
//����װ������
#define msg_update_item_for_pet_s2c 1510
//�����ﴩװ��
#define msg_equip_item_for_pet_c2s 1511
//��������װ��
#define msg_unequip_item_for_pet_c2s 1512
//������ʾ
#define msg_pet_item_opt_result_s2c  1513


//����ϵͳ

#define msg_refine_system_c2s 1520
#define msg_refine_system_s2c 1521

//������������
#define msg_welfare_activity_update_c2s 1530
#define msg_welfare_activity_update_s2c 1531

//�ƺ����
#define msg_designation_init_s2c 1540	
//��óƺŸ�����Ϣ
#define msg_designation_update_s2c 1541
//�鿴���˵ĳƺ���Ϣ
#define msg_inspect_designation_s2c 1542

//����ʣ��ʱ��
#define msg_treasure_transport_time_s2c 1550
//����ʧ��
#define msg_treasure_transport_failed_s2c 1551
//�޷�������������
#define msg_start_guild_transport_failed_s2c 1552
//���ڳɹ�
#define msg_rob_treasure_transport_s2c 1553
//ȫ�����ڿ�ʼ
#define msg_server_treasure_transport_start_s2c 1554
//ȫ�����ڽ���
#define msg_server_treasure_transport_end_s2c 1555
//���ڵ���ʱ���
#define msg_role_treasure_transport_time_check_c2s 1556
//��������ʣ��ʱ��
#define msg_guild_transport_left_time_s2c 1557
//������������
#define msg_start_guild_treasure_transport_c2s 1558
//������������֪ͨ�������ų�Ա
#define msg_treasure_transport_call_guild_help_s2c 1559

//����ϵͳ��ʼ��
#define msg_mainline_init_c2s 1560
#define msg_mainline_init_s2c 1561

//��������״̬
#define msg_mainline_update_s2c 1562

//��ʼ����
#define msg_mainline_start_entry_c2s 1563
//����ɹ�
#define msg_mainline_start_entry_s2c 1564

//��ʼ��ս
#define msg_mainline_start_c2s 1565
//��ս��ʼ
#define msg_mainline_start_s2c 1566

//������ս
#define msg_mainline_end_c2s 1567
//������ս�ɹ�
#define msg_mainline_end_s2c 1568

//��ս���
#define msg_mainline_result_s2c 1569

//��ȡ���߽���
#define msg_mainline_reward_c2s 1570

//���߸�������ʱ
#define msg_mainline_lefttime_s2c 1571

//��������ʱ����
#define msg_mainline_timeout_c2s 1572

//����ʣ�������Ϣ����
#define msg_mainline_remain_monsters_info_s2c 1573
//������ɱ������Ϣ����
#define msg_mainline_kill_monsters_info_s2c 1574
//���ظ������ﲨ������
#define msg_mainline_section_info_s2c 1575
//���ظ����ػ�NPC��Ϣ����
#define msg_mainline_protect_npc_info_s2c 1576

//����ϵͳ������
#define msg_mainline_opt_s2c 1577

//��ȡ�����ɹ�
#define msg_mainline_reward_success_s2c 1578

//��Ȫ
#define msg_spa_start_notice_s2c 1600
#define msg_spa_request_spalist_c2s 1601
#define msg_spa_request_spalist_s2c 1602
#define msg_spa_join_c2s 1603
#define msg_spa_join_s2c 1604
#define msg_spa_chopping_s2c 1605
#define msg_spa_swimming_c2s 1607
#define msg_spa_swimming_s2c 1608
#define msg_spa_error_s2c 1610
#define msg_spa_leave_c2s 1611
#define msg_spa_leave_s2c 1612
#define msg_spa_stop_s2c 1613
#define msg_spa_chopping_c2s 1614
#define msg_spa_update_count_s2c 1615

//���������������
#define msg_treasure_transport_call_guild_help_result_s2c 1620
//����������������
#define msg_treasure_transport_call_guild_help_c2s 1621

//ϵͳ�汾��
#define msg_server_version_c2s 1630
#define msg_server_version_s2c 1631


//����ϵͳ
//��ʼ��������Ϣ
#define msg_country_init_s2c 1640
//���¹��ҹ���
#define msg_change_country_notice_c2s 1641
#define msg_change_country_notice_s2c 1642

//��������
#define msg_change_country_transport_c2s 1643
#define msg_change_country_transport_s2c 1644
//ְλ����
//��ְ
#define msg_country_leader_promotion_c2s 1645
//��ְ
#define msg_country_leader_demotion_c2s 1646
#define msg_country_leader_update_s2c 1647

//����
#define msg_country_block_talk_c2s 1648
//���ֵ
#define msg_country_change_crime_c2s 1649

//�����쵼������
#define msg_country_leader_online_s2c 1650
//��ȡר������
#define msg_country_leader_get_itmes_c2s 1651
//��ȡÿ�ս���
#define msg_country_leader_ever_reward_c2s 1652



//��������״̬
#define msg_guild_battle_score_update_s2c 1659

//����״̬����
#define msg_guild_battle_status_update_s2c 1660

//����ս���
#define msg_guild_battle_result_s2c 1661

#define msg_country_opt_s2c 1662
#define msg_guild_battle_opt_s2c 1663

//����ս����
#define msg_guild_battle_stop_s2c 1664

//��ʼ��������Ϣ
#define msg_country_init_c2s 1665

//��ʼ������ս׼��ʱ�䵹��ʱ
#define msg_guild_battle_ready_s2c 1666

//����ս����
#define msg_apply_guild_battle_c2s 1667

//����ս������ʼ
#define msg_guild_battle_start_apply_s2c 1668

//����ս��������
#define msg_guild_battle_stop_apply_s2c 1669  	

//�������ʼ�����
#define msg_init_open_service_activities_s2c 1680
//���¿����״̬
#define msg_open_sercice_activities_update_s2c 1681
//��ȡ����
#define msg_open_service_activities_reward_c2s 1682
//�������ʼ���������
#define msg_init_open_service_activities_c2s 1683
//��ʼ��������ӱ�ǩ״̬����
#define msg_init_open_service_sub_tab_state_c2s 1684

//���ջ
//�����ǩҳ��ʼ����Ϣ
#define msg_activity_tab_isshow_s2c 1690
//���ջ��ʼ������
#define msg_festival_init_c2s 1691
//��ֵ������ʼ������
#define msg_festival_recharge_s2c 1692
//���ջ���󷵻���Ϣ
#define msg_festival_error_s2c 1693
//��ֵ����һ�������Ϣ
#define msg_festival_recharge_exchange_c2s 1694
//��ֵ����������Ϣ
#define msg_festival_recharge_update_s2c 1695
//��ȡ����֪ͨ��Ϣ
#define msg_festival_recharge_notice_s2c 1696
//�������ӻ״̬��ʼ��
#define msg_activity_tab_sub_activity_state_s2c 1697



//��ʯ����ս
#define msg_jszd_start_notice_s2c 1700
#define msg_jszd_join_c2s 1701
#define msg_jszd_join_s2c 1702
#define msg_jszd_leave_c2s 1703
#define msg_jszd_leave_s2c 1704
#define msg_jszd_update_s2c 1705
#define msg_jszd_end_s2c 1706
#define msg_jszd_reward_c2s 1707
#define msg_jszd_error_s2c 1708
#define msg_jszd_stop_s2c 1709


//���ŵ������޸���Ϣ

//������־
#define msg_guild_contribute_log_c2s 1720
#define msg_guild_contribute_log_s2c 1721

//��������
#define msg_guild_impeach_c2s 1722
//�����������
#define msg_guild_impeach_result_s2c 1723

//������Ϣ��ѯ
#define msg_guild_impeach_info_c2s 1724
#define msg_guild_impeach_info_s2c 1725

//ͶƱ
#define msg_guild_impeach_vote_c2s 1726

//��������
#define msg_guild_impeach_stop_s2c 1727

//��������ʣ��ʱ��
#define msg_guild_join_lefttime_s2c 1728

//�����״̬
#define msg_spiritspower_state_update_s2c 1730

//���������
#define msg_spiritspower_reset_c2s 1731

//ʥ�����ύ��Ʒ����
#define msg_christmas_tree_grow_up_c2s 1740
//��ȡʥ���ڽ���
#define msg_christmas_activity_reward_c2s 1741
//����ʥ����Ѫ��
#define msg_christmas_tree_hp_s2c 1742
//������Ч
#define msg_play_effects_s2c 1743

//Ⱥ����¹��ɱ��Ϣ
//Ⱥ����¹��ɱ��Ϣ������Ϣ
#define msg_tangle_kill_info_request_c2s 1751
//Ⱥ����¹��ɱ��Ϣ������Ϣ
#define msg_tangle_kill_info_request_s2c 1752

//������
//��ʾѡ�ֽ��뾺����
#define msg_world_cup_notify_fighter_join_s2c 1761
//��ʾѡ��׼��
#define msg_world_cup_notify_fighter_prepare_s2c 1762
//��ʾѡ�ֱ�����ʼ
#define msg_world_cup_notify_fighter_start_s2c 1763
//ս������
#define msg_world_cup_notify_fighter_end_s2c  1764
//����ս������
#define msg_world_cup_enter_battle_c2s 1765
//�˳�ս������
#define msg_world_cup_leave_battle_c2s 1766
//ս��ս����Ϣ
#define msg_world_cup_battle_kill_info_s2c 1767
//����ǰ�ִ���Ϣ
#define msg_world_cup_cur_section_info_c2s 1768
//�����ִ���Ϣ
#define msg_world_cup_cur_section_info_s2c 1769
//�鿴ս����¼	
#define msg_world_cup_record_c2s 1770
//����ս����¼		
#define msg_world_cup_record_s2c 1771
//��ȡս������
#define msg_world_cup_reward_c2s 1772
//�������б���Ϣ
#define msg_world_cup_reward_info_c2s 1773
//���ؽ�����Ϣ
#define msg_world_cup_reward_info_s2c 1774
//֪ͨ������ý��뾺������׼��
#define msg_world_cup_notice_prepare_s2c 1775
//��֪����ֿ�ֱ�ӽ���
#define msg_world_cup_promotion_s2c 1776
//�����Ȩ
#define msg_world_cup_give_up_c2s 1777
//����ʱ��Ϣ
#define msg_world_cup_start_left_time 1778

//ǩ���
//ǩ����ʼ����Ϣ����
#define msg_sign_activity_init_c2s 1791
//����ǩ����ʼ����Ϣ
#define msg_sign_activity_init_s2c 1792
//ǩ��������Ϣ
#define msg_sign_activity_request_c2s 1793
//ǩ�����󷵻���Ϣ
#define msg_sign_activity_request_s2c 1794


//ռ��

//ռ������  ռ�Ƿ���
#define msg_astrology_action_c2s 2190
#define msg_astrology_action_s2c 2191
//��ʼ�����
#define msg_astrology_init_c2s 2192
#define msg_astrology_init_s2c 2193
//ʰȡ
#define msg_astrology_pickup_c2s 2194
#define msg_astrology_pickup_s2c 2195
//һ��ʰȡ
#define msg_astrology_pickup_all_c2s 2196
#define msg_astrology_pickup_all_s2c 2197
//����
#define msg_astrology_sale_c2s 2198
#define msg_astrology_sale_s2c 2199
//һ������
#define msg_astrology_sale_all_c2s 2200
#define msg_astrology_sale_all_s2c 2201
//����Ǯ��λ�ã������ǻ�ֵ
#define msg_astrology_money_and_pos_s2c 2202
//�ϳ�
#define msg_astrology_mix_c2s 2203
//һ���ϳ�
#define msg_astrology_mix_all_c2s 2204
//����
#define msg_astrology_lock_c2s 2205
//����
#define msg_astrology_unlock_c2s 2206
//����ռ�Ǳ���size
#define msg_astrology_package_size_s2c 2207
//��ʼ��ռ�Ǳ���
#define msg_astrology_init_package_s2c 2208
//ͳһ������Ϣ
#define msg_astrology_error_s2c 2209
////Ԫ��ռ��
//#define msg_astrology_gold_pos_c2s  1820
//ʰȡ��ռ�Ǳ������������(��������)
#define msg_astrology_add_s2c 2211
//��ռ�Ǳ���ɾ������
#define msg_astrology_delete_s2c 2212
//����ռ�Ǳ�����Ʒ����������
#define msg_astrology_update_s2c 2213
//��չ����
#define msg_astrology_expand_package_c2s 2214
//�ƶ�����
#define msg_astrology_swap_c2s 2215
//�����ǻ�
#define msg_astrology_add_money_c2s 2216
//��������ֵ����������
#define msg_astrology_update_value_s2c 2217
//�鿴�����ǻ�
#define msg_other_astrology_info_s2c 2218
//���߿���
#define msg_astrology_item_pos_c2s 2219


//��ʯ��ĥ
#define msg_polish_c2s 1840
//��ʯ�׹�
#define msg_polished_c2s 1841
//��ʯ����
#define msg_polish_mix_c2s 1842
//�����ɹ�
#define msg_polish_success_s2c 1843
//����ʧ��
#define msg_polish_error_s2c 1844
//��������
//��ʼ����������Ϣ
#define msg_protectlock_update_s2c 1861
//����������Ϣ
#define msg_protectlock_set_c2s 1862
//�������
#define msg_protectlock_change_lock_c2s 1863
//�޸�����  ��Ϊս����Ϣʹ��
//#define msg_protectlock_change_pwd_c2s 1864
//ɾ������ 
#define msg_protectlock_del_pwd_c2s 1865 
//�����Ϣ
#define msg_protectlock_res_s2c 1866

//���Ļ
//��������ʼ������
#define msg_bid_init_c2s 1871
//��������ʼ��
#define msg_bid_init_s2c 1872
//����
#define msg_bid_offer_price_c2s 1873
//����
#define msg_bid_update_info_s2c 1874
//ʱ��ͬ����Ϣ
#define msg_bid_sync_time_s2c 1875
//������
#define msg_bid_result_s2c 1876
//���Ŀ�ʼ֪ͨ��Ϣ
#define msg_bid_notice_s2c 1877
//�������б�
#define msg_request_bid_list_c2s 1878
//���ؾ����б�
#define msg_request_bid_list_s2c 1879	
//����Ԫ������ȯ��Ϣ
#define msg_return_bid_price_s2c 1880

//���
#define msg_wedding_marriage_c2s 1890
#define msg_wedding_divorce_c2s 1891
#define msg_wedding_force_divorce_c2s 1892
#define msg_wedding_error_s2c 1893
#define msg_wedding_propose_to_you_s2c 1894
#define msg_wedding_propose_agree_c2s 1895
#define msg_wedding_propose_result_s2c 1896

//�����ʽ
//��ʽԤ����ʾ��Ϣ
#define msg_wedding_ceremony_show_c2s 1897
#define msg_wedding_ceremony_show_s2c 1898
//��ʽԤ��
#define msg_wedding_ceremony_predestine_c2s 1899
//�趨�������
#define msg_wedding_set_gift_lower_limit_c2s 1901
//�������
#define msg_wedding_invite_friends_c2s 1902
//��ʽ��ʼ����
#define msg_wedding_ceremony_start_c2s 1903
//��ʽ֪ͨ��Ϣ
#define msg_wedding_ceremony_notice_s2c 1905
//��ǰ�����������
#define msg_wedding_cur_gift_lower_limit_c2s 1906

#define msg_wedding_cur_gift_lower_limit_s2c 1907

#define msg_wedding_room_join_c2s 1908
#define msg_wedding_room_leave_c2s 1909
#define msg_wedding_room_start_notice_s2c 1910
#define msg_wedding_room_join_s2c 1911
#define msg_wedding_room_leave_s2c 1912
#define msg_wedding_room_stop_s2c 1913
#define msg_wedding_room_need_gifts_s2c 1914
#define msg_wedding_room_gave_gifts_c2s 1915

///////////////////////////////////////////////////////////////////////////////////
//�����1931 - 1960 
///////////////////////////////////////////////////////////////////////////////////				
//ѡ��ģʽ			//1:��ͨ��ȡ 2:Ǭ��һ��
#define msg_bag_lottery_type_c2s 1931														//bag_lottery_packet
//չ�ֱ�ѡ��Ʒ
#define msg_bag_lottery_items_s2c 1932
//���ˢ��
#define msg_bag_lottery_refresh_c2s 1933												//bag_lottery_packet
//���ѡ��	
#define msg_bag_lottery_choose_c2s 1934													//bag_lottery_packet
//��ȡ��Ʒ���
#define msg_bag_lottery_choose_s2c 1935
//�����ȡ(��һ��ģʽ)
#define msg_bag_lottery_got_c2s 1936														//bag_lottery_packet
//����˻�(�ڶ���ģʽ)
#define msg_bag_lottery_back_c2s 1937														//bag_lottery_packet
//��ȡ������Ʒչ��
#define msg_bag_lottery_end_items_s2c 1938
//�������⽱��
#define msg_bag_lottery_ext_s2c 1939
//������ѡ��
#define msg_bag_lottery_choose_ext_c2s 1940											//bag_lottery_packet
//�����ȡ��Ʒ���
#define msg_bag_lottery_choose_ext_s2c 1941
//�����ȡ������Ʒչ��
#define msg_bag_lottery_end_items_ext_s2c 1942
//������������
#define msg_bag_lottery_sup_s2c 1943
//�������ѡ��
#define msg_bag_lottery_choose_sup_c2s 1944											//bag_lottery_packet
//������ȡ��Ʒ���
#define msg_bag_lottery_choose_sup_s2c 1945
//������ȡ������Ʒչ��
#define msg_bag_lottery_end_items_sup_s2c 1946
//����������
#define msg_bag_lottery_error_s2c 1947
//��������
#define msg_bag_lottery_reward_end_s2c 1948
//����Ǭ����
#define msg_reset_bag_lottery_c2s 1949

//����ҩ������Ϣ
#define msg_get_furnace_queue_info_c2s 2411
//��ȡ��ҩ
#define msg_get_furnace_queue_item_c2s 2412
//����
#define msg_create_pill_c2s 2418
//�ж�����
#define msg_quit_furnace_queue_c2s 2410
//��������
#define msg_accelerate_furnace_queue_c2s 2419
//������¯
#define msg_unlock_furnace_queue_c2s 2416
//��¯����
#define msg_up_furnace_c2s 2414
//��ҩ������Ϣ
#define msg_furnace_queue_info_s2c 2413
//��¯����Ϣ
#define msg_furnace_info_s2c 2415
//��ҩЧ��
#define msg_pill_info_s2c 2417