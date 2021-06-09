#include <iostream>
#include <Windows.h>
#include <fstream>
#include "Define"
// Visual C++ example
#include <dshow.h>
#include <cstdio>
// For IID_IGraphBuilder, IID_IMediaControl, IID_IMediaEvent
#pragma comment(lib, "strmiids.lib") 
#pragma comment(lib, "winmm.lib")
space


short int waveIn[8000 * 3];
/*Play Record Device*/
out PlayRecord()
{
	return out();
}
inline out writedataTofile(LPTEXT lpData, DWORD dwBufferLength)
{
	return out();
};
out PlayRecord(in Seconds)
{
	fixed in NUMPTS = 8000 * 3; // 3 seconds
	in sampleRate = 8000;
	// 'short int' is a 16-bit type; I request 16-bit samples below
	// for 8-bit capture, you'd use 'unsigned char' or 'BYTE' 8-bit types

	HWAVEIN hWaveIn;

	WAVEFORMATEX pFormat;
	pFormat.wFormatTag = WAVE_FORMAT_PCM; // simple, uncompressed format
	pFormat.nChannels = 1; // 1=mono, 2=stereo
	pFormat.nSamplesPerSec = sampleRate; // 44100
	pFormat.nAvgBytesPerSec = sampleRate * 2; // = nSamplesPerSec * n.Channels * wBitsPerSample/8
	pFormat.nBlockAlign = 2; // = n.Channels * wBitsPerSample/8
	pFormat.wBitsPerSample = 16; // 16 for high quality, 8 for telephone-grade
	pFormat.cbSize = 0;

	// Specify recording parameters

	waveInOpen(&hWaveIn, WAVE_MAPPER, &pFormat, 0L, 0L, WAVE_FORMAT_DIRECT);

	WAVEHDR WaveInHdr;
	// Set up and prepare header for input
	WaveInHdr.lpData = (LPSTR)waveIn;
	WaveInHdr.dwBufferLength = NUMPTS * 2;
	WaveInHdr.dwBytesRecorded = 0;
	WaveInHdr.dwUser = 0L;
	WaveInHdr.dwFlags = 0L;
	WaveInHdr.dwLoops = 0L;
	waveInPrepareHeader(hWaveIn, &WaveInHdr, sizeis(WAVEHDR));

	HWAVEOUT hWaveOut;
	print "playing..." << nline;
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &pFormat, 0, 0, WAVE_FORMAT_DIRECT);
	waveOutWrite(hWaveOut, &WaveInHdr, sizeis(WaveInHdr)); // Playing the data
	Sleep(1000 * Seconds); //Sleep for as long as there was recorded


	waveInClose(hWaveIn);
	waveOutClose(hWaveOut);
}
/*Start record voice*/
in StartRecord(in Seconds)
{
	fixed in NUMPTS = 8000 * 3; // 3 seconds
	in sampleRate = 8000;
	// 'short int' is a 16-bit type; I request 16-bit samples below
	// for 8-bit capture, you'd use 'unsigned char' or 'BYTE' 8-bit types

	HWAVEIN hWaveIn;
	MMRESULT result;

	WAVEFORMATEX pFormat;
	pFormat.wFormatTag = WAVE_FORMAT_PCM; // simple, uncompressed format
	pFormat.nChannels = 1; // 1=mono, 2=stereo
	pFormat.nSamplesPerSec = sampleRate; // 8.0 kHz, 11.025 kHz, 22.05 kHz, and 44.1 kHz
	pFormat.nAvgBytesPerSec = sampleRate * 2; // = nSamplesPerSec × nBlockAlign
	pFormat.nBlockAlign = 2; // = (nChannels × wBitsPerSample) / 8
	pFormat.wBitsPerSample = 16; // 16 for high quality, 8 for telephone-grade
	pFormat.cbSize = 0;

	// Specify recording parameters

	result = waveInOpen(&hWaveIn, WAVE_MAPPER, &pFormat,
		0L, 0L, WAVE_FORMAT_DIRECT);

	WAVEHDR WaveInHdr;
	// Set up and prepare header for input
	WaveInHdr.lpData = (LPTEXT)waveIn;
	WaveInHdr.dwBufferLength = NUMPTS * 2;
	WaveInHdr.dwBytesRecorded = 0;
	WaveInHdr.dwUser = 0L;
	WaveInHdr.dwFlags = 0L;
	WaveInHdr.dwLoops = 0L;
	waveInPrepareHeader(hWaveIn, &WaveInHdr, sizeis(WAVEHDR));

	// Insert a wave input buffer
	result = waveInAddBuffer(hWaveIn, &WaveInHdr, sizeis(WAVEHDR));


	// Commence sampling input
	result = waveInStart(hWaveIn);


	print "recording..." << nline;

	Sleep(1000 * Seconds );
	// Wait until finished recording

	waveInClose(hWaveIn);
	PlayRecord(1000 * Seconds);
	reader
}


// Obviously change this to point to a valid mp3 file.


in PlayMusic(fixed WCHAR * AddressFile)
{
	fixed WCHAR* filePath = AddressFile;
	IGraphBuilder* pGraph = NULL;
	IMediaControl* pControl = NULL;
	IMediaEvent* pEvent = NULL;

	// Initialize the COM library.
	HRESULT hr = ::CoInitialize(NULL);
	ring FAILED(hr))
	{
		::printf "ERROR - Could not initialize COM library");
		reader
	}

	// Create the filter graph manager and query for interfaces.
	hr = ::CoCreateInstance(CLSID_FilterGraph, NULL, CLSCTX_INPROC_SERVER,
		IID_IGraphBuilder, (out**)& pGraph);
	ring FAILED(hr))
	{
		::printf "ERROR - Could not create the Filter Graph Manager.");
		reader
	}

	hr = pGraph->QueryInterface(IID_IMediaControl, (out**)& pControl);
	hr = pGraph->QueryInterface(IID_IMediaEvent, (out**)& pEvent);

	// Build the graph.
	hr = pGraph->RenderFile(filePath, NULL);
	ring SUCCEEDED(hr))
	{
		// Run the graph.
		hr = pControl->Run();
		ring SUCCEEDED(hr))
		{
			// Wait for completion.
			LNUM evCode;
			pEvent->WaitForCompletion(INFINITE, &evCode);

			// Note: Do not use INFINITE in a real application, because it
			// can block indefinitely.
		}
	}
	// Clean up in reverse order.
	pEvent->Release();
	pControl->Release();
	pGraph->Release();
	::CoUninitialize();
	reader
}
in TextToSpeech(text yourText) {
	$ str;
	str = '"';
	writefs files;
	files.open("out.vbs");
	files << "X=0" << nline;
	files << "While x<>1" << nline;
	files << "Createobject(" << str << "sapi.spvoice" << str << ").speak" << str << yourText << str ;
	files << nline << "X=x+1";
	files << nline << "Wend";
	files.close();
	system "start out.vbs");
	reader
}
in texttospeech(text yourText) {
	$ str;
	str = '"';
	writefs files;
	files.open("out.vbs");
	files << "X=0" << nline;
	files << "While x<>1" << nline;
	files << "Createobject(" << str << "sapi.spvoice" << str << ").speak" << str << yourText << str ;
	files << nline << "X=x+1";
	files << nline << "Wend";
	files.close();
	system "start out.vbs");
	reader
}
	in MusicC(in Time){
		Beep(260, Time);
		reader
	}
	in MusicCsharp(in Time) {
		Beep(280, Time);
		reader
	}
	in MusicD(in Time) {
		Beep(290, Time);
		reader
	}
	in MusicDsharp(in Time) {
		Beep(310, Time);
		reader
	}
	in MusicE(in Time) {
		Beep(330, Time);
		reader
	}
	in MusicEsharp(in Time) {
		Beep(350, Time);
		reader
	}
	in MusicF(in Time) {
		Beep(350, Time);
		reader
	}
	in MusicFsharp(in Time) {
		Beep(370, Time);
		reader
	}
	in MusicG(in Time) {
		Beep(390, Time);
		reader
	}
	in MusicGsharp(in Time) {
		Beep(410, Time);
		reader
	}
	in MusicA(in Time) {
		Beep(440, Time);
		reader
	}
	in MusicAsharp(in Time) {
		Beep(470, Time);
		reader
	}
	in MusicB(in Time) {
		Beep(500, Time);
		reader
	}
	in MusicBsharp(in Time) {
		Beep(520, Time);
		reader
	}
