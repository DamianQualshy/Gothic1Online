#ifndef PLAYERRPC_H
#define PLAYERRPC_H

namespace PlayerRPC
{
	void HandlePlayerRPC(CNetwork* network, HSteamNetConnection connection, PacketReader& stream);

	void SetPosition(HSteamNetConnection connection, PacketReader& stream);
	void SetAngle(HSteamNetConnection connection, PacketReader& stream);
	void PlayAnimation(HSteamNetConnection connection, PacketReader& stream);
	void ChangeWeaponMode(HSteamNetConnection connection, PacketReader& stream);
	void WearArmor(HSteamNetConnection connection, PacketReader& stream);
	void EquipWeapon(HSteamNetConnection connection, PacketReader& stream);
	void ChangeInstance(HSteamNetConnection connection, PacketReader& stream);
	void ItemHand(HSteamNetConnection connection, PacketReader& stream);
	void ChangeLevel(HSteamNetConnection connection, PacketReader& stream);
	void EnterWorld(HSteamNetConnection connection);
	void SetHealth(HSteamNetConnection connection, PacketReader& stream);
	void SetHealthMax(HSteamNetConnection connection, PacketReader& stream);
	void AttackHit(HSteamNetConnection connection, PacketReader& stream);
	void AttackDead(HSteamNetConnection connection, PacketReader& stream);
	void AttackUnconscious(HSteamNetConnection connection, PacketReader& stream);
	void StandUp(HSteamNetConnection connection, PacketReader& stream);
	void MagicSetup(HSteamNetConnection connection, PacketReader& stream);
	void MagicAttack(HSteamNetConnection connection, PacketReader& stream);
	//void SetProtection(HSteamNetConnection connection, PacketReader& stream);
	void SetOverlay(HSteamNetConnection connection, PacketReader& stream);
	void SetTimedOverlay(HSteamNetConnection connection, PacketReader& stream);
	void MobTrigger(HSteamNetConnection connection, PacketReader& stream);
	void ShootArrow(HSteamNetConnection connection, PacketReader& stream);
};

#endif //PLAYERRPC_H