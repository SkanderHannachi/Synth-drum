#ifndef _VOICE_H_
#define _VOICE_H_

#pragma once

#include <stdint.h>
#include <Audio.h>

void voiceInit();

void paramInit();

void paramUpdate1();
void paramUpdate2();
void paramUpdate3();

void triggerKick();
void triggerSnare();
void triggerTom(int32_t num);
void triggerShaker();
void triggerHat(bool open);
void triggerBell();

#endif // keepout