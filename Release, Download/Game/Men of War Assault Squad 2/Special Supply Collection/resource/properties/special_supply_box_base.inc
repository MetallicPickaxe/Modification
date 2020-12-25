;
;
;
;最后修改日期：2020.11.21
;综述
;注：
;1.三种自动补给装置的原始补给量不同，但是修改后的一致
;2.使用{item "mortar" "fg" "ammo" 3 {max 30}{value 2}}式的语法，而非{item "ammo fg mortar" 100}式的，且拒绝不良的简化|省略语法
;3.自3.250起的新版本中，枪弹、炮弹跟随resupply_generic限制进行补给；其他的按照地图定义|breed定义 、resupply_generic较小的一方进行补给，覆盖顺序：地图定义>breed定义>resupply_generic
;4.默认的补给参照对象是人物，其他参照对象则写出
;5.保留原文件信息是便于获得对应版本的快照，用于对比分析
;6.filled、filling不可用
;
;原始数据版本：3.262.0
;
;原content。备份用

;修改后的内容
;定义新的变量，减少代码重复
(define "base_attribute"
	("weight")
	("size")
)

(define "base_attribute_heavy"
	("weight_heavy")
	("size")
)

(define "base_attribute_light"
	("weight_light")
	("size_small")
)

(define "collection_ammo"
	("collection_pistol_ammo")
	("collection_hmgun_ammo")
	("collection_mgun_ammo")
	("collection_ptr_ammo")
	("collection_rifle_ammo")
)

(define "collection_bazooka"
	("collection_bazooka_weapon")
	("collection_bazooka_ammo")
)

(define "collection_bazooka_ammo"
	{item "ammo bazooka" 100}
	{item "ammo m18recoilless" 100}
	{item "ammo panzerfaust" 100}
	{item "ammo panzerfaust60" 100}
	{item "ammo panzershreck" 100}
	{item "ammo piatrocket" 100}
	{item "ammo type_4" 100}
	{item "ammo uber_bazooka" 100}
)

(define "collection_bazooka_weapon"
	{item "weapon bazooka" 100 filled}
	{item "weapon doublebazooka" 100 filled}
	{item "weapon m18recoilless" 100 filled}
	{item "weapon panzerfaust" 100 filled}
	{item "weapon panzerfaust60" 100 filled}
	{item "weapon panzershreck" 100 filled}
	{item "weapon piatrocket" 100 filled}
	{item "weapon type_4at" 100 filled}
	{item "weapon uber_bazooka" 100 filled}
)

(define "collection_bombing"
	;拖到外面爆炸
	{item "ammo air_bomb" 100}
	;拖到外面爆炸
	{item "ammo air_bomb_il2" 100}
	;无图标，拖到外面落下航弹引起爆炸
	{item "ammo artillery_explosion" 100}
	;无图标，标记后落下航弹引起爆炸
	{item "ammo artillery_explosion_flaer" 100}
	;无图标，拖到外面落下航弹引起爆炸
	{item "ammo outburst_nc" 100}
	;无图标，拖到外面落下航弹引起爆炸
	{item "ammo outburst_small_nc" 100}
	;图标极小，拖到外面爆炸
	{item "ammo small air_bomb" 100}
	;无图标，拖到外面落下航弹引起爆炸
	{item "ammo small artillery_explosion" 100}
	;可拖到外面稳定放置，可放入人物背包，激发方式未知
	{item "ammo stuff air_bomb" 100}
	;无图标，激活方式未知，拖到外面报错
	;{item "bomb_dropper" 100}
	;无图标，激活方式未知，拖到外面报错
	;{item "bomb_dropper_il2" 100}
)

(define "collection_content"
	;不知道激发方式，拖到外面报错
	;{item "drug" 100}		;游戏内标注为medic
	;{item "fire" 100}
	;{item "fuel" 100}
	;{item "liquid" 100}		;游戏内标注为fuel
	;{item "water" 100}
)

(define "collection_etc"
	;Melee
	("collection_melee")
	;
	;Et Cetera
	("collection_etc_base")
)

(define "collection_etc_base"
	;Body
	{item "body_armor" 100}
	;不知道激发方式，日本神风特攻队员着此装备，但不爆炸
	{item "kamikaze_bomb" 100}

	;Capacity
	{item "barrel" 100 filled}
	{item "box" 100 filled}
	{item "can" 100 filled}
	{item "small_box" 100 filled}

	;Content
	("collection_content")

	;MEDic
	{item "bandage" 100}
	;不知道激发方式
	{item "medkit" 100 filled}
	{item "morphine" 100}

	;Special
	;不知道激发方式
	{item "b33r" 100}
	{item "barbwire_kit" 100}
	{item "binocular" 100}		;扩展视野，有fog时可见效
	{item "chicken" 100}		;活物
	;不知道激发方式，无法点燃
	{item "cord_wood" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "cumulative_charge" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "cumulative_launcher" 100}
	{item "hedgehog_kit" 100}
	;不知道激发方式，拖动到人物背包报错，放到外面是item，无人物背包
	;{item "human" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "light" 100}
	{item "matchbox" 100}
	{item "mine_detector" 100}
	{item "plant" 100}
	;不知道激发方式
	{item "rad" 100}
	;不知道激发方式
	{item "radio_station" 100}
	{item "repair_kit" 100}
	{item "sandbag_kit" 100}
	;不知道激发方式
	{item "sandbag_kit2" 100}		;之前版本为sandbag_kit的3倍量版本
	;不知道激发方式，无图标，拖到外面报错
	;{item "searchlight" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "secret_doc_bag1" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "secret_doc_bag2" 100}
	;不知道激发方式，无图标，拖到外面报错
	;{item "secret_doc_bag3" 100}
	;不知道激发方式
	{item "spade_inv" 100}
	;不知道激发方式
	{item "steak" 100}
	;不知道激发方式
	{item "wirecutters" 100}
)

(define "collection_explosive"
	{item "dynamite" 100}
	{item "dynamite_clockwork" 100}		;不知道激发方式
	{item "dynamite_ladung" 100}
	{item "mine antipersonnel" 100}
	{item "mine antitank" 100}
	{item "mine_antitank_jap" 100}		;手持引爆的炸弹，神风特攻队员使用
)

(define "collection_favourite"
	;以下部分为“战地实用套”
	{item "mine antipersonnel" 100}		;反步兵地雷
	{item "mine antitank" 100}		;反战车地雷
	{item "barbwire_kit" 10}		;铁丝网
	;{item "barrel" 10 filled}		;装满的油桶，3.262.0版装入liquid导致无法使用
	{item "barrel" 10 filling "fuel" 500}		;装满的油桶
	{item "binocular" 100}		;扩展视野，有fog时可见效
	;{item "can" 10 filled}		;油壶，用于周转燃料，3.262.0版装入liquid导致无法使用
	{item "can" 10 filling "fuel" 60}		;油壶，用于周转燃料
	{item "hedgehog_kit" 100}		;拒马
	{item "matchbox" 100}		;纵火烧库的最佳选择
	{item "mine_detector" 10}		;排雷器。不会用
	{item "plant" 100}		;伪装物。貌似和真的植物没区。可视为种田套具
	{item "repair_kit" 10}		;修理箱
	{item "sandbag_kit" 100}		;沙袋
	{item "grenade satchel" 100}		;炸药包，比【dynamite】那种“1捆‘二踢脚’”的威力大，是文件包样式的
	{item "grenade smoke_paradrop_ammo" 10}		;补给用信号弹，补给“日用套”
	{item "grenade smoke_paradrop_ammo_heavy" 3}		;重型补给用信号弹，补给全部战役地图有作用|可用物品，便于测试

	;以下激活的1套武器是按照在同型中的弹容量、威力、体积3种属性综合对比排序后的优选，定名“日用套”
	;
	;冷兵器
	;匕首虽然速度不如手斧，但精度更高、质量更小、体积更小
	{item "knife_ger" 100}		;De军匕首，De军透露着严谨。整体精度最高
	;
	;手枪
	{item "hdm" 100 filled}		;OSS（Office of Strategic Services）高标无声手枪。弹容量最大
	;
	;冲锋枪|Sub-Machine Gun
	{item "ppsh" 100 filled}		;弹鼓式大容量型PPS41冲锋枪。弹容量最大
	;
	;步枪|Carabine步枪
	{item "m2_carbine" 100 filled}		;M2 Carabine步枪。弹容量最大，射速最大，但威力、？射程最小
	;
	;
	{item "em2" 100 filled}		;狙击版Lee-Emfield Mk3步枪旧|原版本中的狙击枪中的大容量，容量为10，新|现版本削为8。弹容量最大，射速较慢，装填最慢
	;狙击版G43不能开瞄，因此不属于狙击步枪
	;
	;PTR|反战车步枪|反器材步枪
	{item "type_97_antitank" 100 filled}		;97式反战车步枪。弹容量最大
	;
	;火焰喷射器|Flamer
	;选用联邦军的是因为其更美形一些，其与41式互相通用，且参数、容量一致
	{item "flame_thrower" 20}		;M2火焰喷射器发射部
	{item "balloon" 20 filled}		;M2火焰喷射器燃料罐
	;{item "balloon" 20 filling "fuel" 80}		;M2火焰喷射器燃料罐。测试是否3.262.0版装入liquid导致无法使用：都可用
	;
	;轻机枪|Light Machine Gun
	{item "browning_m19a6" 100 filled}		;Browning M1919A6重机枪（轻机枪弹）。弹容量最大
	;
	;Heavy Machine Gun
	{item "uber_browning" 100 filled}		;特别版Browning M2HB型重机枪，反装甲的机枪手、车辆用。即：坊间名枪“.50”的特别版。弹容量最大，威力较大，精度较高
	;
	;RPG（Rocket Propelled Grenade）|火箭推进榴弹
	{item "weapon uber_bazooka" 100 filled}		;特别版Bazooka火箭推进榴弹，占用2行。威力最大，射程最大

	;特殊部队用武器
	{item "m1_carbine" 100 filled}		;M1 Carabine步枪，使用步枪的车辆、医疗等非战斗人员自卫用
	{item "type100smg" 100 filled}		;100年式冲锋枪，使用冲锋枪的车辆、医疗等非战斗人员自卫用
	;
	{item "sks" 100 filled}		;SKS45半自动步枪，兼任他职的步枪手用
	{item "mp41" 100 filled}		;MP41冲锋枪，兼任他职的冲锋枪手用
	;
	{item "g43_scope" 100 filled}		;瞄准镜版G43半自动步枪，高级步枪手用
	{item "pps43" 100 filled}		;PPS43冲锋枪，高级冲锋枪手用
	;
	{item "de_lisle" 100 filled}		;消音型Deliver Carabine步枪，突击的步枪手、特种任务的步枪手用。威力最大
	{item "sten_v_silencer" 100 filled}		;消音型Sten Mk5冲锋枪，突击的冲锋枪手、特种任务的冲锋枪手用
	;
	{item "thompson_m1928" 100 filled}		;弹鼓式大容量型Thompson M1928A1冲锋枪，队长用
	{item "sg44b" 100 filled}		;StG44突击步枪（冲锋枪弹），突击队队长用
	;
	{item "knife_ger" 100}		;熟练度不高的特种任务的士兵用
	{item "axe" 100 filled}		;熟练度高的特种任务的士兵用。速度最快
	;{item "hdm" 100 filled}		;特种任务的军官|队长|书记|指挥人员|非军事单位人员用
	;
	{item "weapon panzerfaust" 100 filled}		;铁拳100火箭推进榴弹。配合Modification使用完不再自动扔掉，也能装填，但是装填后无视觉效果，占用1行。威力最大。可破防用。兼任反战车任务的士兵用

	;待分配
	{item "knife_japan" 100 filled}
	{item "knife_rus" 100 filled}
	;
	{item "flaergun" 100 filled}
	{item "flaermow" 100 filled}
	;
	{item "nagan_pb" 100 filled}		;消音型Nagant转轮式手枪。最大弹容量
	{item "welrod" 100 filled}
	;
	;弹容量最大
	{item "em3" 100 filled}
	;
	{item "browning_m19" 100 filled}		;Browning M1919重机枪（轻机枪弹）
	{item "maxim_inv" 100 filled}		;Maxim重机枪（轻机枪弹）
	{item "vickers_mgun" 100 filled}
	{item "ds" 100 filled}		;DS39重机枪（轻机枪弹），？车辆用
	;
	{item "dshk" 100 filled}		;伤害最大
	;
	{item "weapon doublebazooka" 100 filled}		;2发版Bazooka。弹容量最大
	;
	{item "grenade pwm1" 100}
	{item "grenade rpg43" 100}
	{item "grenade type99at" 100}
	;
	{item "grenade f1" 100}
	{item "grenade m39" 100}
	{item "grenade m61" 100}
	{item "grenade mk1" 100}
	{item "grenade type99" 100}
	;
	{item "dynamite" 100}
	{item "dynamite_ladung" 100}
	;
	{item "em3_mark1" 100 filled}		;Lee-Enfield Mk3步枪Mk1枪榴弹
	{item "m12_shotgun" 100 filled}		;Winchester霰弹枪
	{item "molotov_coctail" 100}		;Molotov鸡尾酒燃烧瓶
	{item "type99rifle_at" 100 filled}		;99年式步枪反坦克枪榴弹

	;候选|Repository
	;冷兵器
	;匕首仅有精度区别；手斧和匕首有质量、速度、精度上的区别
	;{item "axe" 1}		;质量较大，速度较快，精度较低
	;{item "knife_ger" 1}		;中远精度最高，近处精度偏大，速度较慢，质量较小
	;{item "knife_japan" 1}		;中近精度最高，速度较慢，质量较小
	;{item "knife_rus" 1}		;中近精度最高，速度较慢，质量较小
	;
	;手枪
	;无威力、精度区别，仅有质量、弹容量区别
	;{item "hdm" 1 filled}		;半自动式最大弹容量，最大伤害
	;{item "nagan_pb" 1 filled}		;转轮式最大弹容量，最大伤害
	;{item "welrod" 1 filled}		;半自动式较大弹容量，最大伤害
	;
	;冲锋枪|Sub-Machine Gun
	;{item "mp41" 1 filled}
	;{item "pps43" 1 filled}		;伤害较大
	;{item "ppsh" 1 filled}		;弹容量最大
	;{item "sg44b" 1 filled}		;伤害最大
	;{item "sten_v_silencer" 1 filled}		;伤害最大
	;{item "thompson_m1928" 1 filled}		;弹容量较大
	;{item "type100smg" 1 filled}
	;
	;半自动步枪
	;非自动步枪、狙击步枪5大阵营伤害值、精准度一样，仅弹容量、射速有区别
	;{item "g43_scope" 1 filled}		;射速较慢，精度较高，伤害较大
	;{item "m1_carbine" 1 filled}		;伤害中等，射速较大，弹容量较大
	;{item "m2_carbine" 1 filled}		;弹容量最大，伤害最小，射速最大
	;{item "sks" 1 filled}		;伤害较大，射速较大，精度中等，弹容量中等
	;
	;栓动步枪
	;{item "de_lisle" 1 filled}		;伤害最大
	;{item "em3" 1 filled}		;弹容量最大
	;
	;栓动狙击步枪
	;精度、伤害、射程相同
	;{item "em2" 1 filled}		;弹容量最大，射速较慢，装填最慢
	;
	;PTR|反战车步枪|反器材步枪
	{item "type_97_antitank" 100 filled}		;弹容量最大
	;
	;机枪
	;轻机枪弹药机枪伤害、精度相同，仅弹容量、射速有区别
	;{item "browning_m19" 1 filled}
	;{item "browning_m19a6" 1 filled}
	;{item "ds" 1 filled}
	;{item "maxim_inv" 1 filled}
	;{item "vickers_mgun" 1 filled}
	;
	;{item "dshk" 1 filled}		;伤害最大
	;{item "uber_browning" 1 filled}		;综合好，弹容量最大、精度较高、伤害值较大
	;
	;RPG（Rocket Propelled Grenade）|火箭推进榴弹
	;{item "weapon doublebazooka" 1 filled}		;弹容量最大，射程较大，伤害较小
	;{item "weapon panzerfaust" 1 filled}		;伤害较大，体积最小，射程较小
	;{item "weapon uber_bazooka" 1 filled}		;伤害最大，射程最大
	;
	;Grenade AT
	;{item "grenade pwm1" 1}		;伤害较大，射程较大
	;{item "grenade rpg43" 1}		;伤害中等，射程较大
	;{item "grenade type99at" 1}		;伤害最大，射程最小（贴身）
	;
	;Grenade AP
	;伤害相同，De版体积大，日版97年式较99年式少了一个able contact属性
	;{item "grenade f1" 1}
	;{item "grenade m39" 1}
	;{item "grenade m61" 1}
	;{item "grenade mk1" 1}
	;{item "grenade type99" 1}
	;
	;火焰喷射器|Flamer
	;参数、容量一致
	{item "flame_thrower" 1}		;M2火焰喷射器发射部
	{item "balloon" 1 filled}		;M2火焰喷射器燃料罐燃料罐
	;
	;Explosive
	;{item "dynamite" 1}		;伤害较大，射程较小
	;{item "dynamite_ladung" 1}		;伤害最大，射程较小
	;{item "grenade satchel" 1}		;伤害较大，射程较大

	;消音武器
	;{item "de_lisle" 1 filled}		;消音型Deliver Carabine步枪
	;{item "hdm" 1 filled}		;消音型OSS（Office of Strategic Services）高标手枪
	;{item "nagan_pb" 1 filled}		;消音型Nagant左轮手枪
	;{item "sten_v_silencer" 1 filled}		;消音型Sten Mk5冲锋枪
	;{item "welrod" 100 filled}		;消音型威尔洛德手枪

	;不太有用的武器类型
	;{item "em3_mark1" 1 filled}		;Lee-Enfield Mk3步枪Mk1枪榴弹
	;{item "m12_shotgun" 1 filled}		;Winchester霰弹枪
	;{item "molotov_coctail" 1}		;Molotov鸡尾酒燃烧瓶
	;{item "type99rifle_at" 1 filled}		;99年式步枪反坦克枪榴弹

	;代自动补给补给的的部分（2.250.0版游戏补给逻辑改版后）
	{item "body_armor" 100}		;防弹护甲
	{item "helmet_airborne_usa" 100}		;联邦军空降师头盔，彰显着胜利
	{item "morphine" 100}		;Morphine，起死回生

	;娱乐用具
	;b33r		;1箱Beer
	;chicken		;鸡
	;crod_wood		;1捆木柴
	;steak		;1盘牛肉
)

(define "collection_flame"
	;Injector|Thrower
	{item "flame_thrower" 100}
	{item "flame_thrower_g" 100}
	;无法发射，贴图不完整
	{item "flame_thrower_ssd" 100}		;游戏内标注为Tank Flamethrower
	{item "flame_thrower_tank" 100}		;游戏内标注为Tank Flamethrower
	;
	;Tank|Ballon
	{item "balloon" 100 filled}
	{item "balloon_g" 100 filled}
	{item "tank_balloon" 100 filled}		;喷火战车用
)

(define "collection_grenade"
	;？Anti-Personal
	{item "grenade f1" 100}
	{item "grenade m24" 100}
	{item "grenade m39" 100}
	{item "grenade m61" 100}
	{item "grenade mk1" 100}
	{item "grenade type97" 100}
	{item "grenade type99" 100}
	;Explosive
	{item "grenade satchel" 100}		;游戏中使用方式、分类归为了Explosive
	;
	;Anti-Tank
	;Normal
	{item "grenade m24x5" 100}
	{item "grenade n73at" 100}
	{item "grenade pwm1" 100}
	{item "grenade rg42x3" 100}
	{item "grenade rpg40" 100}
	{item "grenade rpg43" 100}
	{item "grenade type3at" 100}
	{item "grenade type3at_a" 100}
	{item "grenade type99at" 100}
	;Flame
	{item "grenade molotov_coctail" 100}
	;
	;Smoke
	{item "grenade smoke" 100}
	{item "grenade smoke_paradrop_ammo" 100}
	{item "grenade smoke_paradrop_ammo_heavy" 100}
	;战役中：无图标，使用、拖到外面报错；遭遇战中：？
	;{item "grenade skirmish_smoke" 100}
)

(define "collection_gun"
	;无图标，未知激发方式，拖到外面报错
	;{item "9mm_fmowgun" 1 filled}
	;{item "20mm_flak38" 1 filled}
	;{item "20mm_flak38_x4" 1 filled}
	;{item "20mm_kwk30" 1 filled}
	;{item "20mm_kwk38(l55)" 1 filled}
	;{item "20mm_mg151" 1 filled}
	;{item "20mm_mk10" 1 filled}
	;{item "20mm_oerlikon" 1 filled}
	;{item "20mm_oerlikon_x2" 1 filled}
	;{item "20mm_tns" 1 filled}
	;{item "20mm_type2" 1 filled}
	;{item "28mm_spzb41" 1 filled}
	;{item "37mm_61-k" 1 filled}
	;{item "37mm_flak36" 1 filled}
	;{item "37mm_flak43" 1 filled}
	;{item "37mm_hori" 1 filled}
	;{item "37mm_m3" 1 filled}
	;{item "37mm_m5" 1 filled}
	;{item "37mm_m6" 1 filled}
	;{item "37mm_pak36" 1 filled}
	;{item "37mm_type38" 1 filled}
	;{item "40mm_bofors" 1 filled}
	;{item "40mm_m19" 1 filled}
	;{item "40mm_oqf2pdr" 1 filled}
	;{item "45mm_20k" 1 filled}
	;{item "47mm_type1" 1 filled}
	;{item "50mm_kwk38" 1 filled}
	;{item "50mm_kwk39" 1 filled}
	;{item "50mm_pak38" 1 filled}
	;{item "57mm_oqf" 1 filled}
	;{item "57mm_type1" 1 filled}
	;{item "57mm_type2" 1 filled}
	;{item "57mm_type97" 1 filled}
	;{item "57mm_zis2" 1 filled}
	;{item "57mm_zis4" 1 filled}
	;{item "75mm_k51(l24)" 1 filled}
	;{item "75mm_kwk37" 1 filled}
	;{item "75mm_kwk40" 1 filled}
	;{item "75mm_kwk40(l48)" 1 filled}
	;{item "75mm_kwk42" 1 filled}
	;{item "75mm_lg40" 1 filled}
	;{item "75mm_m2" 1 filled}
	;{item "75mm_m2a" 1 filled}
	;{item "75mm_m3" 1 filled}
	;{item "75mm_m6" 1 filled}
	;{item "75mm_mk5" 1 filled}
	;{item "75mm_pak39" 1 filled}
	;{item "75mm_pak40" 1 filled}
	;{item "75mm_stuk40" 1 filled}
	;{item "75mm_stuk42" 1 filled}
	;{item "75mm_type3" 1 filled}
	;{item "75mm_type5" 1 filled}
	;{item "75mm_type90" 1 filled}
	;{item "75mm_type99" 1 filled}
	;{item "76mm_f34" 1 filled}
	;{item "76mm_kt26" 1 filled}
	;{item "76mm_m1a2" 1 filled}
	;{item "76mm_m5" 1 filled}
	;{item "76mm_m7" 1 filled}
	;{item "76mm_mk4" 1 filled}
	;{item "76mm_zis3" 1 filled}
	;{item "76mm_zis5" 1 filled}
	;{item "77mm_hv" 1 filled}
	;{item "85mm_d5s" 1 filled}
	;{item "85mm_d5t" 1 filled}
	;{item "85mm_zis53" 1 filled}
	;{item "88mm_flak18" 1 filled}
	;{item "88mm_flak37" 1 filled}
	;{item "88mm_flak41" 1 filled}
	;{item "88mm_kwk36" 1 filled}
	;{item "88mm_kwk36_veteran" 1 filled}
	;{item "88mm_kwk43" 1 filled}
	;{item "88mm_oqfmk2" 1 filled}
	;{item "88mm_pak43" 1 filled}
	;{item "88mm_type99" 1 filled}
	;{item "90mm_m3" 1 filled}
	;{item "90mm_m15" 1 filled}
	;{item "93mm_vickers" 1 filled}
	;{item "95mm_oqf" 1 filled}
	;{item "1mm_d10c" 1 filled}
	;{item "105mm_l31" 1 filled}
	;{item "105mm_m2a1" 1 filled}
	;{item "105mm_m4a3" 1 filled}
	;{item "105mm_stuh42" 1 filled}
	;{item "105mm_type6" 1 filled}
	;{item "105mm_type91" 1 filled}
	;{item "120mm_l50" 1 filled}
	;{item "120mm_type97" 1 filled}
	;{item "122mm_a19s" 1 filled}
	;{item "122mm_d25" 1 filled}
	;{item "122mm_m30" 1 filled}
	;{item "122mm_m30s" 1 filled}
	;{item "128mm_pak44" 1 filled}
	;{item "150mm_sfh18" 1 filled}
	;{item "150mm_sig33" 1 filled}
	;{item "150mm_sig33_how" 1 filled}
	;{item "150mm_type38" 1 filled}
	;{item "150mm_type96" 1 filled}
	;{item "152mm_bl6" 1 filled}
	;{item "152mm_d1" 1 filled}
	;{item "152mm_m10t" 1 filled}
	;{item "152mm_ml20a" 1 filled}
	;{item "155mm_gpf" 1 filled}
	;{item "155mm_m12" 1 filled}
	;{item "203mm_gun" 1 filled}
	;{item "290mm_mortar" 1 filled}
	;{item "305mm_gun" 1 filled}
	;{item "600mm_gun" 1 filled}
)

(define "collection_head"
	;Beret
	{item "beret_commando" 100}
	{item "beret_eng" 100}
	{item "beret_eng1" 100}
	{item "beret_eng2" 100}
	{item "beret_sas" 100}
	;
	;Cap
	;Normal
	{item "cap_eng" 100}
	{item "cap_eng_afr" 100}
	{item "cap_jap_off" 100}
	{item "cap1_ger" 100}
	{item "cap1_jap" 100}
	{item "cap1_rus" 100}
	{item "cap1_usa" 100}
	{item "cap2_rus" 100}
	{item "cap3_rus" 100}
	;Cook
	{item "cook_cap" 100}
	;Field
	{item "fieldcap_eng" 100}
	{item "fieldcap_ger" 100}
	{item "fieldcap_jap" 100}
	{item "fieldcap_rus" 100}
	{item "fieldcap1_ger" 100}
	{item "fieldcap1_jap" 100}
	{item "fieldcap1_rus" 100}
	{item "fieldcap2_ger" 100}
	{item "fieldcap3_ger" 100}
	;ET Cetera
	{item "rw_cap" 100}
	{item "usmc-cap1" 100}
	;Tank
	{item "tank_cap1_ger" 100}
	{item "tank_cap2_ger" 100}
	;Fur
	{item "warden_furcap" 100}
	;
	;Helmet
	;Normal
	{item "helmet_airborne_usa" 100}
	{item "helmet_jap" 100}
	{item "helmet_marine_usa" 100}
	{item "helmet_novice" 100}
	{item "helmet_paratrooper" 100}
	{item "helmet_usa_w" 100}
	{item "helmet1_eng" 100}
	{item "helmet1_eng_w" 100}
	{item "helmet1_ger" 100}
	{item "helmet1_jap" 100}
	{item "helmet1_jap_w" 100}
	{item "helmet1_rus" 100}
	{item "helmet1_rus_w" 100}
	{item "helmet1_usa" 100}
	{item "helmet2_eng" 100}
	{item "helmet2_ger" 100}
	{item "helmet2_jap" 100}
	{item "helmet2_rus" 100}
	{item "helmet2_usa" 100}
	{item "helmet3_ger" 100}
	{item "helmet3_jap" 100}
	{item "helmet4_ger" 100}
	{item "helmet4_usa" 100}
	{item "helmet5_ger" 100}
	{item "helmet6_ger" 100}
	;Tank
	{item "tankhelmet_jap" 100}
	{item "tankhelmet_rus" 100}
	{item "tankhelmet_usa" 100}
	;
	;Hat
	;Radio
	{item "radioman_hat" 100}
	;Winter
	{item "winterhat" 100}
	;
	;ET Cetera
	{item "extra_headcrab" 100}
)

(define "collection_hmgun"
	("collection_hmgun_weapon")
	("collection_hmgun_ammo")
)

(define "collection_hmgun_ammo"
	{item "ammo hmgun" 100}
)

(define "collection_hmgun_weapon"
	{item "browning" 100 filled}
	{item "browning_x2" 100 filled}
	{item "browning_x4" 100 filled}
	{item "dshk" 100 filled}		;ДЕГТЯРЁВА MACHINE GUN
	{item "uber_browning" 100 filled}
)

(define "collection_melee"
	{item "dynamite" 100}
	{item "dynamite_clockwork" 100}		;不知道激发方式
	{item "dynamite_ladung" 100}
	{item "mine antipersonnel" 100}
	{item "mine antitank" 100}
	{item "mine_antitank_jap" 100}		;手持引爆的炸弹，神风特攻队员使用
)

(define "collection_mgun"
	;Light machine Gun|轻机枪
	("collection_mgun_weapon")

	;附属
	;Ammunition
	("collection_mgun_ammo")
)

(define "collection_mgun_ammo"
	{item "ammo mgun" 100}
)

(define "collection_mgun_weapon"
	;Light machine Gun|轻机枪
	{item "besa" 100 filled}
	{item "bren" 100 filled}
	{item "browning_m19" 100 filled}
	{item "browning_m19a6" 100 filled}
	;***ДЕГТЯРЁВА MACHINE GUN***
	{item "dp" 100 filled}
	{item "ds" 100 filled}
	{item "dt" 100 filled}
	;
	{item "johnson_m1941" 100 filled}
	{item "lewis_gun" 100 filled}
	{item "maxim_inv" 100 filled}
	{item "maxim" 100 filled};4×的Maxim机关枪，无法发射
	{item "mg34" 100 filled}
	{item "mg34_tower" 100 filled}
	{item "mg34_x2" 100 filled}
	{item "mg37" 100 filled}
	{item "mg42" 100 filled}
	{item "mg42_120" 100 filled}
	{item "type1hmg" 100 filled}
	{item "type99lmg" 100 filled}
	{item "vickers_k" 100 filled}
	{item "vickers_mgun" 100 filled}
	;
	;Assault|Automatic Rifle
	{item "bar" 100 filled}
	{item "fg42" 100 filled}
)

(define "collection_non-weapon"
	;Head Gear
	("collection_head")

	;Et Cetera
	("collection_etc_base")
)

(define "collection_pistol"
	("collection_pistol_weapon")

	;附属
	;Ammunition|Content
	("collection_pistol_ammo")
)

(define "collection_pistol_ammo"
	{item "ammo pistol" 100}
	{item "ammo flaer" 100}
	{item "ammo flaermow" 100}
	{item "ammo pistol" 100}
)

(define "collection_pistol_weapon"
	;Flare Gun
	{item "flaergun" 100 filled}		;炮火支援
	{item "weapon flaermow" 100 filled}		;照明

	;Pistol
	{item "colt" 100 filled}
	{item "luger" 100 filled}
	{item "nambu" 100 filled}
	{item "tt" 100 filled}
	{item "valter" 100 filled}
	;
	;Silencer
	{item "hdm" 100 filled}
	{item "welrod" 100 filled}		;？

	;Revolver
	;Normal
	{item "webley" 100 filled}
	{item "nagan" 100 filled}		;NAGANT REVOLVER
	;
	;Silencer
	{item "nagan_pb" 100 filled}		;NAGANT REVOLVER
)

(define "collection_ptr"
	("collection_ptr_weapon")

	;附属
	;Ammunition
	("collection_ptr_ammo")
)

(define "collection_ptr_ammo"
	{item "ammo ptr" 100}
)

(define "collection_ptr_weapon"
	{item "boyes" 100 filled}
	{item "ptrd" 100 filled}
	{item "ptrs" 100 filled}
	{item "pzb39" 100 filled}
	{item "type_97_antitank" 100 filled}
)

(define "collection_reactive"
	("collection_reactive_weapon")
	("collection_reactive_ammo")
)

(define "collection_reactive_ammo"
	;Normal
	;无图标，激发方式未知，拖到外面报错
	;？不确定是Ammonition
	;{item "arl" 100}
	;{item "arl_il2" 100}
	;{item "arl_mustang" 100}
	;
	;Ammo
	{item "ammo 20cm_rocket" 100}
	{item "ammo 30cm_rocket" 100}
	{item "ammo arl" 100}
	{item "ammo bm8" 100}
	{item "ammo calliope" 100}
	{item "ammo fg mortar" 100}
	{item "ammo fg mortar150" 100}
	{item "ammo goliath" 100}
	{item "ammo katusha" 100}
	{item "ammo lm_ammo" 100}
	{item "ammo nebel41" 100}
	{item "ammo nebel42" 100}
	{item "ammo panzerwerfer42" 100}
	{item "ammo sturmtiger" 100}
	{item "ammo swg41" 100}
	{item "ammo torpedo" 100}
	{item "ammo tulip" 100}
)

(define "collection_reactive_weapon"
	;Normal
	;无图标，激发方式未知，拖到外面报错
	;Weapon
	;无图标，激发方式未知，拖到外面报错
	;{item "weapon 380mm_rw61" 100 filled}
	;{item "weapon bm8" 100 filled}
	;{item "weapon calliope" 100 filled}
	;{item "weapon mortar150" 100 filled}
	;{item "weapon goliath" 100 filled}
	;{item "weapon katusha" 100 filled}
	;{item "weapon lm" 100 filled}
	;{item "weapon nebel41" 100 filled}
	;{item "weapon nebel42" 100 filled}
	;{item "weapon panzerwerfer42" 100 filled}
	;{item "weapon swg41" 100 filled}
	;{item "weapon t4_20cm" 100 filled}
	;{item "weapon t4_30cm" 100 filled}
	;{item "weapon torpedo" 100 filled}
	;{item "weapon tulip" 100 filled}
	;{item "weapon werfer42" 100 filled}
	;{item "weapon wurfrahmen40" 100 filled}
)

(define "collection_rifle"
	("collection_rifle_weapon")
	("collection_rifle_ammo")
)

(define "collection_rifle_ammo"
	{item "ammo rifle" 100}
	{item "ammo rifle_grenade" 100}
	{item "ammo rifle_grenade_at" 100}
	{item "ammo shotgun" 100}
)

(define "collection_rifle_weapon"
	{item "g41b" 100 filled}
	{item "g43" 100 filled}
	{item "johnson" 100 filled}
	{item "em3" 100 filled}
	{item "m1903" 100 filled}
	{item "mauzer" 100 filled}
	{item "mosin" 100 filled}		;MOSIN–NAGANT RIFLE
	{item "sks" 100 filled}
	{item "svt40" 100 filled}
	{item "type2rifle" 100 filled}
	{item "type99rifle" 100 filled}
	;
	;Assault|Automatic Rifle
	;{item "m2_carbine" 100 filled}		;？
	;
	;Carbine Rifle
	{item "garand" 100 filled}
	{item "m1_carbine" 100 filled}
	{item "m2_carbine" 100 filled}
	;
	;Scope
	{item "g43_scope" 100 filled}
	;
	;Silencer
	{item "de_lisle" 100 filled}

	;Rifle Grenade
	{item "em3_mark1" 100 filled}
	{item "type99rifle_at" 100 filled}

	;Shot Gun
	{item "m12_shotgun" 100 filled}
)

(define "collection_shell"
	;AP
	("collection_shell_ap")
	;APCR
	("collection_shell_apcr")
	;Et Cetera
	("collection_shell_etc")
	;FG
	("collection_shell_fg")
)

(define "collection_shell_ap"
	{item "ammo ap bullet28" 100}
	{item "ammo ap bullet37" 100}
	{item "ammo ap bullet40" 100}
	{item "ammo ap bullet45" 100}
	{item "ammo ap bullet47" 100}
	{item "ammo ap bullet50" 100}
	{item "ammo ap bullet57" 100}
	{item "ammo ap bullet75" 100}
	{item "ammo ap bullet76" 100}
	{item "ammo ap bullet77" 100}
	{item "ammo ap bullet85" 100}
	{item "ammo ap bullet88" 100}
	{item "ammo ap bullet89" 100}
	{item "ammo ap bullet90" 100}
	{item "ammo ap bullet93" 100}
	{item "ammo ap bullet95" 100}
	{item "ammo ap bullet100" 100}
	{item "ammo ap bullet105" 100}
	{item "ammo ap bullet120" 100}
	{item "ammo ap bullet122" 100}
	{item "ammo ap bullet128" 100}
	{item "ammo ap bullet150" 100}
	{item "ammo ap bullet152" 100}
)

(define "collection_shell_apcr"
	{item "ammo apcr bullet37" 100}
	{item "ammo apcr bullet40" 100}
	{item "ammo apcr bullet45" 100}
	{item "ammo apcr bullet47" 100}
	{item "ammo apcr bullet50" 100}
	{item "ammo apcr bullet57" 100}
	{item "ammo apcr bullet75" 100}
	{item "ammo apcr bullet76" 100}
	{item "ammo apcr bullet77" 100}
	{item "ammo apcr bullet85" 100}
	{item "ammo apcr bullet88" 100}
	{item "ammo apcr bullet89" 100}
	{item "ammo apcr bullet90" 100}
	{item "ammo apcr bullet93" 100}
	{item "ammo apcr bullet95" 100}
	{item "ammo apcr bullet100" 100}
	{item "ammo apcr bullet105" 100}
	{item "ammo apcr bullet120" 100}
	{item "ammo apcr bullet122" 100}
	{item "ammo apcr bullet128" 100}
)

(define "collection_shell_etc"
	;Normal
	{item "ammo bullet203" 100}
	{item "ammo bullet290" 100}
	{item "ammo bullet305" 100}
	{item "ammo bullet600" 100}
	;Air-Plane
	{item "ammo airplane bullet20" 100}
	;SM
	{item "ammo sm bullet105" 100}
	{item "ammo sm bullet122" 100}
	{item "ammo sm bullet150" 100}
	{item "ammo sm bullet152" 100}
	{item "ammo sm bullet155" 100}
	;Zenite
	{item "ammo zenite bullet20" 100}
	{item "ammo zenite bullet25" 100}
	{item "ammo zenite bullet37" 100}
	{item "ammo zenite bullet40" 100}
)

(define "collection_shell_fg"
	{item "ammo fg bullet28" 100}
	{item "ammo fg bullet37" 100}
	{item "ammo fg bullet40" 100}
	{item "ammo fg bullet45" 100}
	{item "ammo fg bullet47" 100}
	{item "ammo fg bullet50" 100}
	{item "ammo fg bullet57" 100}
	{item "ammo fg bullet75" 100}
	{item "ammo fg bullet76" 100}
	{item "ammo fg bullet77" 100}
	{item "ammo fg bullet85" 100}
	{item "ammo fg bullet88" 100}
	{item "ammo fg bullet89" 100}
	{item "ammo fg bullet90" 100}
	{item "ammo fg bullet93" 100}
	{item "ammo fg bullet95" 100}
	{item "ammo fg bullet100" 100}
	{item "ammo fg bullet105" 100}
	{item "ammo fg bullet120" 100}
	{item "ammo fg bullet122" 100}
	{item "ammo fg bullet128" 100}
	{item "ammo fg bullet150" 100}
	{item "ammo fg bullet152" 100}
	{item "ammo fg bullet155" 100}
)

(define "collection_smg"
	{item "m3a" 100 filled}
	{item "m50reising" 100 filled}
	{item "mp28" 100 filled}
	{item "mp28_50" 100 filled}
	{item "mp3008" 100 filled}
	{item "mp40" 100 filled}
	{item "mp41" 100 filled}
	{item "owen_gun" 100 filled}
	{item "pps43" 100 filled}
	;***ШПАГИНА SUBMACHINE GUN***
	{item "ppsh" 100 filled}
	{item "ppsh41" 100 filled}
	;
	{item "sten" 100 filled}
	{item "sten_v" 100 filled}
	{item "thompson" 100 filled}
	{item "thompson_30" 100 filled}
	{item "thompson_m1928" 100 filled}
	{item "type100smg" 100 filled}
	{item "type2smg" 100 filled}
	;
	;Silencer
	{item "sten_v_silencer" 100 filled}
	;
	;Assault|Automatic Rifle
	{item "sg44" 100 filled}
	{item "sg44b" 100 filled}
)

(define "collection_sniper"
	{item "em2" 100 filled}
	{item "g41" 100 filled}
	{item "m1903a4" 100 filled}
	{item "mosin_s" 100 filled}		;MOSIN–NAGANT RIFLE
	{item "type99rifle_s" 100 filled}
)

(define "collection_templete"
	;Anti-Tank Rifle (Противо-Танковое Ружьё，Protivo-Tankovoye Ruzhyo), ATR (ПТР, PTR)
	{item "boyes" 100 filled}
	{item "ptrd" 100 filled}
	{item "ptrs" 100 filled}
	{item "pzb39" 100 filled}
	{item "type_97_antitank" 100 filled}

	;Heavy Machine
	{item "browning" 100 filled}
	{item "browning_x2" 100 filled}
	{item "browning_x4" 100 filled}
	{item "dshk" 100 filled}		;ДЕГТЯРЁВА MACHINE GUN
	{item "uber_browning" 100 filled}

	;附属
	;Ammunition|Content
	{item "ammo hmgun" 100}
	{item "ammo ptr" 100}
)

(define "collection_testing"
	;Common
	;不存在
	;{item "dummy_checker" 1}
	;无图标，激发方式未知，拖到外面报错
	;{item "hand thrower" 1}

	;测试对应Mod
	

	;测试参数


	;测试现代载具
	;{item "m1a2_abrams" 1}
	;{item "m1a2_abrams_x" 1}
	;{item "m1a2_abrams_xx" 1}
	;{item "m1a2_abrams_tusk" 1}
	;{item "m1a2_abrams_tusk_x" 1}
	;{item "m1a2_abrams_tusk_xx" 1}
	;{item "m26e4" 1}

	;格式
	;不存在
	;{item "doublebazooka" 1 filled}		;识别为weapon doublebazooka
	;{item "ammo mortar" 1}		;识别为ammo fg mortar
	;{item "ammo mortar150" 1}		;识别为ammo fg mortar150
	;{item "ammo bullet20" 1}		;识别为ammo airplane bullet20

	;创意
	;不存在
	;{item "stuff" 1}		;识别为ammo stuff air_bomb
	;{item "hand" 1}		;识别为hand thrower
	;{item "thrower" 1}		;识别为hand thrower
	;{item "rifle" 1}		;识别为ammo rifle
	;{item "ptr" 1}		;识别为ammo ptr
	;{item "grenade" 1}		;识别为grenade skirmish_smoke
	;{item "mgun" 1}		;识别为ammo mgun
	;{item "pistol" 1}		;识别为ammo pistol
	;{item "airplane" 1}		;识别为ammo airplane bullet20

	;FSM
	;不存在
	;{item "fsm XXXX" 1}

	;Pattern
	;不存在
	;{item "pattern XXXX" 1}
)

(define "collection_weapon_consumable"
	;Bombing
	("base_attribute")

	;Explosive
	("collection_explosive")

	;Grenade
	("collection_grenade")

	;Reactive
	("collection_reactive_ammo")

	;Rocket Propelled Grenade|Bazooka
	("collection_bazooka_ammo")

	;Shell
	("collection_shell")

	;Small-Arm|Ammo
	("collection_ammo")
)

(define "collection_weapon_launch-able"
	;Anti-Tank Rifle (Противо-Танковое Ружьё，Protivo-Tankovoye Ruzhyo), ATR (ПТР, PTR)
	("collection_ptr_weapon")

	;Gun
	("collection_gun")

	;Heavy Machine
	("collection_hmgun_weapon")

	;Machine GUN
	("collection_mgun_weapon")

	;Melee
	("collection_melee")

	;Pistol
	("collection_pistol_weapon")

	;Reactive
	("collection_reactive_weapon")

	;Rifle
	("collection_rifle_weapon")

	;Rocket Propelled Grenade|Bazooka
	("collection_bazooka_weapon")

	;Sniper Rifle
	("collection_sniper")

	;Sub-Machine Gun
	("collection_smg")
)

(define "size"
	;{size 8 6}
	;
	;大容量，多大合适取决于屏幕分辨率，一般设置为能看到边框的最大值，需要自行调整
	;1920×1080，个人测试用分辨率
	;左箱宽≤8；箱高≤20
	;{size 42 24}		;极限显示格数。推荐仅作为测试用。遮挡右侧命令栏、下侧命令面板。不推荐日常使用
	{size 36 20}		;正常显示格数。推荐作为日常使用
	;1280×720，游戏所支持的最小分辨率
	;{size 23 16}		;极限显示格数，推荐仅作为测试用，遮挡右侧命令栏、下侧命令面板。不推荐日常使用
	;{size 20 12}		;比正常显示格数大1圈。推荐作为日常使用
	;{size 19 11}		;正常显示格数。日常使用略小
)

(define "size_middle"
	{size 8 6}
)

(define "size_panzer"
	;{size 6 10}
	;
	;大容量，多大合适取决于屏幕分辨率，一般设置为能看到边框的最大值，需要自行调整
	;1920×1080，个人测试用分辨率
	;左箱宽≤8；箱高≤20
	{size 8 20}		;正常显示格数。推荐作为日常使用
)

(define "size_small"
	{size 4 2}
)

(define "size_vehicle"
	;{size 6 10}
	;
	;大容量，多大合适取决于屏幕分辨率，一般设置为能看到边框的最大值，需要自行调整
	;1920×1080，个人测试用分辨率
	;左箱宽≤8；箱高≤20
	{size 10 20}		;正常显示格数。推荐作为日常使用
)

(define "supply_item"
	;stuff目录下的所有item项
	;总
	;内容太多，以常见的最大分辨率（1920×1080）的最大支持格数呈现
	;{item "launch-able_weapon_box" 1}		;所有可发射weapon的合集
	;{item "consumable_weapon_box" 1}		;所有ammunition、content的合集
	;{item "non-weapon_box" 1}		;所有非·Weapon的合集
	;
	;分
	{item "ap+apcr_box" 1}		;AP+APCR的ammo|shell部分，gun+shell_box在游戏支持的最小分辨率（1280×720）下的补充
	{item "bazooka+explosive+flame+grenade_box" 1}
	{item "bombing+reactive_box" 1}		;reactive的weapon部分无图标且激发方式未知，默认只显示ammo部分；bombing的太多项无图标，混放到etc_box中易混淆|出现意外，有2个dropper疑似是对应的weapon，但无图标且激发方式未知，故屏蔽了
	{item "etc_box" 1}		;不足以分箱的item集合
	{item "gun+shell_box" 1}		;weapon部分无图标且激发方式未知，默认只显示除AP、APCR外的ammo|shell部分
	{item "head_box" 1}
	{item "hmgun+ptr_box" 1}		;mgun_box游戏支持的最小分辨率（1280×720）下装不下，故分箱放置。与ptr_box合箱，一是节约空间，而是都可以有一定的反装甲能力
	{item "mgun_box" 1}
	{item "pistol+smg_box" 1}
	{item "rifle+sniper_box" 1}		;rifle_box+sniper_box
	;
	;自定义
	;{item "favourite_box" 1}		;个人爱好的武器集合，推荐自行设置
	;{item "testing_box" 1}		;不定期测试用，内容数量不定，以最大分辨率（1920×1080）对应格数呈现
)

(define "weight"
	;{weight 600}
	{weight 1000000}		;质量，物品可叠加的重量的上限。过小会导致沉的物品不能一起叠加多个
)

(define "weight_heavy"
	;{weight 5000}
	{weight 1000000}		;质量，物品可叠加的重量的上限。过小会导致沉的物品不能一起叠加多个
)

(define "weight_light"
	;{weight 100}
	{weight 10000}		;游戏中强制识别为1 0000kg，故保持一致
)