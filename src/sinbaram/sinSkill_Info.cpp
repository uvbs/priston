////////////////////////메카니션 

//익스트림 쉴드  // 장별 - 스킬밸런스 조정(10.08.10)
int E_Shield_BlockRate[10]	= {2,3,4,5,6,7,8,9,10,11};		
int E_Shield_UseTime[10]	= {30,50,70,90,110,130,150,170,190,210};
int E_Shield_UseMana[10]	= {12,14,17,20,23,26,30,34,39,44};

//메카닉 범
int Mechanic_Bomb_Damage[10][2]		= {{5,29},{6,33},{7,37},{8,42},{9,47},{10,53},{11,60},{12,68},{13,77},{14,87}};
int Mechanic_Bomb_Attack_Range[10]	= {50,53,56,59,62,64,66,68,70,72};
int Mechanic_Bomb_UseMana[10]		= {8,10,12,14,17,20,23,26,29,33};  

//피지컬 앱소션 // 장별 - 스킬밸런스 조정(10.08.10)
int P_Absorb[10][2]			= {{3,4},{3,5},{4,6},{4,7},{5,8},{5,9},{6,10},{6,11},{7,12},{7,13}};
int P_Absorb_UseTime[10]	= {30,50,70,90,110,130,150,170,190,210};
int P_Absor_bUseMana[10]	= {20,24,28,32,36,40,44,48,52,56};

//포이즌 어트리뷰트 
int PlusPoison[10] = {9,17,24,30,35,39,42,44,45,46};

//그레이트 스매쉬 
int G_Smash_Attack_Rate[10]	= {60,70,80,90,100,120,140,160,180,200};
//int G_Smash_Attack_Rage[10]	= {6,12,18,24,30,36,42,48,54,60};
int G_Smash_Attack_Rage[10]	= {8,16,24,32,40,48,56,64,72,80};
//int G_Smash_Attack_Rage[10]	= {5,5,5,4,4,4,3,3,3,2}; //공격력맞음 정말루
int G_Smash_UseMana[10]		= {22,25,28,31,34,38,42,46,50,54};

//맥시마이즈  // 장별 - 스킬밸런스 조정(10.08.10)
int Maximize_Damage[10]		= {15,20,25,30,35,40,45,50,55,60};
int Maximize_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Maximize_UseMana[10]	= {26,28,30,33,36,39,43,47,51,56};

//오토메이션   // 장별 - 스킬밸런스 조정(10.08.10)
int Automation_Damage[10]	= {30,35,40,44,48,52,55,58,63,66};
int Automation_Speed[10]	= {1,1,1,1,1,2,2,2,2,2};
int Automation_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Automation_UseMana[10]	= {24,27,30,33,36,39,42,45,48,51};

//스파크  // 장별 - 스킬밸런스 조정(10.08.10)
int Spark_Damage[10][2]	= {{30,82},{33,89},{36,96},{38,103},{40,110},{42,117},{44,123},{46,129},{48,135},{50,141}};
int Spark_Area[10]      = {50,54,58,62,66,70,74,78,82,86};
int Spark_UseMana[10]   = {26,28,31,34,37,40,44,46,50,55};

//메탈 아머  // 장별 - 스킬밸런스 조정(10.08.10)
int Metal_Armor_Defense[10]	= {6,11,16,20,24,28,31,34,36,38};
int Metal_Armor_Time[10]	= {90,110,130,150,170,190,210,230,250,270};
int Metal_Armor_UseMana[10]	= {32,35,38,41,44,48,52,56,60,64};

//그랜드 스메쉬  // 장별 - 스킬밸런스 조정(10.08.10)
int Grand_Smash_AttackRate[10]	= {60,80,100,120,140,160,180,200,220,240};
int Grand_Smash_Damage[10]		= {43,49,55,61,67,73,79,85,91,97};
int Grand_Smash_UseMana[10]		= {26,29,32,35,38,41,44,47,50,53};

//메카닉 웨폰 마스터리 // 장별 - 스킬밸런스 조정(10.08.10)
int M_Weapon_Mastey[10]			= {5,9,13,17,21,25,29,33,37,41};

//스파크 쉴드  // 장별 - 스킬밸런스 조정(10.08.10)
int Spark_Shield_Damage[10]		= {30,42,54,66,78,90,102,114,126,138};
int Spark_Shield_Defense[10]	= {8,16,24,32,40,48,56,64,72,80};
int Spark_Shield_Time[10]		= {90,110,130,150,170,190,210,230,250,270};
int Spark_Shield_UseMana[10]	= {34,36,38,41,44,47,51,55,59,64};


////////////////////////////파이터 
//멜레이 마스터리 
//int Melee_Mastery_DamagePercent[10]	={9,14,19,24,27,30,33,35,37,38};
int Melee_Mastery_DamagePercent[10]	={6,10,14,18,21,24,26,28,30,32};

//파이어 어트리뷰트 
int PlusFire[10]		= {9,17,24,30,35,39,42,44,45,46};

//레이빙 
int Raving_Damage[10]		= {13,16,19,22,25,28,31,34,37,40};
int Ravind_Speed[10]		= {2,2,2,3,3,3,4,4,4,4};
float Raving_UseLife[10]	= {1.f,1.3f,1.6f,1.9f,2.2f,2.5f,2.8f,3.1f,3.4f,3.7f};
int Raving_UseMana[10]		= {14,16,18,20,22,24,26,29,32,35};

//임펙트 
int Impact_Attack_Rating[10]	= {20,40,60,80,100,120,140,160,180,200};
int Impact_Damage[10]		= {20,25,29,33,37,41,45,49,52,55};
int Impact_UseMana[10]		= {18,20,22,24,26,29,33,37,41,45};

//트리플 임펙트
int T_Impact_Damage[10]		= {35,40,25,30,35,25,30,35,40,45};
int T_Impact_Hit[10]		= {1,1,2,2,2,3,3,3,3,3};
int T_Impact_UseMana[10]	= {22,24,26,29,32,35,38,41,44,47};

//부르틀 스윙 
int B_Swing_Damage[10]		= {10,16,22,28,34,40,45,50,55,60};
int B_Swing_Critical[10]	= {3,7,10,13,16,19,21,24,27,30};
int B_Swing_UseMana[10]		= {24,26,28,31,34,38,42,47,52,58};

//로어
int Roar_Range[10]		= {50,60,70,80,90,100,108,116,124,130};
int Roar_Time[10]		= {4,6,8,10,12,14,16,18,20,22};
int Roar_UseMana[10]		= {26,28,30,33,36,39,42,45,49,53};

//레이지 오브 제크람 
//int R_Zecram_Damage[10]		= {10,22,34,46,58,70,82,94,106,118};
int R_Zecram_Damage[10]		= {14,28,42,56,70,84,98,112,126,140};
int R_Zecram_UseMana[10]	= {29,31,33,36,39,42,45,49,53,58}; 

//컨센트레이션 // 장별 - 스킬밸런스 조정(10.08.10)
//int Concentration_AttackRate[10] = {6,11,16,20,24,27,30,32,34,35};   이건 퍼센트 였음
//int Concentration_AttackRate[10] = {14,28,42,56,70,84,98,112,126,140};
int Concentration_AttackRate[10] = {16,32,48,64,80,96,112,128,144,160};
int Concentration_Time[10]       = {90,110,130,150,170,190,210,230,250,270};
int Concentration_UseMana[10]    = {35,38,41,44,47,50,53,56,59,62};

//어벤징 크래쉬
int A_Crash_Damage[10]		 = {50,55,60,65,70,75,80,85,90,95};
int A_Crash_AttackRate[10]	 = {5,10,15,20,25,30,35,40,45,50};
int A_Crash_UseMana[10]		 = {32,34,36,38,41,44,47,50,53,56};

//스위프트 엑스 // 장별 - 스킬밸런스 조정(10.08.10)
int Swift_Axe_Speed[10]		= {2,4,6,8,10,11,12,13,14,15};
int Swift_Axe_Time[10]		= {90,110,130,150,170,190,210,230,250,270};
int Swift_Axe_UseMana[10]	= {40,44,48,52,56,60,64,68,72,76};

//본 크래쉬
int B_Crash_Damage[10]		= {50,55,60,65,70,75,80,85,90,95};
int B_Crash_DemonDamage[10]	= {20,25,30,35,40,45,50,55,60,65};
int B_Crash_UseMana[10]		= {34,36,38,41,44,47,50,53,56,59};

///////////////////////////파이크맨 
//파이크 윈드 
int Pike_Wind_Throw_Height[10]	= {10,10,10,10,10,10,10,10,10,10}; //없애야함
int Pike_Wind_Damage[10][2]	= {{3,20},{5,27},{7,34},{9,41},{11,48},{13,52},{15,59},{17,66},{19,73},{21,80}};
int Pike_Wind_Push_Lenght[10]	= {70,75,80,85,90,95,100,105,110,120};
int Pike_Wind_UseMana[10]	= {14,16,18,20,23,26,29,32,35,39};

//아이스 어트리뷰트 
int PlusIce[10] = {8,15,21,26,30,33,36,39,42,45};

//크리티컬 힛 
int Critical_Hit_Critical[10]	= {15,19,23,26,29,32,34,36,38,40};
int Critical_Hit_UseMana[10]	= {14,16,18,20,23,26,29,33,37,41};

//점핑 크래쉬 
int Jumping_Crash_UseMana[10]		= {16,18,20,23,26,29,32,35,39,43};
int Jumping_Crash_Attack_Rating[10]	= {10,20,30,40,50,55,60,65,70,75};
int Jumping_Crash_Damage[10]		= {40,50,60,70,80,90,100,110,120,130};

//그라운드 스파이크 
int G_Pike_Damage[10][2] = {{10,40},{13,45},{16,50},{19,55},{22,60},{25,65},{28,70},{31,75},{34,80},{37,85}};
int G_Pike_Range[10]	 = {80,82,84,86,88,90,92,94,96,98};
int G_Pike_UseMana[10]   = {19,21,23,25,28,31,34,38,42,46};
int G_Pike_Time[10]	 = {6,7,8,9,10,11,12,13,14,15};

//토네이도 
int Tornado_Damage[10]   = {20,29,37,44,50,55,59,62,64,65};
int Tornado_Stun[10]     = {8,16,24,32,40,48,56,64,72,80};
int Tornado_Range[10]    = {50,53,56,59,62,65,68,71,74,77};
int Tornado_UseMana[10]  = {23,25,27,29,32,35,38,42,46,51};

//웨펀 디펜스 마스터리 
int W_D_Mastery_Block[10] = {2,4,6,8,10,11,12,13,14,15};

//익스펜션 
int Expansion_Size[10]    = {30,38,46,54,62,70,78,86,94,102};
int Expansion_Damage[10]  = {30,35,40,45,50,55,60,65,70,75};
int Expansion_UseMana[10] = {26,28,30,33,36,39,43,47,50,53};

//베놈 스피어
int VenomSpear_Damage[10][2]    = {{17,20},{19,22},{21,24},{23,26},{25,28},{27,30},{29,32},{31,34},{33,36},{35,38}};
int VenomSpear_Num[10]		= {3,3,3,4,4,4,5,5,5,5};
int VenomSpear_Time[10]		= {5,5,5,5,6,6,6,6,7,7};
int VenomSpear_Range[10]        = {90,94,98,102,106,110,114,118,122,126};
int VenomSpear_UseMana[10]	= {30,33,36,39,42,45,48,51,54,57};

//배니쉬 // 장별 - 스킬밸런스 조정(10.08.10)
float Vanish_Speed[10]  	= {0.2f,0.4f,0.6f,0.8f,1.0f,1.2f,1.4f,1.6f,1.8f,2.0f};
int Vanish_Damage[10]		= {10,20,30,40,50,60,70,80,90,100};
int Vanish_Range[10]		= {-40,-46,-52,-58,-64,-70,-75,-80,-85,-90};
int Vanish_Time[10] 		= {90,110,130,150,170,190,210,230,250,270};
int Vanish_UseMana[10]		= {40,43,46,49,52,55,58,62,66,70};

//크리티컬 마스터리 // 장별 - 스킬밸런스 조정(10.08.10)
int Critical_Mastery_Critical[10]  = {9,11,12,13,14,15,16,17,18,19};

//체인 랜스
int Chain_Lance_Damage[10]	= {10,15,20,25,30,35,40,45,50,55};
//int Chain_Lance_AttackRate[10]	= {20,30,40,50,60,70,80,90,100,110};
int Chain_Lance_UseMana[10]	= {32,35,38,41,44,47,50,53,56,59};

///////////////////////////아쳐 
//스카웃 호크 
int Scout_Hawk_Attack_Rate[10]	= {10,20,30,40,50,60,70,80,90,100};
int Scout_Hawk_UseTime[10]	= {5,6,7,8,9,10,11,12,13,14};
int Scout_Hawk_UseMana[10]	= {14,16,18,20,23,26,30,34,39,44};

//슈팅 마스터리 
int S_Mastery_DamagePercent[10] ={4,8,12,16,20,24,28,32,36,40};

//윈드 에로우 
int Wind_Arrow_Speed[10]	= {2,2,2,3,3,3,4,4,4,5};
int Wind_Arrow_Damage[10]	= {15,24,32,39,45,50,54,57,59,60};
int Wind_Arrow_UseMana[10]	= {12,14,16,18,20,23,26,29,32,35};

//퍼팩트 에임 
int Perfect_Aim_Attack_Rate[10] = {26,27,29,32,36,41,47,54,62,71};
int Perfect_Aim_Damage[10]	= {4,6,8,10,12,14,16,18,19,20};
int Perfect_Aim_Damage_LV[10]	= {8,8,8,8,7,7,7,6,6,6};
int Perfect_Aim_UseMana[10]	= {14,16,18,20,22,25,28,31,35,39};

//디온스 아이 
int D_Eye_Attack_Rate[10]	= {10,20,30,40,50,60,70,80,90,100};

//스피릿 팰컨  // 장별 - 스킬밸런스 조정(10.08.10)
int Falcon_Damage[10][2]	= {{10,36},{12,40},{14,44},{16,48},{18,52},{20,56},{22,60},{24,64},{26,68},{28,72}};
int Falcon_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Falcon_UseMana[10]		= {24,26,28,30,33,36,39,43,47,52};

//에로우 오브 레이지 
int A_Rage_ArrowNum[10]		= {2,3,4,5,6,7,8,9,10,11};
int A_Rage_Damage[10]		= {6,6,6,6,5,5,5,5,4,4};
int A_Rage_Area[10]		= {55,59,63,67,70,73,76,79,82,85}; 	
int A_Rage_UseMana[10]		= {24,26,28,31,34,37,40,44,48,53};

//에벌런츠  // 장별 - 스킬밸런스 조정(10.08.10)
int Avalanche_Speed[10]		= {1,1,1,2,2,2,3,3,3,4};
int Avalanche_Damage[10]	= {15,19,23,27,31,35,39,43,47,51};
int Avalanche_ArrowNum[10]	= {3,3,3,4,4,4,5,5,5,6};
int Avalanche_UseMana[10]	= {25,28,31,34,38,42,46,51,56,61};

//엘레멘탈 샷
int Elemental_Shot_Ice[10][2]		= {{10,20},{13,24},{16,28},{19,32},{22,36},{25,40},{28,44},{31,48},{34,52},{37,56}};
int Elemental_Shot_Fire[10][2]		= {{12,22},{17,27},{22,32},{27,37},{32,42},{37,47},{42,52},{47,57},{52,62},{57,67}};
int Elemental_Shot_Lightning[10][2]	= {{5,17},{9,22},{13,27},{17,32},{21,37},{25,42},{29,47},{33,52},{37,57},{41,62}};
int Elemental_Shot_UseMana[10]		= {27,29,31,33,36,39,42,45,48,51};

//골든 팰컨 // 장별 - 스킬밸런스 조정(10.08.10)
int Golden_Falcon_Damage[10]		= {120,125,130,135,140,145,150,155,160,165};
float Golden_Falcon_LifeRegen[10]	= {1.0f,1.3f,1.6f,1.9f,2.2f,2.5f,2.8f,3.1f,3.4f,3.7f};
int Golden_Falcon_Time[10]		= {90,110,130,150,170,190,210,230,250,270};
int Golden_Falcon_UseMana[10]		= {33,36,39,42,46,50,54,59,64,70};

//범 샷
int BombShot_Damage[10]		= {5,10,15,20,25,30,35,40,45,50};
int BombShot_DemonDamage[10]	= {5,10,15,20,25,30,35,40,45,50};
int BombShot_AddDamage[10][2]	= {{15,27},{18,31},{21,35},{24,39},{27,43},{30,47},{33,51},{36,55},{39,59},{42,63}};
int BombShot_Area[10]		= {82,84,86,88,90,92,94,96,98,100};
int BombShot_UseMana[10]	= {28,31,34,37,40,43,46,49,52,53};

//퍼포레이션
int Perforation_Damage[10]	= {10,16,22,28,34,40,46,52,58,64}; 
int Perforation_Critical[10]	= {3,6,9,12,15,18,21,24,27,30};
int Perforation_UseMana[10]	= {28,31,34,37,40,43,46,49,52,53};
int Perforation_Attack_Range[10]= {30,34,38,42,46,50,54,58,62,66};

/////////////// 나이트
//소드 블레스트
int Sword_Blast_UseMana[10]		= {8,10,12,15,18,21,25,29,33,38};
int Sword_Blast_Damage[10][2]		= {{12,16},{15,20},{18,24},{21,28},{24,32},{27,36},{30,40},{33,44},{36,48},{39,52}};
int Sword_Blast_ShootingRange[10]	= {80,84,88,92,96,100,104,108,112,116};

//홀리 바디 // 장별 - 스킬밸런스 조정(10.08.10)
int HolyBody_UseMana[10]	= {18,21,24,27,30,34,38,42,46,50};
int HolyBody_Absorb[10]		= {8,12,16,19,22,25,27,29,31,33};
int HolyBody_Time[10]		= {30,50,70,90,110,130,150,170,190,210}; 

//피지컬 트레이닝
int P_Traning_Stamina[10]	= {5,8,11,14,17,20,23,26,28,30};

//더블 크래쉬
int D_Crash_UseMana[10]		= {18,20,22,24,27,30,33,36,39,42};
int D_Crash_Damage[10]		= {10,14,18,22,25,28,31,34,37,40};
int D_Crash_Critical[10]	= {3,3,4,4,5,5,6,6,7,7};

//홀리 벨러  // 장별 - 스킬밸런스 조정(10.08.10)
int Holy_Valor_Damage[10]	= {18,22,26,30,34,38,42,46,50,54};
int Holy_Valor_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Holy_Valor_Mana[10]		= {23,26,29,32,35,38,41,44,47,50};

//브렌디쉬
int Brandish_Range[10]		= {70,72,74,76,78,80,82,84,86,88};
int Brandish_Damage[10]		= {10,16,22,28,34,40,46,52,58,64};
int Brandish_Mana[10]		= {22,24,26,28,30,33,36,39,42,45};

//피어싱
int Piercing_Damage[10]		= {10,17,24,31,38,45,52,59,66,73};
int Piercing_Attack_Rating[10]	= {40,50,60,70,80,90,100,110,120,130};
int Piercing_Mana[10]		= {24,26,28,30,32,34,36,38,40,42};

//드래스틱 스피릿 // 장별 - 스킬밸런스 조정(10.08.10)
int Drastic_Spirit_Defense[10]	= {6,9,12,15,18,20,22,23,24,25};
int Drastic_Spirit_Time[10]	= {60,80,100,120,140,160,180,200,220,240};
int Drastic_Spirit_Mana[10]	= {25,27,29,32,35,38,41,45,49,54};

//소드 마스터리  // 장별 - 스킬밸런스 조정(10.08.10)
int Sword_Mastery_DamagePercent[10]	= {11,14,17,20,23,26,29,32,35,38};

//프레임 브렌디쉬 즐
//int Flame_Brandish_Damage[10][2] = {{20,35},{24,40},{28,45},{32,50},{36,55},{40,60},{44,65},{48,70},{52,75},{56,80}};
//int Flame_Brandish_UseMana[10]	 = {26,28,30,33,36,40,44,48,52,56};

//디바인 인홀레이션 (디바인 쉴드로 이름만 바뀜) // 장별 - 스킬밸런스 조정(10.08.10)
int D_Inhalation_Life[10]	= {9,18,27,36,45,54,63,72,81,90};
int D_Inhalation_Block[10]	= {2,2,3,3,4,4,5,5,6,6};
int D_Inhalation_Time[10]	= {90,110,130,150,170,190,210,230,250,270};
int D_Inhalation_UseMana[10]	= {30,33,36,39,43,47,51,55,60,65};

//홀리 인켄테이션 // 장별 - 스킬밸런스 조정(10.08.10)
int H_Incantation_Success[10]	= {45,54,62,69,75,80,84,88,92,96};
int H_Incantation_AddLife[10]	= {100,120,140,160,180,200,220,240,260,280};
int H_Incantation_Time[10]	= {90,110,130,150,170,190,210,230,250,270};
int H_Incantation_UseMana[10]	= {36,39,42,45,48,52,56,60,65,70};

//그랜드 크로스
int Grand_Cross_Damage[10]		= {35,40,45,50,55,60,65,70,75,80};
int Grand_Cross_AttackRate[10]		= {35,40,45,50,55,60,65,70,75,80};
int Grand_Cross_UndeadDamage[10]	= {5,10,15,20,25,30,35,40,45,50};
int Grand_Cross_UseMana[10]		= {28,31,34,37,40,43,46,49,52,55};

/////////// 아탈란타
//쉴드 스트라이크
int S_Strike_UseMana[10]	= {16,18,20,22,24,27,30,33,36,40};
int S_Strike_Damage[10][2]	= {{4,20},{5,25},{6,30},{8,35},{10,40},{12,45},{14,50},{16,55},{18,60},{20,65}};
int S_Strike_Stun[10]		= {6,9,12,15,18,21,24,27,30,34};

//퍼리너
int Farina_UseMana[10]		= {17,19,21,23,26,29,32,35,38,41};
int Farina_Speed[10]		= {1,1,1,1,2,2,2,2,2,2};
int Farina_AttackRate[10]	= {30,40,50,60,70,80,90,100,110,120};

//쓰로잉 마스터리 // 장별 - 스킬밸런스 조정(10.08.10)
int T_Mastery_Damage[10]	= {18,22,26,30,34,38,41,44,47,50};

//비거 스피어
int V_Spear_UseMana[10]		= {19,21,23,25,28,31,34,37,40,43};
int V_Spear_Damage[10][2]	= {{4,10},{6,15},{8,20},{10,25},{11,30},{12,35},{13,40},{14,45},{15,50},{16,55}};

//윈디 // 장별 - 스킬밸런스 조정(10.08.10)
int Windy_Attack_Rating[10]	= {10,20,30,40,50,60,70,80,90,100};
int Windy_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Windy_Mana[10]		= {24,26,28,30,32,34,37,40,44,48};

//트위스트 재블린
int Twist_Javelin_Damage[10]		= {10,22,34,46,58,70,82,94,106,118};
int Twist_Javelin_Attack_Rating[10]	= {10,22,34,46,58,70,82,94,106,118};
int Twist_Javelin_Mana[10]		= {20,22,24,27,30,33,36,40,44,48};

//소울 썩커 // 장별 - 스킬밸런스 조정(10.08.10)
int Soul_Sucker_Absorb[10]	= {10,13,16,19,22,25,28,31,34,37};
int Soul_Sucker_Mana[10]	= {25,28,31,34,38,42,46,50,55,60};

//파이어 재블린
int Fire_Javelin_Damage[10][2]	= {{20,30},{25,35},{30,40},{35,45},{40,50},{45,55},{50,60},{55,65},{60,70},{65,75}};
int Fire_Javelin_Mana[10]	= {25,27,29,32,35,38,41,44,47,50};

//스플릿 재블린 // 장별 - 스킬밸런스 조정(10.08.10)
int Split_Javelin_AttackNum[10]		= {3,3,3,3,3,3,3,3,3,3};
//int Split_Javelin_Damage[10]		= {6,12,18,24,30,36,42,48,54,60};
int Split_Javelin_Damage[10]		= {8,14,20,26,32,38,44,50,56,62};
int Split_Javelin_AttackRate[10]	= {-10,-7,-4,-1,2,5,8,12,16,20}; //요건 감소치
int Split_Javelin_UseMana[10]		= {30,33,36,39,42,45,48,51,54,57};

//트라이엄프 오브 발할라 // 장별 - 스킬밸런스 조정(10.08.10)
int T_Of_Valhalla_Damage[10]		= {5,10,15,20,25,30,35,40,45,50};
int T_Of_Valhalla_Time[10]		= {90,110,130,150,170,190,210,230,250,270};
int T_Of_Valhalla_UseMana[10]		= {32,34,36,39,42,45,49,54,59,65};

//라이트닝 재블린
int Lightning_Javelin_Damage[10][2]	= {{20,40},{23,46},{26,52},{29,58},{32,64},{35,70},{38,76},{41,82},{44,88},{47,96}};
int Lightning_Javelin_UseMana[10]	= {30,32,34,37,40,43,47,50,53,56};

//스톰 재블린 // 장별 - 스킬밸런스 조정(10.08.10)
int Storm_Javelin_Damage[10]		= {22,28,34,40,46,52,58,64,70,76};
int Storm_Javelin_UseMana[10]		= {34,36,38,41,44,47,50,53,56,59};


////////////프리스티스
//힐링 // 장별 - 스킬밸런스 조정(10.08.10)
int Healing_UseMana[10]		= {11,14,17,20,24,28,32,37,42,47};
int Healing_Heal[10][2]		= {{64,86},{72,98},{80,110},{88,122},{96,134},{104,146},{112,158},{120,170},{128,182},{136,194}};

//홀리 볼트 // 장별 - 스킬밸런스 조정(10.08.10)
int HolyBolt_UseMana[10]	= {14,17,20,23,27,31,35,40,45,50};
int HolyBolt_Damage[10][2]	= {{10,22},{13,25},{16,28},{19,31},{22,34},{25,37},{28,41},{31,45},{34,49},{37,53}};//

//멀티스파크 // 장별 - 스킬밸런스 조정(10.08.10)
int M_Spark_UseMana[10]		= {16,19,22,25,29,33,37,42,47,52};
//int M_Spark_Damage[10][2]	= {{7,25},{10,30},{13,35},{16,40},{19,45},{22,50},{25,55},{28,60},{31,65},{34,70}};//
int M_Spark_Damage[10][2]	= {{5,10},{6,12},{7,14},{8,16},{9,18},{10,20},{11,21},{12,22},{13,23},{14,34}};
int M_Spark_Num[10]		= {4,4,4,5,5,5,6,6,7,7};

//홀리 마인드
int HolyMind_UseMana[10]	= {22,25,28,32,36,40,45,50,55,60};
int HolyMind_DecDamage[10]	= {10,13,16,19,22,25,28,30,32,34};
int HolyMind_Time[10]		= {15,15,15,15,15,15,15,15,15,15};

//메디테이션
float Meditation_Regen[10]	= {0.6f,1.0f,1.4f,1.8f,2.2f,2.6f,3.0f,3.4f,3.8f,4.2f};

//디바인 라이트닝 // 장별 - 스킬밸런스 조정(10.08.10)
int Divine_Lightning_Damage[10][2]	= {{20,40},{23,44},{26,48},{29,52},{32,56},{35,60},{38,64},{41,68},{44,72},{47,76}};
int Divine_Lightning_Num[10]		= {3,3,3,4,4,4,5,5,5,6};
int Divine_Lightning_Mana[10]		= {24,26,28,31,34,37,40,44,48,53};

//홀리 리플렉션 // 장별 - 스킬밸런스 조정(10.08.10)
int Holy_Reflection_Return_Damage[10]	= {20,30,40,50,60,70,80,90,100,110};
int Holy_Reflection_Time[10]		= {60,80,100,120,140,160,180,200,220,240};
int Holy_Reflection_Mana[10]		= {24,27,30,33,36,40,44,48,52,57};

//그랜드 힐링 // 장별 - 스킬밸런스 조정(10.08.10)
int Grand_Healing[10][2]	= {{40,50},{50,60},{60,70},{70,80},{80,90},{90,100},{100,110},{110,120},{120,130},{130,140}};
int Grand_Healing_Range[10]	= {300,310,320,330,340,350,360,370,380,390};
int Grand_Healing_Mana[10]	= {24,26,29,32,36,40,44,49,54,59};

//비거 볼 // 장별 - 스킬밸런스 조정(10.08.10)
int Vigor_Ball_Damage[10][2]	= {{46,71},{50,75},{54,79},{58,83},{62,87},{66,91},{70,95},{74,99},{78,103},{82,107}};
int Vigor_Ball_UseMana[10]	= {26,28,30,33,36,39,42,45,48,51};

//리져렉션
int Resurrection_Percent[10]	= {40,47,54,61,67,73,79,84,89,94};
int Resurrection_Exp[10]	= {100,150,200,250,300,350,400,450,500,550};
int Resurrection_UseMana[10]	= {70,66,62,58,54,50,46,42,38,34};

//익스팅션
int Extinction_Percent[10]	= {60,64,68,72,76,80,84,88,92,96};
int Extinction_Amount[10]	= {20,25,30,34,38,41,44,47,50,52};
int Extinction_UseMana[10]	= {30,32,34,37,40,43,47,51,55,60};

//버추얼 라이프 // 장별 - 스킬밸런스 조정(10.08.10)
int Virtual_Life_Percent[10]	= {12,14,16,18,20,22,24,26,28,30};
int Virtual_Life_Time[10]	= {90,110,130,150,170,190,210,230,250,270};
int Virtual_Life_UseMana[10]	= {60,63,66,69,73,77,81,86,91,97};

/////////////메지션
//애거니
int Agony_UseMana[10]		= {5,6,7,8,9,10,11,12,13,14};
int Agony_ConvLife[10]		= {4,8,12,16,20,24,28,32,36,40};

//파이어 볼트 // 장별 - 스킬밸런스 조정(10.08.10)
int FireBolt_UseMana[10]	= {16,18,20,22,25,28,31,34,38,42};
int FireBolt_Damage[10][2]	= {{10,20},{13,24},{16,28},{19,32},{21,36},{24,40},{27,44},{30,48},{33,52},{36,56}};

//제니쓰 // 장별 - 스킬밸런스 조정(10.08.10)
int Zenith_UseMana[10]		= {18,20,22,25,28,31,35,39,43,48};
int Zenith_Element[10]		= {2,3,4,5,6,7,8,9,10,11};
int Zenith_Time[10]		= {30,50,70,90,110,130,150,170,190,210};

//파이어 볼 // 장별 - 스킬밸런스 조정(10.08.10)
int FireBall_UseMana[10]	= {22,24,26,28,31,34,38,42,46,50};
int FireBall_Damage[10][2]	= {{26,50},{30,57},{34,64},{38,71},{42,78},{46,85},{50,92},{54,99},{58,106},{62,113}};
int FireBall_Area[10]		= {70,72,74,76,78,80,82,84,86,88};
int FireBall_Range[10]		= {163,166,169,172,175,178,181,184,187,190};

//멘탈 마스터리
int Mental_Mastery_Mana[10]     = {5,8,11,14,17,20,23,26,29,32};

//워토네이도 // 장별 - 스킬밸런스 조정(10.08.10)
int Watornado_Damage[10][2]	= {{30,56},{34,63},{38,70},{42,77},{46,84},{50,91},{54,98},{58,105},{62,112},{66,119}};
int Watornado_Area[10]		= {70,72,74,76,78,80,82,84,86,88};
int Watornado_Range[10]		= {170,174,178,182,186,190,194,198,202,206};
int Watornado_Mana[10]		= {25,27,29,32,35,38,42,46,50,55};

//인첸트 웨폰 // 장별 - 스킬밸런스 조정(10.08.10)
int Enchant_Weapon_Damage_Ice[10][2]		= {{3,8},{6,12},{9,16},{12,20},{15,24},{18,28},{21,32},{24,36},{27,40},{30,44}};
int Enchant_Weapon_Damage_Fire[10][2]		= {{4,10},{8,16},{12,22},{16,28},{20,34},{24,40},{28,46},{32,52},{36,58},{40,64}};
int Enchant_Weapon_Damage_Lightning[10][2]	= {{4,8},{6,13},{8,18},{10,23},{12,28},{14,33},{16,38},{18,43},{20,48},{22,53}};
int Enchant_Weapon_Time[10]			= {60,80,100,120,140,160,180,200,220,240};
int Enchant_Weapon_Mana[10]			= {30,32,34,37,40,44,48,53,58,64};

//데쓰 레이 // 장별 - 스킬밸런스 조정(10.08.10)
int Dead_Ray_Damage[10][2]	= {{65,89},{70,95},{75,101},{80,107},{85,113},{90,119},{95,125},{100,131},{105,137},{110,143}};
int Dead_Ray_Range[10]		= {185,190,195,200,205,210,215,220,225,230};
int Dead_Ray_Mana[10]		= {26,29,32,35,39,43,47,51,55,59};

//에너지 쉴드 // 장별 - 스킬밸런스 조정(10.08.10)
int Energy_Shield_DecDamage[10] = {10,13,16,19,21,24,26,28,29,30};
int Energy_Shield_Time[10]	= {90,110,130,150,170,190,210,230,250,270};
int Energy_Shield_UseMana[10]   = {34,37,40,43,47,51,55,60,66,72};

//디아스트로피즘 // 장별 - 스킬밸런스 조정(10.08.10)
int Diastrophism_Damage[10][2]  = {{20,56},{27,64},{34,72},{41,80},{48,88},{55,96},{62,104},{69,112},{76,120},{83,128}};
int Diastrophism_Area[10]       = {100,105,110,115,120,125,130,135,140,145};
int Diastrophism_UseMana[10]    = {30,33,36,39,43,47,51,56,61,67};

//스피릿 엘레멘탈 // 장별 - 스킬밸런스 조정(10.08.10)
float Spirit_Elemental_RegenMana[10]	= {0.2f,0.4f,0.6f,0.8f,1.0f,1.2f,1.4f,1.6f,1.8f,2.0f};
int Spirit_Elemental_Damage[10]		= {2,4,6,8,10,13,16,19,22,25};
int Spirit_Elemental_Time[10]		= {90,110,130,150,170,190,210,230,250,270}; 
int Spirit_Elemental_UseMana[10]	= {36,39,42,45,48,51,54,57,60,63};

//댄싱 소드 // 장별 - 스킬밸런스 조정(10.08.10)
int Dancing_Sword_IceDamage[10][2]	= {{20,26},{22,29},{24,32},{26,35},{28,38},{30,41},{32,44},{34,47},{36,50},{38,53}};
int Dancing_Sword_FireDamage[10][2]	= {{20,26},{23,30},{26,34},{29,38},{32,42},{35,46},{38,50},{41,54},{44,58},{47,62}};
int Dancing_Sword_AttackDelay[10]	= {5,5,5,5,4,4,4,4,3,3};
int Dancing_Sword_Time[10]		= {90,110,130,150,170,190,210,230,250,270};
int Dancing_Sword_UseMana[10]		= {35,37,39,42,45,48,52,56,61,66};


/*****************************************************************************************/
/*                               4차스킬                                                  /
/*****************************************************************************************/

//[메카니션]
//임펄션
int Impulsion_LightingDamage[10][2]= {{140,180},{150,190},{160,200},{170,210},{180,220},
							          {190,230},{200,240},{210,250},{220,260},{230,270}};  //라이트닝 추가 공격력
int Impulsion_Range[10]            = {130,135,140,145,150,155,160,165,170,175};			   //사정거리
int Impulsion_LightingNum[10]      = {3,3,4,4,5,5,6,6,7,7};                                //볼트 갯수
int Impulsion_UseMana[10]          = {35,38,40,43,46,49,53,57,61,65};

//컴펄션 // 장별 - 스킬밸런스 조정(10.08.10)
int Compulsion_AddAbsorb[10]       = {5,7,9,11,13,15,17,19,21,23};		       //추가 흡수력
int Compulsion_Area[10]            = {150,160,170,180,190,200,210,220,230,240}; //주변 범위
 int Compulsion_Time[10]            = {16,24,32,40,48,57,66,75,84,93}; //유지 타임
int Compulsion_UseMana[10]         = {50,54,58,62,66,70,74,78,82,86};

//마그네틱 스피어 // 장별 - 스킬밸런스 조정(10.08.10)
int Magnetic_Sphere_AddDamage[10][2]  = {{30,40},{40,50}, {50,60},  {60,70},  {70,80},
										 {80,90},{90,100},{100,110},{110,120},{120,130}};//데미지     
int Magnetic_Sphere_Area[10]          = {80,80,85,85,90,90,95,95,100,100};		         //유효반경
int Magnetic_Sphere_AttackDelay[10]   = {6,6,6,5,5,5,4,4,4,3};			                 //어택 딜레이
int Magnetic_Sphere_Time[10]          = {120,140,160,180,200,220,240,260,280,300};       //유지 타임
int Magnetic_Sphere_UseMana[10]       = {60,65,70,75,80,85,90,95,100,105};

//메탈 골렘 // 장별 - 스킬밸런스 조정(10.08.10)
int Metal_Golem_Damage[10][2] = {{95,115},{100,120},{105,125},{110,130},{115,135},
							    {120,140},{125,145},{130,150},{135,155},{140,160}};    //공격력
int Metal_Golem_Hit[10]       = {660,680,700,720,740,760,780,800,820,840};			  //명중력
int Metal_Golem_Defense[10]   = {355,400,445,490,535,580,625,670,715,760};		      //방어력
int Metal_Golem_Life[10]      = {4100,4300,4500,4700,4900,5100,5300,5500,5700,5900};  //생명력
int Metal_Golem_UseMana[10]   = {60,64,68,72,76,80,84,88,92,96};

//[파이터]
//디스트로이어
int Destoryer_DamagePercent[10]= {15,30,45,60,75,90,105,120,135,150};      //공격력 가중
int Destoryer_AddCritical[10]  = {10,12,14,16,18,20,22,24,26,28};	   //크리티컬 추가
int Destoryer_UseMana[10]      = {46,48,50,52,54,56,58,60,62,64};

//버서커 // 장별 - 스킬밸런스 조정(10.08.10)
int Berserker_AddAttack[10]    = {20,24,28,32,36,40,44,48,52,56};             //추가 공격력
int Berserker_SubAbsorb[10]    = {-2,-4,-6,-8,-10,-12,-14,-16,-18,-20};      //흡수력 감소치
int Berserker_Time[10]         = {120,140,160,180,200,220,240,260,280,300};             //유지시간
int Berserker_UseMana[10]      = {52,55,58,61,64,67,70,73,76,79};

//싸이클론 스트라이크
int Cyclone_Strike_DamagePercent[10] = {15,22,29,36,43,50,57,64,71,78};                      //공격력 가중
int Cyclone_Strike_AreaDamage[10][2] = {{120,150},{135,165},{150,180},{165,195},{180,210},
										{195,225},{210,240},{225,255},{240,270},{255,285}};  //범위 공격력
int Cyclone_Strike_AttackNum[10]     = {5,5,6,6,7,7,8,8,9,9};							 //최대 타격수
int Cyclone_Strike_Area[10]          = {100,105,110,115,120,125,130,135,140,145};            //공격 범
int Cyclone_Strike_UseMana[10]       = {50,53,56,59,62,65,68,71,74,77};

//부스트 헬스 // 장별 - 스킬밸런스 조정(10.08.10)
int Boost_Health_Life[10]       = {10,20,30,40,50,70,90,110,130,150};   //생명력 영구적 추가


//[파이크맨]
//어쌔신 아이
int Assassin_Eye_AddCritical[10]   = {10,14,18,22,26,30,34,38,42,46};		  //크리티컬 공격력 증가
int Assassin_Eye_M_SubCritical[10] = {-4,-5,-6,-7,-8,-9,-10,-11,-12,-13};     //대 몬스터 크리티컬 능력 약화
int Assassin_Eye_Time[10]          = {12,13,14,15,16,17,18,19,20,21};         //유지타임
int Assassin_Eye_UseMana[10]       = {47,49,51,53,55,57,59,61,63,65};

//차징 스트라이크
int   Charging_Strike_DamagePercent[10]        = {10,15,20,25,30,35,40,45,50,55};     //공격력 가중
int   Charging_Strike_CharingDamagePercent[10] = {30,45,60,75,90,105,120,135,150,165}; //차징시 공격력 가중
int   Charging_Strike_Time[10]                 = {9,18,27,36,45,54,63,72,81,90};    //차징 시간
int   Charging_Strike_UseMana[10]              = {48,51,54,57,60,63,66,69,72,75};

//베이그  // 장별 - 스킬밸런스 조정(10.08.10)
int Vague_EvasionPercent[10]        = {6,8,10,12,14,17,20,23,26,29};  //추가 회피확률 중가
int Vague_Time[10]                  = {120,140,160,180,200,220,240,260,280,300};  //유지시간
int Vague_UseMana[10]               = {55,58,61,64,67,70,73,76,79,82};

//쉐도우 마스터
int Shadow_Master_DamagePercent[10] = {10,15,20,25,25,30,35,40,40,45};            //공격력 가중
int Shadow_Master_AddHit[10]        = {110,120,130,140,150,160,170,180,190,200}; //명중력 증가
int Shadow_Master_ShadowNum[10]     = {3,3,4,4,5,5,6,6,7,7};					 //잔상 콤보의 증가
int Shadow_Master_UseMana[10]       = {52,55,58,61,64,67,70,73,76,79};

//[아쳐]
//리콜 울버린
int Recall_Wolverin_Damage[10][2] = {{50,75},{55,80},{60,85},{65,90},{70,95},
								     {75,100},{80,105},{85,110},{90,115},{95,120}};	        //공격력
int Recall_Wolverin_Hit[10]		  = {900,1000,1100,1200,1300,1400,1500,1600,1700,1800};              //명중력
int Recall_Wolverin_Defense[10]   = {1000,1050,1100,1150,1200,1250,1300,1350,1400,1450};    //방어력
int Recall_Wolverin_Life[10]      = {2000,2200,2400,2600,2800,3000,3200,3400,3600,3800};    //생명력
int Recall_Wolverin_UseMana[10]   = {52,56,60,64,68,72,76,80,84,88};

//이베이션 마스터리  // 장별 - 스킬밸런스 조정(10.08.10)
int Evasion_Mastery_AddPercent[10]	= {11,13,15,17,19,21,23,24,25,26};   //추가 회피능력 증가

//피닉스 샷
int   Phoenix_Shot_DamagePercent[10]	= {50,62,74,86,98,110,122,134,146,158};                 //공격력 가중
int   Phoenix_Shot_Time[10]         	= {9,18,27,36,45,54,63,72,81,90};  //차징 시간
int   Phoenix_Shot_UseMana[10]		= {33,35,37,40,43,46,50,54,58,62};

//포스 오브 네이쳐 // 장별 - 스킬밸런스 조정(10.08.10)
int Force_Of_Nature_AddDamage[10]      = {12,15,18,21,24,27,30,33,36,39};		  //추가 공격력
int Force_Of_Nature_AddHit[10]         = {20,30,40,50,60,70,80,90,100,110};	  //추가 명중력
int Force_Of_Nature_FalconAddDamage[10]= {22,26,30,34,38,42,46,50,54,58};	  //펠컨의 추가 공격력
int Force_Of_Nature_Time[10]           = {120,140,160,180,200,220,240,260,280,300};     //유지시간
int Force_Of_Nature_UseMana[10]        = {51,54,57,60,63,66,69,72,75,78};

//[나이트]
//디바인 피어싱
int Divine_Piercing_DamagePercent[10]  = {10,14,18,22,20,25,30,35,30,35};	    //공격력 가중
int Divine_Piercing_AddHit[10]         = {20,30,40,50,50,60,70,80,80,90};		//추가 명중력
int Divine_Piercing_AttackNum[10]      = {3,3,3,3,5,5,5,5,7,7};				    //공격 횟수
int Divine_Piercing_UseMana[10]        = {45,47,49,51,53,55,57,59,61,63};

//가들리 쉴드
int Godly_Shield_AbsorbPercent[10] = {2,4,6,8,10,12,14,16,18,20};          //공격 흠수력 증가
int Godly_Shield_Time[10]          = {100,110,120,130,140,150,160,170,180,190};//유지시간
int Godly_Shield_UseMana[10]       = {47,50,53,56,59,62,65,68,71,74};

//갓 블레스
int God_Bless_AddDamage[10]        = {6,9,12,15,18,21,24,27,30,33};				  //추가 공격력
int God_Bless_Time[10]             = {120,130,140,150,160,170,180,190,200,210};       //유지 시간
int God_Bless_UseMana[10]          = {57,60,63,66,69,72,75,78,81,84};

//소드 오브 져스티스
int Sword_Of_Justice_DamagePercent[10] = {100,110,120,130,140,150,160,170,180,190};     //공격력 가중
int Sword_Of_Justice_Area[10]          = {130,135,140,145,150,155,160,165,170,175}; //공격범위
int Sword_Of_Justice_UseMana[10]       = {50,53,56,59,62,65,68,71,74,77};


//[아탈란타]
//홀 오브 발할라 // 장별 - 스킬밸런스 조정(10.08.10)
int Hall_Of_Valhalla_AddEvation[10] = {5,8,11,14,17,20,23,26,29,32};          //추가 회피력
int Hall_Of_Valhalla_Time[10]       = {120,140,160,180,200,220,240,260,280,300};       //유지시간
int Hall_Of_Valhalla_UseMana[10]    = {36,39,42,45,48,52,56,60,65,70};

//익스트림 레이지
int X_Rage_DamagePercent[10]        = {70,80,90,100,110,120,130,140,150,160};     //공격력 가중
int X_Rage_Area[10]                 = {100,105,110,115,120,125,130,135,140,145};  //범위
int X_Rage_UseMana[10]              = {34,36,38,41,44,47,50,54,58,62};

//프로스트 재블린 // 장별 - 스킬밸런스 조정(10.08.10)
int Frost_Javelin_IceAddDamage[10][2] = {{40,50},{42,54},{44,58},{46,62},{48,66},
										 {50,70},{52,74},{54,78},{56,82},{58,86}}; //아이스 추가 공격력
int Frost_Javelin_SpeedSubPercent[10]= {7,8,9,10,11,12,13,14,15,16};                //타격된 적의 속도 저하수치  
int Frost_Javelin_IceTime[10]         = {5,5,6,6,7,7,8,8,9,9};			   //아이싱의 지속시간
int Frost_Javelin_Time[10]            = {120,140,160,180,200,220,240,260,280,300};        //유지시간
int Frost_Javelin_UseMana[10]         = {33,36,39,42,44,48,52,56,60,65};

//벤젼스  // 장별 - 스킬밸런스 조정(10.08.10)
int Vengeance_DamagePercent[10]  = {10,20,30,40,50,60,70,80,90,100};				//공격력 가중
int Vengeance_Range[10]          = {10,15,20,25,30,35,40,45,50,55};       //사정거리
int Vengeance_UseMana[10]        = {33,35,37,39,41,43,45,47,49,51};
int Vengeance_AddCritical[10]    = {2,4,6,8,10,13,16,19,22,25};	   //크리티컬 추가


//[프리스티스]
//글래셜 스파이크 // 장별 - 스킬밸런스 조정(10.08.10)
int Glacial_Spike_Damage[10][2] = {{80,100},{90,110},{100,120},{110,130},{120,140},
								   {130,150},{140,160},{150,170},{160,180},{170,190}};    //공격력 
int Glacial_Spike_Area[10]      = {150,155,160,165,170,175,180,185,190,195};              //범위
int Glacial_Spike_UseMana[10]   = {65,68,71,74,77,80,83,86,89,92};                          

//리제너레이션 필드
float Regeneration_Field_LifeRegen[10] = {1.2f,2.4f,3.6f,4.8f,6.0f,7.2f,8.4f,9.6f,10.8f,12.0f}; //생명 재생력 추가 
float Regeneration_Field_ManaRegen[10] = {1.0f,2.0f,3.0f,4.0f,5.0f,6.0f,7.0f,8.0f,9.0f,10.0f}; //기력 재생력 추가 
int   Regeneration_Field_Time[10]      = {35,40,45,50,55,60,65,70,75,80};                     //지속시간
int   Regeneration_Field_Area[10]      = {250,260,270,280,290,300,310,320,330,340};          //시전범위
int   Regeneration_Field_UseMana[10]   = {100,104,108,112,116,120,124,128,132,136};			//사용되는 엠소모
		
//체인라이트닝 // 장별 - 스킬밸런스 조정(10.08.10)
int Chain_Lightning_Damage[10][2] = {{100,130},{108,138},{116,146},{124,154},{132,162},
									 {140,170},{148,178},{156,186},{164,194},{172,202}};      //공격력
int Chain_Lightning_Num[10]       = {5,5,6,6,7,7,8,8,9,9};                                   //연결 갯수
int Chain_Lightning_Range[10]     = {140,145,150,155,160,165,170,175,180,185};               //연결 거리
int Chain_Lightning_UseMana[10]   = {76,79,82,85,88,91,94,97,100,103};

//서몬 무스펠 // 장별 - 스킬밸런스 조정(10.08.10)
int Summon_Muspell_Damage[10][2]  = {{70,95},{76,100},{82,105},{88,110},{94,115},
									{100,120},{106,125},{112,130},{118,135},{124,140}};  //공격력
int Summon_Muspell_Attack_Delay[10]        = {7,7,7,6,6,6,5,5,5,4};     //공격 딜레이
int Summon_Muspell_UndeadAbsorbPercent[10] = {10,14,18,22,26,30,34,38,42,46};      //언데드의 공격력 흡수치
int Summon_Muspell_BlockPercent[10]        = {5,6,7,8,9,10,11,12,13,14};         //유저 블록율
int Summon_Muspell_Time[10]       = {120,140,160,180,200,220,240,260,280,300};         //유지시간
int Summon_Muspell_UseMana[10]    = {110,114,118,122,126,130,134,138,140,146};   


//[메지션]
//파이어 엘레멘탈  // 장별 - 스킬밸런스 조정(10.08.10)
int Fire_Elemental_Damage[10][2]   = {{80,95},{85,100},{90,105},{95,110},{100,115},
									  {105,120},{110,125},{115,130},{120,135},{125,140}}; //공격력
int Fire_Elemental_Hit[10]         = {500,550,600,650,700,750,800,850,900,950};           //명중력
int Fire_Elemental_Life[10]        = {2000,2200,2400,2600,2800,3000,3200,3400,3600,3800}; //생명력  
int Fire_Elemental_UseMana[10]     = {52,56,60,64,68,72,76,80,84,88};    

//플레임 웨이브  // 장별 - 스킬밸런스 조정(10.08.10)
int Flame_Wave_FireDamage[10][2] = {{110,126},{120,138},{130,150},{140,162},{150,174},
									{160,186},{170,198},{180,210},{190,222},{200,234}}; //불 공격력
int Flame_Wave_Area[10]          = {110,120,130,140,150,160,170,180,190,200};		    //공격 범위
int Flame_Wave_UseMana[10]       = {75,79,83,87,91,95,99,103,107,111};

//디스토션
int Distortion_SpeedSubPercent[10]  = {4,6,8,10,12,14,16,18,20,22};         //속도 저하 
int Distortion_DamageSubPercent[10] = {5,6,7,8,9,10,11,12,13,14};         //공격력 저하
int Distortion_Area[10]             = {120,125,130,135,140,145,150,155,160,165};     
int Distortion_Time[10]             = {4,6,8,10,12,14,16,18,20,22};
int Distortion_UseMana[10]          = {105,110,115,120,125,130,135,140,145,150};   


//미티어라이트 // 장별 - 스킬밸런스 조정(10.08.10)
int Meteo_Damage[10][2] = {{116,146},{128,158},{140,170},{152,182},{164,194},
						   {176,206},{188,218},{200,230},{212,242},{224,254}};     //공격력
int Meteo_Area[10]      = {100,105,110,115,120,125,130,135,140,145};               //범위
int Meteo_UseMana[10]   = {100,104,108,112,116,120,124,128,132,136};     


//공성전 클랜스킬
int C_Skill_HpPoint[10]   ={100,110,120,130,140,150,160,170,180,190};//hp상승
int C_Skill_AttPercent[10]={10,11,12,13,14,15,16,17,18,19};          //공격력 상승
int C_Skill_EvaPercent[10]   ={10,11,12,13,14,15,16,17,18,19};       //회피율 상승
