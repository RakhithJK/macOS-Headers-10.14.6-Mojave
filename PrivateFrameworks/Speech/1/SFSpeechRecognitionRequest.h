//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, _SFSearchRequest;

@interface SFSpeechRecognitionRequest : NSObject
{
    BOOL _forceOfflineRecognition;
    BOOL _shouldReportPartialResults;
    BOOL _detectMultipleUtterances;
    double _maxiumRecognitionDuration;
    _SFSearchRequest *_searchRequest;
    NSDictionary *_voiceTriggerEventInfo;
    NSDictionary *_recognitionOverrides;
    NSURL *_modelOverrideURL;
    long long _taskHint;
    NSArray *_contextualStrings;
    NSString *_interactionIdentifier;
}

@property(nonatomic) BOOL detectMultipleUtterances; // @synthesize detectMultipleUtterances=_detectMultipleUtterances;
@property(copy, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
@property(copy, nonatomic) NSArray *contextualStrings; // @synthesize contextualStrings=_contextualStrings;
@property(nonatomic) BOOL shouldReportPartialResults; // @synthesize shouldReportPartialResults=_shouldReportPartialResults;
@property(nonatomic) long long taskHint; // @synthesize taskHint=_taskHint;
@property(retain, nonatomic, getter=_modelOverrideURL, setter=_setModelOverrideURL:) NSURL *_modelOverrideURL; // @synthesize _modelOverrideURL;
@property(retain, nonatomic, getter=_recognitionOverrides, setter=_setRecognitionOverrides:) NSDictionary *_recognitionOverrides; // @synthesize _recognitionOverrides;
@property(retain, nonatomic, getter=_voiceTriggerEventInfo, setter=_setVoiceTriggerEventInfo:) NSDictionary *_voiceTriggerEventInfo; // @synthesize _voiceTriggerEventInfo;
@property(retain, nonatomic, getter=_searchRequest, setter=_setSearchRequest:) _SFSearchRequest *_searchRequest; // @synthesize _searchRequest;
@property(nonatomic, getter=_forceOfflineRecognition, setter=_setForceOfflineRecognition:) BOOL _forceOfflineRecognition; // @synthesize _forceOfflineRecognition;
@property(nonatomic, getter=_maximumRecognitionDuration, setter=_setMaximumRecognitionDuration:) double _maxiumRecognitionDuration; // @synthesize _maxiumRecognitionDuration;
- (void).cxx_destruct;
- (id)_speechRequestOptions;
- (id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (BOOL)_powerMeteringAvailable;
- (BOOL)automaticallyEndpoint;
- (id)init;
- (id)_searchRequests;
- (void)_setSearchRequests:(id)arg1;

@end

