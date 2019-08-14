//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TILanguageModelOfflineLearningStrategy-Protocol.h>

@class NSString, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningStrategyMecabraFavonius : NSObject <TILanguageModelOfflineLearningStrategy>
{
    TILanguageModelOfflineLearningTask *_learningTask;
}

@property(readonly) TILanguageModelOfflineLearningTask *learningTask; // @synthesize learningTask=_learningTask;
- (void).cxx_destruct;
- (void)didFinishLearning;
- (id)identifyLanguagesForMessages:(id)arg1;
- (BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
- (BOOL)incrementUsageCountsForMessages:(id)arg1 withAdaptationContext:(id)arg2;
- (id)filterMessages:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

