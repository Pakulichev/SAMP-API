/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CMenu.h"

SAMP::CMenu::CMenu(const char *szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction *pInteraction) {
	((void(__thiscall *)(CMenu *, const char *, float, float, char, float, float, const Interaction *))SAMP_ADDROF(0xA6CE0))(this, szTitle, fX, fY, nColumns, fFirstColumnWidth, fSecondColumnWidth, pInteraction);
}

void SAMP::CMenu::AddItem(NUMBER nColumn, NUMBER nRow, const char *szText) {
	((void(__thiscall *)(CMenu *, NUMBER, NUMBER, const char *))SAMP_ADDROF(0xA6D80))(this, nColumn, nRow, szText);
}

void SAMP::CMenu::SetColumnTitle(NUMBER nColumn, const char *szText) {
	((void(__thiscall *)(CMenu *, NUMBER, const char *))SAMP_ADDROF(0xA6DB0))(this, nColumn, szText);
}

void SAMP::CMenu::Hide() {
	((void(__thiscall *)(CMenu *))SAMP_ADDROF(0xA6DE0))(this);
}

char *SAMP::CMenu::GetItem(NUMBER nColumn, NUMBER nRow) {
	return ((char *(__thiscall *)(CMenu *, NUMBER, NUMBER))SAMP_ADDROF(0xA6E00))(this, nColumn, nRow);
}

char *SAMP::CMenu::GetTitle() {
	return ((char *(__thiscall *)(CMenu *))SAMP_ADDROF(0xA6E20))(this);
}

char *SAMP::CMenu::MS(NUMBER nColumn, NUMBER nRow) {
	return ((char *(__thiscall *)(CMenu *, NUMBER, NUMBER))SAMP_ADDROF(0xA6E50))(this, nColumn, nRow);
}

char SAMP::CMenu::GetActiveRow() {
	return ((char(__thiscall *)(CMenu *))SAMP_ADDROF(0xA6E80))(this);
}

void SAMP::CMenu::Show() {
	((void(__thiscall *)(CMenu *))SAMP_ADDROF(0xA6EB0))(this);
}