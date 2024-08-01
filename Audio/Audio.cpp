#include <iostream>
#include <portaudio.h>

#define SAMPLE_RATE 44100
#define FRAMES_PER_BUFFER 512

static int paCallback(const void *inputBuffer, void *outputBuffer, unsigned long framesPerBuffer,
                      const PaStreamCallbackTimeInfo* timeInfo, PaStreamCallbackFlags statusFlags, void *userData) {
    float *in = (float*)inputBuffer;
    float *out = (float*)outputBuffer;
    
    // Simple pass-through: copying input to output
    for (unsigned long i = 0; i < framesPerBuffer; i++) {
        out[i] = in[i]; // Here you can apply effects like reverb, pitch shifting, etc.
    }
    
    return paContinue;
}

int main() {
    PaStream *stream;
    PaError err;

    err = Pa_Initialize();
    if (err != paNoError) goto error;

    err = Pa_OpenDefaultStream(&stream, 1, 1, paFloat32, SAMPLE_RATE, FRAMES_PER_BUFFER, paCallback, nullptr);
    if (err != paNoError) goto error;

    err = Pa_StartStream(stream);
    if (err != paNoError) goto error;

    std::cout << "Press Enter to stop the stream..." << std::endl;
    std::cin.get();

    err = Pa_StopStream(stream);
    if (err != paNoError) goto error;

    err = Pa_CloseStream(stream);
    if (err != paNoError) goto error;

    Pa_Terminate();
    return 0;

error:
    Pa_Terminate();
    std::cerr << "An error occurred while using the portaudio stream: " << Pa_GetErrorText(err) << std::endl;
    return -1;
}
