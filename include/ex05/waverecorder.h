#ifndef __EX05_WAVERECORDER_H
#define __EX05_WAVERECORDER_H

#include "stm32f4xx_hal.h"
#include "ex05/main.h"

#define DEFAULT_TIME_REC 30000
#define RECORD_BUFFER_SIZE 4096

uint32_t initWavRecorder(uint32_t freq, uint32_t bits, uint32_t numChannels);
uint8_t startWaveRecorder(uint16_t* buf, uint32_t size);
uint32_t stopWaveRecorder(void);
void recordWaveFile(void);
void processRecordAudioBuffer(void);

#endif
