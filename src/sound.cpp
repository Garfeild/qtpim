/***************************************************************************
 *   GalarmQ version 0.2                                                   *
 *   Copyright (C) 2007 by Anton "Garfeild" Kolchunov                      *
 *   kolchunovad (at) gmail.com or garfeild.ubuntu (at) gmail.com          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#include "sound.h"
void InitAL()
{
  alutInit(NULL, 0);
  alGetError();
// Position of the source sound.
  //ALfloat SourcePos[] = { 0.0, 0.0, 0.0 };
// Velocity of the source sound.
  //ALfloat SourceVel[] = { 0.0, 0.0, 0.0 };
// Position of the Listener.
  ALfloat ListenerPos[] = { 0.0, 0.0, 0.0 };
// Velocity of the Listener.
  ALfloat ListenerVel[] = { 0.0, 0.0, 0.0 };
// Orientation of the Listener. (first 3 elements are "at", second 3 are "up")
// Also note that these should be units of '1'.
  ALfloat ListenerOri[] = { 0.0, 0.0, -1.0,  0.0, 1.0, 0.0 };
  alListenerfv(AL_POSITION,    ListenerPos);
  alListenerfv(AL_VELOCITY,    ListenerVel);
  alListenerfv(AL_ORIENTATION, ListenerOri);
}

void KillALData()
{
    	alutExit();
}

Sound::Sound()
{
  for (int i=0; i<3; i++)
  {
    soundPos[i] = soundVel[i] = 0.0f;
  }
}

ALboolean Sound::LoadData()
{
  // Variables to load into.
//
  ALenum format;
  ALsizei size;
  ALvoid* data;
  ALsizei freq;
  ALboolean loop;

  // Load wav data into a buffer.
  alGenBuffers(1, &Buffer);

  if(alGetError() != AL_NO_ERROR)
		return AL_FALSE;

  alutLoadWAVFile((ALbyte*)"sounds/bounce.wav", &format, &data, &size, &freq, &loop);
  alBufferData(Buffer, format, data, size, freq);
  alutUnloadWAV(format, data, size, freq);

  // Bind the buffer with the source.

  alGenSources(1, &Source);

  if(alGetError() != AL_NO_ERROR)
    return AL_FALSE;

  alSourcei (Source, AL_BUFFER,   Buffer   );
  alSourcef (Source, AL_PITCH,    1.0      );
  alSourcef (Source, AL_GAIN,     1.0      );
  alSourcefv(Source, AL_POSITION, soundPos);
  alSourcefv(Source, AL_VELOCITY, soundVel);
  alSourcei (Source, AL_LOOPING,  AL_TRUE   );

  // Do another error check and return.

  if(alGetError() == AL_NO_ERROR)
    return AL_TRUE;
  
  return AL_FALSE;
}

void Sound::Play()
{
  alSourcePlay(Source);
}

void Sound::Stop()
{
  alSourceStop(Source);
}

void Sound::Pause()
{
  alSourcePause(Source);
}

void Sound::Close()
{
	alDeleteBuffers(1, &Buffer);
	alDeleteSources(1, &Source);
}
