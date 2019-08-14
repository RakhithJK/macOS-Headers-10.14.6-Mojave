//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface SOUtteranceResultsFile : NSObject
{
    double _creationDate;
    NSString *_creatorName;
    NSString *_creatorArguments;
    NSString *_recognizerType;
    NSString *_localeIdentifier;
    NSData *_audioFileData;
    NSString *_rxGrammar;
    NSMutableArray *_utteranceResults;
    struct AudioStreamBasicDescription _streamDescription;
    double _firstUtteranceStartTime;
}

@property double firstUtteranceStartTime; // @synthesize firstUtteranceStartTime=_firstUtteranceStartTime;
@property struct AudioStreamBasicDescription streamDescription; // @synthesize streamDescription=_streamDescription;
@property(retain) NSString *rxGrammar; // @synthesize rxGrammar=_rxGrammar;
@property(retain) NSData *audioFileData; // @synthesize audioFileData=_audioFileData;
@property(retain) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain) NSString *recognizerType; // @synthesize recognizerType=_recognizerType;
@property(retain) NSString *creatorArguments; // @synthesize creatorArguments=_creatorArguments;
@property(retain) NSString *creatorName; // @synthesize creatorName=_creatorName;
@property double creationDate; // @synthesize creationDate=_creationDate;
@property(retain) NSArray *utteranceResults; // @synthesize utteranceResults=_utteranceResults;
- (id)_dictionary;
- (BOOL)importRXGrammarFromFile:(id)arg1;
- (BOOL)importAudioDataFromFile:(id)arg1;
- (BOOL)exportRXGrammarToFile:(id)arg1;
- (BOOL)exportAudioDataToFile:(id)arg1;
- (BOOL)writeToFile:(id)arg1;
- (void)appendUtteranceResult:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end

