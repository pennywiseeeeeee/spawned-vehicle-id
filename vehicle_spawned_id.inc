//pennywise var
#define VEHICLE_SPAWN_X -1662.4795 //cord veh x
#define VEHICLE_SPAWN_Y 1214.7416 //cord veh y
#define VEHICLE_SPAWN_Z 6.8745 //cord veh y
#define VEHICLE_SPAWN_A 266.8100 //cord veh a

//pennywise public ongamemode
spawnedVehicle = CreateVehicle(560, VEHICLE_SPAWN_X, VEHICLE_SPAWN_Y, VEHICLE_SPAWN_Z, VEHICLE_SPAWN_A, -1, -1, 0);

//pennywise public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
    if(GetPlayerState(playerid)  == PLAYER_STATE_DRIVER && GetPlayerVehicleID(playerid) == spawnedVehicle)
    {
        RemovePlayerFromVehicle(playerid);
        SendClientMessage(playerid, 0xFF0000FF, "INFO ERROR : ini kendaraan dealer kontol!");
    }
//sesusaikan gm mu biar tidak terjadi error

