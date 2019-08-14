//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString, _EARFormatter, _EARSpeechModelInfo, _EARSpeechRecognitionAudioBuffer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognizer : NSObject
{
    struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer>> _recognizer;
    struct unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer>> _tokenizer;
    _EARSpeechRecognitionAudioBuffer *_currentAudioBuffer;
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_formatterQueue;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    NSString *_configPath;
    BOOL _detectUtterances;
    BOOL _concatenateUtterances;
    BOOL _recognizeEagerCandidates;
    BOOL _farField;
    NSData *_userProfileData;
    NSData *_jitProfileData;
    double _endpointStart;
    double _maximumRecognitionDuration;
    NSDictionary *_recognitionReplacements;
    NSDictionary *_recognitionConfidenceSubtraction;
    NSArray *_leftContext;
    NSString *_inputOrigin;
}

+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;
+ (id)maximumSupportedConfigurationVersion;
+ (id)minimumSupportedConfigurationVersion;
+ (void)initialize;
@property(copy, nonatomic) NSString *inputOrigin; // @synthesize inputOrigin=_inputOrigin;
@property(copy, nonatomic) NSArray *leftContext; // @synthesize leftContext=_leftContext;
@property(copy, nonatomic) NSDictionary *recognitionConfidenceSubtraction; // @synthesize recognitionConfidenceSubtraction=_recognitionConfidenceSubtraction;
@property(copy, nonatomic) NSDictionary *recognitionReplacements; // @synthesize recognitionReplacements=_recognitionReplacements;
@property(nonatomic) double maximumRecognitionDuration; // @synthesize maximumRecognitionDuration=_maximumRecognitionDuration;
@property(nonatomic) BOOL farField; // @synthesize farField=_farField;
@property(nonatomic) BOOL recognizeEagerCandidates; // @synthesize recognizeEagerCandidates=_recognizeEagerCandidates;
@property(nonatomic) double endpointStart; // @synthesize endpointStart=_endpointStart;
@property(nonatomic) BOOL concatenateUtterances; // @synthesize concatenateUtterances=_concatenateUtterances;
@property(nonatomic) BOOL detectUtterances; // @synthesize detectUtterances=_detectUtterances;
@property(copy, nonatomic) NSData *jitProfileData; // @synthesize jitProfileData=_jitProfileData;
@property(copy, nonatomic) NSData *userProfileData; // @synthesize userProfileData=_userProfileData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAlternateRawRecognitionTokenSausage:(id)arg1;
- (void)getFormatterWithBlock:(CDUnknownBlockType)arg1;
- (id)recognitionStatistics;
- (void)cancelRecognition;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (shared_ptr_9f04d411)requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(shared_ptr_5cb47a18)arg4 extraLanguageModel:(id)arg5 symbolTableList:(const shared_ptr_ca83464d *)arg6;
- (void)updateUserProfileData:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1;
- (void)setLeftContextText:(id)arg1;
- (struct TextTokenizer *)_tokenizer;
@property(readonly, nonatomic) _EARSpeechModelInfo *modelInfo;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(BOOL)arg2;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

@end
