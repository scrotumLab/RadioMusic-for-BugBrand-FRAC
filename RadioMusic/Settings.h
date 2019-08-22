#ifndef Settings_h
#define Settings_h

#include <SD.h>

// Classic Radio Music mode
// when true audio appears to play in the background as channels are switched.
// when false samples use the start time from CV / Pot EXCEPT in pitch mode where
// they always go back to the start.
#define LOOP_MODE_RADIO 1
// Looper Mode
// Try to keep playback position as samples are switched
#define LOOP_MODE_CONTINUE 2
// Use start point from interface
#define LOOP_MODE_START_POINT 3

class Settings {
public:
	Settings(const char* filename);
	void init(boolean hasSD);
	void read();
	void write();
	float toFloat(String settingValue);
	boolean toBoolean(String settingValue);

	uint8_t lowNote = 0; // SLab. Originally 36. But anyway now all vars external.
	uint8_t noteRange = 52; // SLab. Orignally 39
	// Which note number is normal playback speed.
	uint8_t rootNote = 24;
  // SLab note are now on SD Card in text fiöe
  uint8_t setLowNote = 0;
  uint8_t setNoteRange = 52;
  uint8_t setRootNote = 24;
  boolean quantiseRootCV = true;
  
	uint16_t crossfadeTime = 25; // milliseconds of fade in/out on switching
	uint16_t meterHide = 2000; // how long to show the meter after bank change in Milliseconds
	uint16_t startCVDivider = 2; // Changes sensitivity of Start control. 1 = most sensitive 512 = least sensitive (i.e only two points)
	boolean crossfade = false; // Crossfade clicks when changing channel / position at cost of speed. Fade speed is set by DECLICK
	boolean showMeter = true; // Does the VU meter appear?
	boolean chanCVImmediate = true; // TRUE means it jumps directly when you move or change.
	boolean startCVImmediate = false;

	boolean looping = false; // When a file finishes, start again from the beginning

	boolean sort = true; // By default we sort the directory contents.

	// Use start pot and cv to control speed instead of start point
	boolean pitchMode = false;

	// If this is true we'll read any .wav files and try to play them
	// if not we'll only play 44khz, 16bit mono files
	boolean anyAudioFiles = true;

	// Use reset CV as an output
	boolean resetIsOutput = false;

	// Only overrides if true. Force no crossfades.
	boolean hardSwap = false;

	uint8_t loopMode = 0;

private:
	const char* _filename;
	File settingsFile;
	void radioMode();
	void drumMode();
	void copyDefaults();
	void applySetting(String name, String value);
};

#endif

