//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class SGContactPipelineHelper, SGDetectedAttributeML, SGQuickResponsesML;

@interface SGDetectedAttributeDissector : SGPipelineDissector
{
    SGDetectedAttributeML *_ml;
    SGQuickResponsesML *_mlQR;
    SGContactPipelineHelper *_contactsHelper;
    BOOL _filterWithAddressBook;
    float _unlikelyPhoneSamplingRate;
    unsigned long long _selfIdentificationMessageCount;
}

+ (void)clearConversationCache;
+ (id)currentPatterns;
+ (id)patterns;
+ (BOOL)isNameRequest:(id)arg1;
+ (BOOL)isMaybeNameContext:(id)arg1;
+ (BOOL)isPhoneContext:(id)arg1;
+ (BOOL)isAddressContext:(id)arg1;
+ (id)dissectorWithMockedMLTrainingForTests;
@property(nonatomic) unsigned long long selfIdentificationMessageCount; // @synthesize selfIdentificationMessageCount=_selfIdentificationMessageCount;
- (void).cxx_destruct;
- (id)detailTypeFromPrefix:(id)arg1;
- (id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(struct _NSRange *)arg2;
- (id)getLineContaining:(struct _NSRange)arg1 inText:(id)arg2;
- (void)dissectForContacts:(id)arg1 inContext:(id)arg2 withConversationHistory:(id)arg3;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (void)handleTextMessageSelfIdentification:(id)arg1 withConversationHistory:(id)arg2;
- (id)processTextMessageConversation:(id)arg1 messageIndex:(unsigned long long)arg2;
- (id)filterDangerousSigDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)filterDangerousSigEmailDetections:(id)arg1 onEntity:(id)arg2 inContext:(id)arg3;
- (id)_makeSimplifiedListIdEmail:(id)arg1;
- (id)_makeAlnum:(id)arg1;
- (id)_extractEmailishTokenFromMailHeader:(id)arg1;
- (id)filterDangerousSigAddressDetections:(id)arg1 onEntity:(id)arg2;
- (id)filterDangerousSigPhoneDetections:(id)arg1 onEntity:(id)arg2;
- (id)detectionFromBodyDDMatch:(id)arg1 onEntity:(id)arg2 withSupervisionToFill:(id)arg3;
- (id)detectionFromSignatureDDMatch:(id)arg1 onEntity:(id)arg2 detectedLabelRange:(struct _NSRange *)arg3 lastClaimedLabelRange:(struct _NSRange)arg4;
- (id)init;
- (id)initWithML:(id)arg1 withMLQR:(id)arg2;

@end
