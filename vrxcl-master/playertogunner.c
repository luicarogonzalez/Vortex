#include "g_local.h"
#define FRAME_stand01         	0
#define FRAME_stand02         	1
#define FRAME_stand03         	2
#define FRAME_stand04         	3
#define FRAME_stand05         	4
#define FRAME_stand06         	5
#define FRAME_stand07         	6
#define FRAME_stand08         	7
#define FRAME_stand09         	8
#define FRAME_stand10         	9
#define FRAME_stand11         	10
#define FRAME_stand12         	11
#define FRAME_stand13         	12
#define FRAME_stand14         	13
#define FRAME_stand15         	14
#define FRAME_stand16         	15
#define FRAME_stand17         	16
#define FRAME_stand18         	17
#define FRAME_stand19         	18
#define FRAME_stand20         	19
#define FRAME_stand21         	20
#define FRAME_stand22         	21
#define FRAME_stand23         	22
#define FRAME_stand24         	23
#define FRAME_stand25         	24
#define FRAME_stand26         	25
#define FRAME_stand27         	26
#define FRAME_stand28         	27
#define FRAME_stand29         	28
#define FRAME_stand30         	29
#define FRAME_stand31         	30
#define FRAME_stand32         	31
#define FRAME_stand33         	32
#define FRAME_stand34         	33
#define FRAME_stand35         	34
#define FRAME_stand36         	35
#define FRAME_stand37         	36
#define FRAME_stand38         	37
#define FRAME_stand39         	38
#define FRAME_stand40         	39
#define FRAME_stand41         	40
#define FRAME_stand42         	41
#define FRAME_stand43         	42
#define FRAME_stand44         	43
#define FRAME_stand45         	44
#define FRAME_stand46         	45
#define FRAME_stand47         	46
#define FRAME_stand48         	47
#define FRAME_stand49         	48
#define FRAME_stand50         	49
#define FRAME_stand51         	50
#define FRAME_stand52         	51
#define FRAME_stand53         	52
#define FRAME_stand54         	53
#define FRAME_stand55         	54
#define FRAME_stand56         	55
#define FRAME_stand57         	56
#define FRAME_stand58         	57
#define FRAME_stand59         	58
#define FRAME_stand60         	59
#define FRAME_stand61         	60
#define FRAME_stand62         	61
#define FRAME_stand63         	62
#define FRAME_stand64         	63
#define FRAME_stand65         	64
#define FRAME_stand66         	65
#define FRAME_stand67         	66
#define FRAME_stand68         	67
#define FRAME_stand69         	68
#define FRAME_stand70         	69
#define FRAME_walk01          	70
#define FRAME_walk02          	71
#define FRAME_walk03          	72
#define FRAME_walk04          	73
#define FRAME_walk05          	74
#define FRAME_walk06          	75
#define FRAME_walk07          	76
#define FRAME_walk08          	77
#define FRAME_walk09          	78
#define FRAME_walk10          	79
#define FRAME_walk11          	80
#define FRAME_walk12          	81
#define FRAME_walk13          	82
#define FRAME_walk14          	83
#define FRAME_walk15          	84
#define FRAME_walk16          	85
#define FRAME_walk17          	86
#define FRAME_walk18          	87
#define FRAME_walk19          	88
#define FRAME_walk20          	89
#define FRAME_walk21          	90
#define FRAME_walk22          	91
#define FRAME_walk23          	92
#define FRAME_walk24          	93
#define FRAME_run01           	94
#define FRAME_run02           	95
#define FRAME_run03           	96
#define FRAME_run04           	97
#define FRAME_run05           	98
#define FRAME_run06           	99
#define FRAME_run07           	100
#define FRAME_run08           	101
#define FRAME_runs01          	102
#define FRAME_runs02          	103
#define FRAME_runs03          	104
#define FRAME_runs04          	105
#define FRAME_runs05          	106
#define FRAME_runs06          	107
#define FRAME_attak101        	108
#define FRAME_attak102        	109
#define FRAME_attak103        	110
#define FRAME_attak104        	111
#define FRAME_attak105        	112
#define FRAME_attak106        	113
#define FRAME_attak107        	114
#define FRAME_attak108        	115
#define FRAME_attak109        	116
#define FRAME_attak110        	117
#define FRAME_attak111        	118
#define FRAME_attak112        	119
#define FRAME_attak113        	120
#define FRAME_attak114        	121
#define FRAME_attak115        	122
#define FRAME_attak116        	123
#define FRAME_attak117        	124
#define FRAME_attak118        	125
#define FRAME_attak119        	126
#define FRAME_attak120        	127
#define FRAME_attak121        	128
#define FRAME_attak201        	129
#define FRAME_attak202        	130
#define FRAME_attak203        	131
#define FRAME_attak204        	132
#define FRAME_attak205        	133
#define FRAME_attak206        	134
#define FRAME_attak207        	135
#define FRAME_attak208        	136
#define FRAME_attak209        	137
#define FRAME_attak210        	138
#define FRAME_attak211        	139
#define FRAME_attak212        	140
#define FRAME_attak213        	141
#define FRAME_attak214        	142
#define FRAME_attak215        	143
#define FRAME_attak216        	144
#define FRAME_attak217        	145
#define FRAME_attak218        	146
#define FRAME_attak219        	147
#define FRAME_attak220        	148
#define FRAME_attak221        	149
#define FRAME_attak222        	150
#define FRAME_attak223        	151
#define FRAME_attak224        	152
#define FRAME_attak225        	153
#define FRAME_attak226        	154
#define FRAME_attak227        	155
#define FRAME_attak228        	156
#define FRAME_attak229        	157
#define FRAME_attak230        	158
#define FRAME_pain101         	159
#define FRAME_pain102         	160
#define FRAME_pain103         	161
#define FRAME_pain104         	162
#define FRAME_pain105         	163
#define FRAME_pain106         	164
#define FRAME_pain107         	165
#define FRAME_pain108         	166
#define FRAME_pain109         	167
#define FRAME_pain110         	168
#define FRAME_pain111         	169
#define FRAME_pain112         	170
#define FRAME_pain113         	171
#define FRAME_pain114         	172
#define FRAME_pain115         	173
#define FRAME_pain116         	174
#define FRAME_pain117         	175
#define FRAME_pain118         	176
#define FRAME_pain201         	177
#define FRAME_pain202         	178
#define FRAME_pain203         	179
#define FRAME_pain204         	180
#define FRAME_pain205         	181
#define FRAME_pain206         	182
#define FRAME_pain207         	183
#define FRAME_pain208         	184
#define FRAME_pain301         	185
#define FRAME_pain302         	186
#define FRAME_pain303         	187
#define FRAME_pain304         	188
#define FRAME_pain305         	189
#define FRAME_death01         	190
#define FRAME_death02         	191
#define FRAME_death03         	192
#define FRAME_death04         	193
#define FRAME_death05         	194
#define FRAME_death06         	195
#define FRAME_death07         	196
#define FRAME_death08         	197
#define FRAME_death09         	198
#define FRAME_death10         	199
#define FRAME_death11         	200
#define FRAME_duck01          	201
#define FRAME_duck02          	202
#define FRAME_duck03          	203
#define FRAME_duck04          	204
#define FRAME_duck05          	205
#define FRAME_duck06          	206
#define FRAME_duck07          	207
#define FRAME_duck08          	208
qboolean curse_add(edict_t *target, edict_t *caster, int type, int curse_level, float duration);
void p_gunner_die(edict_t* self, edict_t* inflictor, edict_t* attacker, int damage, vec3_t point)
{
	// kill the player
	if (self->activator && self->activator->inuse)
	{
		attacker->lastkill = 0; // prevent 2fer
		PM_RestorePlayer(self->activator);
		player_die(self->activator, inflictor, attacker, 0, vec3_origin);
		self->activator->health = 0;
	}

	// player's chasing this monster should now chase the player instead
	PM_UpdateChasePlayers(self);

	// remove the tank entity
	M_Remove(self, false, false);
}

void p_GunnerGrenade(edict_t* self)
{
	vec3_t	offset;
	int		damage, speed, flash_number;
	vec3_t	forward, start , right;
	//if (self->myskills.abilities[GUNNER].current_level)
	if (level.time >= self->monsterinfo.attack_finished	&& level.framenum >= self->monsterinfo.stuck_frames) // used to avoid rounding errors
	{
		if (self->myskills.abilities[GUNNER].ammo < 1)
			return;

		self->myskills.abilities[GUNNER].ammo -= 1;



		damage = 75 + 8 * self->myskills.abilities[GUNNER].current_level;
		speed = 900 + 30 * self->myskills.abilities[GUNNER].current_level;

		//if (speed > 900)
		//	speed = 900;

		if (self->s.frame == FRAME_attak105)
			flash_number = MZ2_GUNNER_GRENADE_1;
		else
			flash_number = MZ2_GUNNER_GRENADE_4;

		VectorSet(offset, 8, 8, self->viewheight - 8);
		AngleVectors(self->client->v_angle, forward, right, NULL);
		P_ProjectSource(self->client, self->s.origin, offset, forward, right, start);

		VectorScale(forward, -2, self->client->kick_origin);


		//MonsterAim(self, 0.9, speed, false, flash_number, forward, start);
		monster_fire_grenade(self, start, forward, damage, speed, flash_number);
	}
	

}



void p_GunnerFire(edict_t* self)
{
	int	i;
	vec3_t		start;
	vec3_t		forward, right;
	vec3_t		angles;
	int			kick = 2;
	vec3_t		offset;
	float		damage = 7 + self->myskills.abilities[GUNNER].current_level;
	int			vspread = DEFAULT_BULLET_VSPREAD;
	int			hspread = DEFAULT_BULLET_HSPREAD;
	int			shots = 2;
	int flash_number = 0;

	if (self->monsterinfo.lefty < 1)
		return;
	self->monsterinfo.lefty -= 1;
	

	// bullet spread is reduced while in burst mode
	if (self->client->weapon_mode)
	{
		vspread *= 0.2;
		hspread *= 0.2;
	}


	if (!(self->client->buttons & BUTTON_ATTACK))
	{
		self->client->machinegun_shots = 0;
		self->client->ps.gunframe++;
		return;
	}


	if (self->client->ps.gunframe == 5)
		self->client->ps.gunframe = 4;
	else
		self->client->ps.gunframe = 5;

	for (i = 1; i < 3; i++)
	{
		self->client->kick_origin[i] = crandom() * 0.35;
		self->client->kick_angles[i] = crandom() * 0.7;
	}
	self->client->kick_origin[0] = crandom() * 0.35;
	self->client->kick_angles[0] = self->client->machinegun_shots * -1.5;

	// get start / end positions
	VectorAdd(self->client->v_angle, self->client->kick_angles, angles);
	AngleVectors(angles, forward, right, NULL);
	VectorSet(offset, 0, 8, self->viewheight - 8);
	P_ProjectSource(self->client, self->s.origin, offset, forward, right, start);

	for (i = 0; i < shots; i++)
	{
		fire_bullet(self, start, forward, damage, kick, hspread, vspread, MOD_MACHINEGUN);
	}

}
void p_gunner_think_attack(edict_t* ent);

void gunner_RegenAmmo(edict_t* monster, int regen_frames, int delay)
{
	//ent->myskills.abilities[GUNNER].max_ammo = 15 + 2 * ent->myskills.abilities[GUNNER].current_level;
	//ent->myskills.abilities[GUNNER].ammo = 2 * ent->myskills.abilities[GUNNER].current_level;
	//ent->monsterinfo.lefty = 35 + 10 * ent->myskills.abilities[GUNNER].current_level; // starting bullets
	//ent->monsterinfo.search_frames = 35 + 10 * ent->myskills.abilities[GUNNER].current_level + 25 * ent->myskills.abilities[GUNNER].current_level; // max bullets


	int ammo, mode;
	qboolean regen_bullets = true, regen_grenades = true;

	// don't regenerate ammo if player is firing
	if ((monster->client->buttons & BUTTON_ATTACK))
	{
		mode = monster->client->weapon_mode;
		if (mode == 0)
			regen_bullets = false;
		else if (mode == 2)		
			regen_grenades = false;
	}

	if (delay > 0)
	{
		if (level.framenum < monster->monsterinfo.upkeep_delay)
			return;

		monster->monsterinfo.upkeep_delay = level.framenum + delay;
	}
	else
		delay = 1;

	if (regen_grenades)
	{
		ammo = floattoint((float)monster->myskills.abilities[GUNNER].ammo / ((float)regen_frames / delay));

		if (ammo < 1)
			ammo = 1;
		if (monster->myskills.abilities[GUNNER].ammo < monster->myskills.abilities[GUNNER].max_ammo)
		{
			monster->myskills.abilities[GUNNER].ammo += ammo;
			if (monster->myskills.abilities[GUNNER].ammo > monster->myskills.abilities[GUNNER].max_ammo)
				monster->myskills.abilities[GUNNER].ammo = monster->myskills.abilities[GUNNER].max_ammo;
		}
	}
	if (regen_bullets)
	{
		ammo = floattoint((float)monster->monsterinfo.search_frames / ((float)regen_frames / delay));

		if (ammo < 1)
			ammo = 1;

		if (monster->monsterinfo.lefty < monster->monsterinfo.search_frames)
		{
			monster->monsterinfo.lefty += ammo;
			if (monster->monsterinfo.lefty > monster->monsterinfo.search_frames)
				monster->monsterinfo.lefty = monster->monsterinfo.search_frames;
		}

		//gi.dprintf("max: %d current: %d ammo: %d\n", monster->monsterinfo.search_frames, monster->monsterinfo.lefty, ammo);
	}

}
void RunGunnerFrames(edict_t* ent, usercmd_t* ucmd)
{
	int	frame, regenFrames = P_TANK_REGEN_FRAMES, regenAmmoFrames = P_TANK_AMMOREGEN_FRAMES;
	int delayFrames = P_TANK_REGEN_DELAY, delayAmmoFrames = P_TANK_AMMOREGEN_DELAY;

	if ((ent->mtype != MORPH_GUNNER) || (ent->deadflag == DEAD_DEAD))
		return;

	ent->s.modelindex2 = 0; // no weapon model
	ent->s.skinnum = 0;

	if (level.framenum >= ent->count)
	{
		int regen_frames = BERSERK_REGEN_FRAMES;

		// morph mastery reduces regen time
		if (ent->myskills.abilities[MORPH_MASTERY].current_level > 0) {
			regen_frames *= 0.5;
		}

		M_Regenerate(ent, regen_frames, BERSERK_REGEN_DELAY, 1.0, true, false, false, &ent->monsterinfo.regen_delay1);
		gunner_RegenAmmo(ent, regenAmmoFrames, delayAmmoFrames);

		// play running animation if we are moving forward or strafing
		 if ((ucmd->forwardmove > 0) || (!ucmd->forwardmove && ucmd->sidemove))
		{
		/*	if ((ent->client->buttons & BUTTON_ATTACK) && (level.time > ent->monsterinfo.attack_finished))
				p_GunnerGrenade(ent);
			else*/
				G_RunFrames(ent, FRAME_run01, FRAME_run08, false);
		}
		// play animation in reverse if we are going backwards
		else if (ucmd->forwardmove < 0)
		{
		/*	if ((ent->client->buttons & BUTTON_ATTACK) && (level.time > ent->monsterinfo.attack_finished))
				p_GunnerGrenade(ent);
			else*/
				G_RunFrames(ent, FRAME_run01, FRAME_run08, true);
		}
		// standing attack
		//else if ((ent->client->buttons & BUTTON_ATTACK) && (level.time > ent->monsterinfo.attack_finished))
		//	p_GunnerGrenade(ent);
		// play jump animation if we are off ground and not submerged in water
	/*	else if (!ent->groundentity && (ent->waterlevel < 2))
			p_berserk_jump(ent);*/
		else
			G_RunFrames(ent, FRAME_stand01, FRAME_stand70, false); // run idle frames
		 if ((ent->client->buttons & BUTTON_ATTACK) && (level.time > ent->monsterinfo.attack_finished))
		 {
			 ent->client->idle_frames = 0;

			 if (ent->client->weapon_mode == 0)
			 {
				 G_RunFrames(ent, FRAME_attak101, FRAME_attak121, false);
				 	p_GunnerGrenade(ent);
					ent->count = level.framenum + 3;
					return;
			 }else if (ent->client->weapon_mode == 2)
			 {
				 p_GunnerFire(ent);
				 G_RunFrames(ent, FRAME_attak216, FRAME_attak223, false);	
				 ent->count = level.framenum +1;
				 return;
				 //	p_GunnerGrenade(ent);
			 }
		 }
	//	ent->count = level.framenum + 3; //haste to attack
	}
}

void p_gunner_think(edict_t* self)
{
	int	frame, regenFrames = P_TANK_REGEN_FRAMES, regenAmmoFrames = P_TANK_AMMOREGEN_FRAMES;
	int delayFrames = P_TANK_REGEN_DELAY, delayAmmoFrames = P_TANK_AMMOREGEN_DELAY;

	safe_cprintf(self, PRINT_HIGH, "p_gunner_think!\n");


	if (self->linkcount != self->monsterinfo.linkcount)
	{
		self->monsterinfo.linkcount = self->linkcount;
		M_CheckGround(self);
	}

	PM_Effects(self);
	self->monsterinfo.trail_time = level.time + 1; // stay in eye-cam
	M_Regenerate(self, regenFrames, delayFrames, 1.0, true, false, false, &self->monsterinfo.regen_delay1);
	//V_RegenAbilityAmmo(self, GUNNER, FLYER_HB_REGEN_FRAMES, FLYER_HB_REGEN_DELAY);

	//PM_RegenAmmo(self, regenAmmoFrames, delayAmmoFrames);
	//PM_SyncWithPlayer(self);



	frame = self->s.frame;


	self->nextthink = level.time + FRAMETIME;
}
void p_gunner_pain(edict_t* self, edict_t* other, float kick, int damage)
{
	if (self->health < 0.3 * self->max_health)
		self->s.skinnum |= 1; // use damaged skin

	// don't play the pain sound too often
	if (level.time < self->pain_debounce_time)
		return;

	// play pain sound
	self->pain_debounce_time = level.time + 2;
	gi.sound(self, CHAN_VOICE, gi.soundindex("gunner/gunpain1.wav"), 1, ATTN_NORM, 0);
}
void GUNNER_Touch(edict_t* self, edict_t* other, cplane_t* plane, csurface_t* surf)
{
	V_Touch(self, other, plane, surf);
}

void Cmd_PlayerToGunner_f(edict_t* ent)
{
	int cost = BERSERK_COST;

	if (debuginfo->value)
		gi.dprintf("DEBUG: %s just called Cmd_PlayerToBerserk_f()\n", ent->client->pers.netname);

	// try to switch back
	if (ent->mtype || PM_PlayerHasMonster(ent))
	{
		// don't let a player-tank unmorph if they are cocooned
		if (ent->owner && ent->owner->inuse && ent->owner->movetype == MOVETYPE_NONE)
			return;

		if (que_typeexists(ent->curses, 0))
		{
			safe_cprintf(ent, PRINT_HIGH, "You can't morph while cursed!\n");
			return;
		}

		V_RestoreMorphed(ent, 0);
		return;
	}

	//Talent: Morphing
	if (getTalentSlot(ent, TALENT_MORPHING) != -1)
		cost *= 1.0 - 0.25 * getTalentLevel(ent, TALENT_MORPHING);

	if (!V_CanUseAbilities(ent, GUNNER, cost, true))
		return;

	if (HasFlag(ent) && !hw->value)
	{
		safe_cprintf(ent, PRINT_HIGH, "Can't morph while carrying flag!\n");
		return;
	}

	V_ModifyMorphedHealth(ent, MORPH_GUNNER, true);

	ent->monsterinfo.attack_finished = level.time + 0.5;// can't attack immediately

	ent->client->pers.inventory[power_cube_index] -= cost;
	ent->client->ability_delay = level.time + 2;

	ent->mtype = MORPH_GUNNER;
	ent->s.modelindex = gi.modelindex("models/monsters/gunner/tris.md2");
	ent->s.modelindex2 = 0;
	ent->s.skinnum = 0;

	// undo crouching / ducked state
	// try asking their client to get up
	stuffcmd(ent, "-movedown\n");
	// if their client ignores the command, force them up
	if (ent->client->ps.pmove.pm_flags & PMF_DUCKED)
	{
		ent->client->ps.pmove.pm_flags &= ~PMF_DUCKED;
		ent->viewheight = 22;
		ent->maxs[2] += 28;
	}
	ent->pain = p_gunner_pain;

	//ent->client->refire_frames = 15; // reset charged weapon

	// grenades
	ent->myskills.abilities[GUNNER].max_ammo = 15 + 2 * ent->myskills.abilities[GUNNER].current_level;
	ent->myskills.abilities[GUNNER].ammo = 5 * ent->myskills.abilities[GUNNER].current_level;
	ent->monsterinfo.lefty = 35 + 10 * ent->myskills.abilities[GUNNER].current_level; // starting bullets
	ent->monsterinfo.search_frames = 35 + 10 * ent->myskills.abilities[GUNNER].current_level + 25  * ent->myskills.abilities[GUNNER].current_level; // max bullets
	
	ent->client->refire_frames = 0; // reset charged weapon
	ent->client->weapon_mode = 0; // reset weapon mode

	ent->client->pers.weapon = NULL;
	ent->client->ps.gunindex = 0;

	lasersight_off(ent);

	gi.sound(ent, CHAN_WEAPON, gi.soundindex("spells/morph.wav"), 1, ATTN_NORM, 0);

}