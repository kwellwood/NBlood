
#ifndef __sound_h__
#define __sound_h__

#define kMaxSoundFiles		80
#define kMaxSounds			200

enum {
    kSound0 = 0,
    kSound1,
    kSound2,
    kSound3,
    kSound4,
    kSound5,
    kSound6,
    kSound7,
    kSound8,
    kSound9,
    kSound10,
    kSound11,
    kSoundTorchOn,
    kSound13,
    kSound14,
    kSound15,
    kSound16,
    kSound17,
    kSound18,
    kSound19,
    kSound20,
    kSound21,
    kSound22,
    kSound23,
    kSound24,
    kSound25,
    kSound26,
    kSound27,
    kSound28,
    kSound29,
    kSound30,
    kSound31,
    kSound32,
    kSound33,
    kSound34,
    kSound35,
    kSound36,
    kSound38 = 38,
    kSound39,
    kSound40,
    kSound41,
    kSound42 = 42,
    kSound47 = 47,
    kSound48 = 48,
    kSoundQTail = 50,
    kSound52 = 52,
    kSoundTauntStart = 53,
    kSoundJonFDie = 60,
    kSound61,
    kSound62,
    kSound63,
    kSound64,
    kSound65,
    kSound66,
    kSound67,
    kSound68,
    kSound69,
    kSound70,
    kSound71,
    kSound72,
    kSoundAlarm,
    kSound74,
    kSound75,
    kSound76,
    kSound77,
    kSound78,
    kSound79,
};

extern short gMusicVolume;
extern short gFXVolume;

extern short nStopSound;
extern short nStoneSound;
extern short nSwitchSound;
extern short nLocalEyeSect;
extern short nElevSound;
extern short nCreepyTimer;

extern short StaticSound[];


int UpdateSounds();

void InitFX();
void UnInitFX();
void FadeSong();
int LocalSoundPlaying();
int sound_load_file(char *fileName);
void LoadStaticSounds();
void StopAllSounds();
void SetLocalChan(int nChannel);
int GetLocalSound();
void UpdateLocalSound();
void StopLocalSound();
void PlayLocalSound(short nSound, int val);

void BendAmbientSound();
void CheckAmbience(short nSector);

void D3PlayFX(int nSound, int nVal);
void StopSpriteSound(short nSprite);

void StartSwirlies();
void UpdateSwirlies();

#endif
