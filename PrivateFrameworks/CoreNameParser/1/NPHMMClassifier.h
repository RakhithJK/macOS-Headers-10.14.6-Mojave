//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPNameComponentsData;

@interface NPHMMClassifier : NSObject
{
    unsigned long long _totalGivenNamesCount;
    unsigned long long _totalFamilyNamesCount;
    unsigned long long _uniqueGivenNamesCount;
    unsigned long long _uniqueFamilyNamesCount;
    NPNameComponentsData *_nameComponentsData;
    CDStruct_a720a2d7 _stateProbabilities;
}

@property CDStruct_a720a2d7 stateProbabilities; // @synthesize stateProbabilities=_stateProbabilities;
- (void).cxx_destruct;
- (id)coumpoundsFromName:(id)arg1;
- (BOOL)isParticle:(id)arg1;
- (BOOL)formCompoundFamilyName:(id)arg1;
- (BOOL)formCompoundGivenName:(id)arg1;
- (struct _CFBurstTrie *)nameFrequencyTrieRef;
- (BOOL)isGivenNameAbbreviation:(id)arg1;
- (BOOL)isInitial:(id)arg1;
- (double)emissionProbability:(id)arg1 hiddenState:(unsigned long long)arg2 isOOV:(char *)arg3;
- (double)stateTransitionProbabilityFrom:(id)arg1 to:(id)arg2;
- (double)startProbability:(id)arg1;
- (id)probabilityForHiddenSequence:(id)arg1 knowingObservationSequence:(id)arg2 boost:(unsigned long long)arg3;
- (id)candidatesOfSize:(unsigned long long)arg1 constraints:(unsigned long long)arg2 compoundsConstraints:(id)arg3 labelsContraints:(id)arg4;
- (BOOL)validSequence:(id)arg1 compoundsConstraints:(id)arg2 labelsConstraints:(id)arg3;
- (id)candidatesBasedOnCommaDelimiterIndex:(unsigned long long)arg1 sequenceSize:(unsigned long long)arg2;
- (id)candidatesBasedOnFormatSequence:(id)arg1;
- (BOOL)isLinkingToken:(id)arg1;
- (BOOL)isCoupleName:(id)arg1;
- (id)hiddenStatesFromObservationSequence:(id)arg1;
- (unsigned long long)extractMetricForType:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)frequencyForName:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithHMMProbabilities:(CDStruct_a720a2d7)arg1 nameComponentsDate:(id)arg2;

@end

