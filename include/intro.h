#ifndef GUARD_INTRO_H
#define GUARD_INTRO_H

// Exported type declarations
struct SecondarySave {
    u8 playerName[PLAYER_NAME_LENGTH + 1];
    u16 playTimeHours;
    u8 playTimeMinutes;
    u8 badgeCount;
    u16 pokedexCount;
    bool8 showPokedex;
};
struct SecondarySave gSecondarySavePtr;
// Exported RAM declarations

// Exported ROM declarations
void CB2_InitCopyrightScreenAfterBootup(void);
void CB2_InitCopyrightScreenAfterBootup(void);
void CB2_InitCopyrightScreenAfterTitleScreen(void);
void PanFadeAndZoomScreen(u16, u16, u16, u16);

#endif // GUARD_INTRO_H
