#ifndef PLAYERRPC_H
#define PLAYERRPC_H

namespace PlayerRPC
{
	void HandlePlayerRPC(CNetwork* network, PacketReader& stream);
	
	void CreatePlayer(CNetwork* network, PacketReader& stream);
	void CreateAndSpawnPlayer(PacketReader& stream);
	void DestroyPlayer(CNetwork* network, PacketReader& stream);

	void Spawn(CNetwork* network, PacketReader& stream);
	void Unspawn(CNetwork* network, PacketReader& stream);

	void SetPosition(PacketReader& stream);
	void SetAngle(PacketReader& stream);
	void PlayAnimation(PacketReader& stream);
	void ChangeWeaponMode(PacketReader& stream);
	void WearArmor(PacketReader& stream) ;
	void EquipWeapon(PacketReader& stream) ;
	void ChangeInstance(PacketReader& stream);
	void ItemHand(PacketReader& stream);
	void SetHealth(PacketReader& stream);
	void SetHealthMax(PacketReader& stream);
	void AttackHit(PacketReader& stream);
	void AttackDead(PacketReader& stream);
	void AttackUnconscious(PacketReader& stream);
	void StandUp(PacketReader& stream);
	void MagicSetup(PacketReader& stream);
	void MagicAttack(PacketReader& stream);
	void PlayerList(PacketReader& stream);
	//void SetProtection(PacketReader& stream);
	void SetOverlay(PacketReader& stream);
	void MobTrigger(PacketReader& stream);
	void ShootArrow(PacketReader& stream);
	void ForceStandUp(PacketReader& stream);
};

#endif //PLAYERRPC_H