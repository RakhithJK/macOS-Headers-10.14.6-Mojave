//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/_EARSpeechRecognitionResultStream-Protocol.h>

@class NSArray, NSMutableArray, NSString, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognizer;
@protocol CSKeywordAnalyzerQuasarScoreDelegate, OS_dispatch_queue;

@interface CSKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_triggerTokenList;
    _EARSpeechRecognizer *_recognizer;
    _EARSpeechRecognitionAudioBuffer *_recognizerBuffer;
    BOOL _useKeywordSpotting;
    double _triggerConfidence;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerQuasarScoreDelegate> _delegate;
}

@property(nonatomic) __weak id <CSKeywordAnalyzerQuasarScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(readonly, nonatomic) double triggerConfidence; // @synthesize triggerConfidence=_triggerConfidence;
- (void).cxx_destruct;
- (double)_getConfidence:(id)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)_recognizeWavData:(const short *)arg1 length:(int)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)endAudio;
- (void)runRecognition;
- (void)reset;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

