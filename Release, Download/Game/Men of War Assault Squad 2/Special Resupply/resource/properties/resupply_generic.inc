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
;(define "para_ammo"
;	{extender "supply_zone"
;		{resupply
;			{item "rifle" "ammo" 25 {max 100}}
;			{item "pistol" "ammo" 100 {max 400}}
;			{item "mgun" "ammo" 100	{max 600}}
;			{item "bandage"	1 {max 3}}
;			{item "ptr" "ammo" 5 {max 10}}
;			{item "bazooka" "ammo" 1 {max 3}}
;			{item "panzershreck" "ammo" 1 {max 3}}
;			{item "m18recoilless" "ammo" 1 {max 3}}
;			{item "piatrocket" "ammo" 1	{max 3}}
;			{item "type_4" "ammo" 1	{max 3}}
;			{item "rifle_grenade" "ammo" 2 {max 5}}
;			{item "rifle_grenade_at" "ammo" 2 {max 5}}
;			{item "shotgun" "ammo" 3 {max 20}}
;			{item "mortar" "fg" "ammo" 3 {max 30}{value 2}}
;			{item "hmgun" "ammo" 30 {max 300}{value 2}}
;		}
;		{radius 			6}		;resupply radius in meter
;		{resupplyPeriod 	3}		;resupply period in seconds
;		{regenerationPeriod 0}		;regeneration period in seconds, +1 supply every x seconds (0 = no regeneration)
;		{limit 				75}		;max number of resupplies (0 = unlimited)
;	}
;	{DecalView supply_zone
;		{Sprite "supply_zone.ebm"
;			{Visibility 0.3}
;		}
;		{Layer grounddynamic}
;		{Visible 0}
;	}
;)
;
;(define "truck_ammo"
;	{extender "supply_zone"
;		{resupply
;			{item "rifle" "ammo" 25 {max 150}}
;			{item "pistol" "ammo" 100 {max 600}}
;			{item "mgun" "ammo" 100	{max 800}}
;			{item "bandage"	1 {max 3}}
;			{item "ptr" "ammo" 5 {max 25}}
;			{item "bazooka" "ammo" 1 {max 5}}
;			{item "panzershreck" "ammo" 1 {max 5}}
;			{item "m18recoilless" "ammo" 1 {max 5}}
;			{item "piatrocket" "ammo" 1 {max 5}}
;			{item "type_4" "ammo" 1 {max 5}}
;			{item "rifle_grenade" "ammo" 2 {max 10}}
;			{item "rifle_grenade_at" "ammo" 2 {max 10}}
;			{item "shotgun" "ammo" 5 {max 30}}
;			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
;			{item "hmgun" "ammo" 50 {max 300}{value 2}}
;		}
;		{radius 			10}
;		{resupplyPeriod 	3}
;		{regenerationPeriod 30}
;		{limit 				150}
;	}
;	{DecalView supply_zone
;		{Sprite "supply_zone.ebm"
;			{Visibility 0.3}
;		}
;		{Layer grounddynamic}
;		{Visible 0}
;	}
;)
;
;(define "truck_ammo_art"
;	{extender "supply_zone"
;		{resupply
;			{item "rifle" "ammo" 25 {max 150}}
;			{item "pistol" "ammo" 100 {max 600}}
;			{item "mgun" "ammo" 100	{max 800}}
;			{item "bandage"	1 {max 3}}
;			{item "ptr" "ammo" 5 {max 25}}
;			{item "bazooka" "ammo" 1 {max 5}}
;			{item "panzershreck" "ammo" 1 {max 5}}
;			{item "m18recoilless" "ammo" 1 {max 5}}
;			{item "piatrocket" "ammo" 1 {max 5}}
;			{item "type_4" "ammo" 1 {max 5}}
;			{item "rifle_grenade" "ammo" 2 {max 10}}
;			{item "rifle_grenade_at" "ammo" 2 {max 10}}
;			{item "shotgun" "ammo" 5 {max 30}}
;			{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}
;			{item "hmgun" "ammo" 50 {max 300}{value 2}}
;			{item "mortar150" "fg" "ammo" 2 {max 15}{value 2}}
;			;
;			{item "bullet20" "zenite" "ammo" 10 {max 100}{value 2}}
;			{item "bullet25" "zenite" "ammo" 10 {max 100}{value 2}}
;			{item "bullet37" "zenite" "ammo" 10 {max 100}{value 2}}
;			{item "bullet40" "zenite" "ammo" 10 {max 100}{value 2}}
;			{item "bullet28" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet28" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet37" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet37" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet40" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet40" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet45" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet45" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet47" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet47" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet50" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet50" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet57" "ap" "ammo" 3 {max 30}{value 2}}
;			{item "bullet57" "fg" "ammo" 3 {max 25}{value 2}}
;			{item "bullet75" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet75" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet76" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet76" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet77" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet77" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet85" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet85" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet88" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet88" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet89" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet89" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet90" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet90" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet93" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet93" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet95" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet95" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet100" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet100" "fg" "ammo" 2 {max 15}{value 2}}
;			{item "bullet105" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet120" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet122" "ap" "ammo" 2 {max 20}{value 2}}
;			{item "bullet128" "ap" "ammo" 2 {max 15}{value 2}}
;			;
;			{item "bullet105" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet120" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet122" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet128" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet150" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet152" "fg" "ammo" 1 {max 10}{value 5}}
;			{item "bullet155" "fg" "ammo" 1 {max 10}{value 5}}
;			;
;			{item "bullet203" "ammo" 1 {max 5}{value 5}}
;			{item "bullet290" "ammo" 1 {max 5}{value 5}}
;			;
;			{item "calliope" "ammo" 5 {max 60}{value 5}}
;			{item "lm_ammo" "ammo" 5 {max 32}{value 5}}
;			{item "bm8" "ammo" 5 {max 24}{value 5}}
;			{item "katusha" "ammo" 3 {max 16}{value 5}}
;			{item "panzerwerfer42" "ammo" 2 {max 10}{value 5}}
;			{item "nebel41" "ammo" 2 {max 12}{value 5}}
;			{item "nebel42" "ammo" 2 {max 12}{value 5}}
;			{item "swg41" "ammo" 2 {max 12}{value 5}}
;			{item "20cm_rocket" "ammo" 2 {max 10}{value 5}}
;			{item "tulip" "ammo" 2 {max 10}{value 5}}
;			;
;			{item "30cm_rocket" "ammo" 1 {max 5}{value 10}}
;			{item "sturmtiger" "ammo" 1 {max 5}{value 10}}
;		}
;		{radius 			10}
;		{resupplyPeriod 	3}
;		{regenerationPeriod 30}
;		{limit 				250}
;	}
;	{DecalView supply_zone
;		{Sprite "supply_zone.ebm"
;			{Visibility 0.3}
;		}
;		{Layer grounddynamic}
;		{Visible 0}
;	}
;)

;修改后的内容
;定义新的变量，减少代码重复
(define "parachuting_item"
	;Bombing
	;{item "air_bomb" "ammo" 1 {max 1}}		;？数量未确定
	;{item "air_bomb_il2" "ammo" 1 {max 1}}		;？数量未确定
	;{item "artillery_explosion" "ammo" 1 {max 1}}		;？数量未确定
	;{item "outburst_nc" "ammo" 1 {max 1}}		;？数量未确定
	;{item "outburst_small_nc" "ammo" 1 {max 1}}		;？数量未确定
	;{item "air_bomb" "small" "ammo" 1 {max 1}}		;？数量未确定
	;{item "artillery_explosion" "small" "ammo" 1 {max 1}}		;？数量未确定
	;{item "air_bomb" "stuff" "ammo" 1 {max 1}}		;？数量未确定

	;Content
	;{item "drug" 100 {max 1000}}		;测试自动加？药功能
	;{item "fire" 100 {max 1000}}		;测试自动加？火功能
	;{item "fuel" 100 {max 1000}}		;测试自动加油功能
	;{item "liquid" 100 {max 1000}}		;测试自动加油功能，游戏内标注为fuel
	;{item "water" 100 {max 1000}}		;测试自动加水功能

	;Explosive
	{item "dynamite" 1 {max 5}}		;以工程车为参照
	;{item "dynamite_clockwork" 1 {max 1}}
	{item "dynamite_ladung" 1 {max 1}}
	{item "antipersonnel" "mine" 1 {max 60}}		;以工程车为参照
	{item "antitank" "mine" 1 {max 20}}		;以工程车为参照
	;{item "mine_antitank_jap" 1 {max 1}}

	;Grenade
	;？Anti-Personal
	{item "f1" "grenade" 2 {max 2}}		;F1手雷
	{item "m24" "grenade" 2 {max 2}}		;M24手榴弹
	{item "m39" "grenade" 2 {max 2}}		;M39手雷
	{item "m61" "grenade" 2 {max 2}}		;M61手雷
	{item "mk1" "grenade" 2 {max 2}}		;MK1手雷
	{item "type97" "grenade" 2 {max 2}}		;九七年式手雷
	{item "type99" "grenade" 2 {max 2}}		;九九年式手雷
	;Explosive
	{item "satchel" "grenade" 1 {max 1}}		;文件式炸药包
	;
	;Anti-Tank
	{item "m24x5" "grenade" 1 {max 1}}		;组合式M24反坦克手榴弹
	{item "n73at" "grenade" 1 {max 1}}		;N73反坦克手雷
	{item "pwm1" "grenade" 1 {max 1}}		;PWM-1反坦克手榴弹
	{item "rg42x3" "grenade" 1 {max 1}}		;组合式RPG-42反坦克手榴弹
	{item "rpg40" "grenade" 1 {max 1}}		;RPG-40反坦克手榴弹
	{item "rpg43" "grenade" 1 {max 1}}		;RPG-43反坦克手榴弹
	{item "type3at" "grenade" 1 {max 1}}		;三年式反坦克手榴弹
	{item "type3at_a" "grenade" 1 {max 1}}		;改进版三年式反坦克手榴弹
	{item "type99at" "grenade" 1 {max 1}}		;九九年式反坦克手持炸弹
	;Flame
	{item "molotov_coctail" "grenade" 1 {max 1}}		;Molotov鸡尾酒燃烧瓶
	;
	;Smoke
	{item "smoke" "grenade" 1 {max 1}}		;烟雾弹
	{item "smoke_paradrop_ammo" "grenade" 1 {max 1}}		;补给烟雾弹
	{item "smoke_paradrop_ammo_heavy" "grenade" 1 {max 5}}		;重型补给烟雾弹
	{item "skirmish_smoke" "grenade" 1 {max 5}}		;遭遇战用烟雾弹

	;Medic
	{item "bandage" 1 {max 5}}		;绷带
	;{item "morphine" 1 {max 1}}		;Morphine

	;Reactive
	{item "20cm_rocket" "ammo" 2 {max 10}{value 5}}
	{item "30cm_rocket" "ammo" 1 {max 5}{value 10}}
	{item "arl" "ammo" 5 {max 24}{value 5}}		;？数量未确定
	{item "bm8" "ammo" 5 {max 24}{value 5}}
	{item "calliope" "ammo" 5 {max 60}{value 5}}
	{item "goliath" "ammo" 5 {max 60}{value 5}}		;？数量未确定
	{item "katusha" "ammo" 3 {max 16}{value 5}}
	{item "lm_ammo" "ammo" 5 {max 32}{value 5}}
	{item "mortar" "fg" "ammo" 5 {max 30}{value 2}}		;迫击炮弹药
	{item "mortar150" "fg" "ammo" 2 {max 15}{value 2}}
	{item "nebel41" "ammo" 2 {max 12}{value 5}}
	{item "nebel42" "ammo" 2 {max 12}{value 5}}
	{item "panzerwerfer42" "ammo" 2 {max 10}{value 5}}
	{item "sturmtiger" "ammo" 1 {max 5}{value 10}}
	{item "swg41" "ammo" 2 {max 12}{value 5}}
	{item "torpedo" "ammo" 2 {max 12}{value 5}}		;？数量未确定
	{item "tulip" "ammo" 2 {max 10}{value 5}}

	;Rocket Propelled Grenade
	{item "bazooka" "ammo" 1 {max 4}}
	{item "m18recoilless" "ammo" 1 {max 4}}
	{item "panzershreck" "ammo" 1 {max 4}}
	{item "piatrocket" "ammo" 1 {max 4}}
	{item "type_4" "ammo" 1 {max 4}}
	{item "uber_bazooka" "ammo" 1 {max 4}}		;超级版Bazooka弹药

	;Shell
	;Normal
	{item "bullet203" "ammo" 1 {max 5}{value 5}}
	{item "bullet290" "ammo" 1 {max 5}{value 5}}
	{item "bullet305" "ammo" 1 {max 5}{value 5}}		;？数量未确定
	{item "bullet600" "ammo" 1 {max 5}{value 5}}		;？数量未确定
	;
	;Air-Plane
	{item "bullet20" "airplane" "ammo" 1 {max 5}{value 5}}		;？数量未确定
	;
	;AP
	{item "bullet28" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet37" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet40" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet45" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet47" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet50" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet57" "ap" "ammo" 3 {max 30}{value 2}}
	{item "bullet75" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet76" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet77" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet85" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet88" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet89" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet90" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet93" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet95" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet100" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet105" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet120" "ap" "ammo" 2 {max 50}{value 2}}
	{item "bullet122" "ap" "ammo" 2 {max 20}{value 2}}
	{item "bullet128" "ap" "ammo" 2 {max 15}{value 2}}
	{item "bullet150" "ap" "ammo" 2 {max 10}{value 2}}		;？数量未确定
	{item "bullet152" "ap" "ammo" 2 {max 5}{value 2}}		;？数量未确定
	;
	;APCR
	{item "bullet37" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet40" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet45" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet47" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet50" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet57" "apcr" "ammo" 3 {max 30}{value 2}}		;？数量未确定
	{item "bullet75" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet76" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet77" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet85" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet88" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet89" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet90" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet93" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet95" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet100" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet105" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet120" "apcr" "ammo" 2 {max 50}{value 2}}		;？数量未确定
	{item "bullet122" "apcr" "ammo" 2 {max 20}{value 2}}		;？数量未确定
	{item "bullet128" "apcr" "ammo" 2 {max 15}{value 2}}		;？数量未确定
	;
	;FG
	{item "bullet28" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet37" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet40" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet45" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet47" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet50" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet57" "fg" "ammo" 3 {max 25}{value 2}}
	{item "bullet75" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet76" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet77" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet85" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet88" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet89" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet90" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet93" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet95" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet100" "fg" "ammo" 2 {max 15}{value 2}}
	{item "bullet105" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet120" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet122" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet128" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet150" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet152" "fg" "ammo" 1 {max 10}{value 5}}
	{item "bullet155" "fg" "ammo" 1 {max 10}{value 5}}
	;
	;SM
	{item "bullet105" "sm" "ammo" 10 {max 100}{value 2}}		;？数量未确定
	{item "bullet122" "sm" "ammo" 10 {max 100}{value 2}}		;？数量未确定
	{item "bullet150" "sm" "ammo" 10 {max 100}{value 2}}		;？数量未确定
	{item "bullet152" "sm" "ammo" 10 {max 100}{value 2}}		;？数量未确定
	{item "bullet155" "sm" "ammo" 10 {max 100}{value 2}}		;？数量未确定
	;
	;Zenite
	{item "bullet20" "zenite" "ammo" 10 {max 100}{value 2}}
	{item "bullet25" "zenite" "ammo" 10 {max 100}{value 2}}
	{item "bullet37" "zenite" "ammo" 10 {max 100}{value 2}}
	{item "bullet40" "zenite" "ammo" 10 {max 100}{value 2}}

	;Small-Arm
	{item "flaer" "ammo" 1 {max 10}}		;火炮引导信号枪弹药
	{item "flaermow" "ammo" 1 {max 10}}			;照明枪弹药
	{item "hmgun" "ammo" 100 {max 600}}		;重机枪弹药
	{item "mgun" "ammo" 100 {max 600}}		;机枪弹药
	{item "pistol" "ammo" 100 {max 300}}		;手枪弹药
	{item "ptr" "ammo" 5 {max 20}}		;反坦克步枪弹药
	{item "rifle" "ammo" 25 {max 150}}		;步枪弹药
	{item "rifle_grenade" "ammo" 3 {max 15}}		;枪榴弹弹药
	{item "rifle_grenade_at" "ammo" 3 {max 15}}		;反坦克枪榴弹弹药
	{item "shotgun" "ammo" 5 {max 60}}		;霰弹枪弹药

	;Special
	;{item "b33r" 1 {max 1}}		;Beer
	{item "barbwire_kit" 1 {max 2}}		;铁丝网，以工程车为参照
	;{item "binocular" 1 {max 1}}		;望远镜
	;{item "chicken" 1 {max 1}}		;鸡
	;{item "cord_wood" 1 {max 1}}		;木材
	{item "hedgehog_kit" 1 {max 2}}		;拒马，以工程车为参照
	;{item "matchbox" 1 {max 10}}		;火柴
	;{item "mine_detector" 1 {max 1}}		;扫雷器
	;{item "plant" 1 {max 1}}		;伪装物
	{item "repair_kit" 1 {max 3}}		;修理箱，以多数车为参照
	;{item "sandbag_kit" 1 {max 40}{value 10}}		;沙袋，以工程车为参照
	{item "sandbag_kit2" 1 {max 1}}		;大包装沙袋
	;{item "spade_inv" 1 {max 1}}		;铁锹
	;{item "steak" 1 {max 1}}		;牛排
	;{item "wirecutters" 1 {max 1}}		;剪钳

	;测试
	;Ammunition
	;{item "smg" "ammo" 100 {max 600}}		;冲锋枪弹药分组，不存在
	;
	;Body
	;{item "body_armor" 1 {max 1}}		;护甲，由于游戏内核修改，3.252版本区分了国籍和兵种，转用补给箱发放
	;
	;Capacity
	;{item "barrel" 1 {max 2}}		;以工程车为参照
	;{item "box" 1 filled {max 1}}
	;{item "can" 1 filled {max 1}}
	;{item "small_box" 1 filled {max 1}}
	;
	;CtA
	;{item "5x45" "ammo" 100 {max 900}}		;测试5.45x45mm弹药补给分组存在性，来自Call to Arms
	;{item "7x51" "ammo" 100 {max 800}}		;测试7.62x51mm弹药补给分组存在性，来自Call to Arms
	;{item "9x19" "ammo" 100 {max 900}}		;测试9x19mm弹药补给分组存在性，来自Call to Arms
	;{item "12x99" "ammo" 200 {max 3000}}		;测试12.7x99mm弹药补给分组存在性，来自Call to Arms
	;{item "40x46" "ammo" 10 {max 60}}		;测试M203枪榴弹弹药补给分组存在性，来自Call to Arms
	;{item "at4cs" "ammo" 1 {max 6}}		;测试AT-4CS反坦克导弹弹药补给分组存在性，来自Call to Arms
	;{item "bullet120" "ap" "ammo" 2 {max 50}{value 2}}		;征用的120mm M256坦克炮穿甲弹弹药补给分组存在性，来自Call to Arms
	;{item "bullet120" "fg" "ammo" 1 {max 50}{value 5}}		;征用的120mm M256坦克炮高爆弹弹药补给分组存在性，来自Call to Arms
	;{item "bullet120" "heat" "ammo" 10 {max 50}{value 5}}		;测试120mm M256坦克炮破甲弹弹药补给分组存在性，来自Call to Arms
	;{item "grenade" "decoy"  1 {max 1}{value 5}}		;测试车载烟幕弹弹药补给分组存在性，来自Call to Arms
	;{item "m72" "ammo" 1 {max 6}}		;测试M72火箭推进榴弹弹药补给分组存在性，来自Call to Arms
	;{item "m79" "ammo" 10 {max 100}}		;测试M79枪榴弹弹药补给分组存在性，来自Call to Arms
	;{item "rpg29" "ammo" 1 {max 6}}		;测试RPG-29火箭推进榴弹弹药补给分组存在性，来自Call to Arms
	;
	;Head Gear
	;{item "helmet_airborne_usa" 1 {max 1}}		;美军空降兵头盔补给由于游戏内核修改，3.252版本区分了国籍和兵种，转用补给箱发放
	;
	;Rocket Propelled Grenade
	{item "panzerfaust" "ammo" 1 {max 3}}		;铁拳100弹药补给，需要Mod支持铁拳可换弹药，否则没用
	{item "panzerfaust60" "ammo" 1 {max 3}}		;铁拳60弹药补给，需要Mod支持铁拳可换弹药，否则没用
	;
	;Small-Arm
	;{item "thompson" 1 {max 1}}		;Thompson M1A1冲锋枪补给
)

(define "para_ammo"
	{extender "supply_zone"
		{resupply
			("parachuting_item")
		}
		{radius 50}
		{resupplyPeriod 5}
		{regenerationPeriod 0}
		{limit 0}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo"
	{extender "supply_zone"
		{resupply
			("parachuting_item")
		}
		{radius 50}
		{resupplyPeriod 5}
		{regenerationPeriod 0}
		{limit 0}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)

(define "truck_ammo_art"
	{extender "supply_zone"
		{resupply
			("parachuting_item")
		}
		{radius 50}
		{resupplyPeriod 5}
		{regenerationPeriod 0}
		{limit 0}
	}
	{DecalView supply_zone
		{Sprite "supply_zone.ebm"
			{Visibility 0.3}
		}
		{Layer grounddynamic}
		{Visible 0}
	}
)
