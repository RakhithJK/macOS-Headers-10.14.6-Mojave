//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIKeyboardCandidateCoding-Protocol.h>

@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>
{
    BOOL _responseCandidate;
    BOOL _isSendCurrentLocation;
    unsigned int _slotID;
    NSString *_alternativeText;
    NSString *_annotationText;
    unsigned long long _customInfoType;
    unsigned long long _indexForMetrics;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isSendCurrentLocation; // @synthesize isSendCurrentLocation=_isSendCurrentLocation;
@property(readonly, nonatomic, getter=isResponseCandidate) BOOL responseCandidate; // @synthesize responseCandidate=_responseCandidate;
@property(nonatomic) unsigned long long indexForMetrics; // @synthesize indexForMetrics=_indexForMetrics;
@property(nonatomic) unsigned long long customInfoType; // @synthesize customInfoType=_customInfoType;
@property(nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
@property(readonly, nonatomic, getter=isSecureContentCandidate) BOOL secureContentCandidate;
@property(readonly, nonatomic, getter=isRegionalCandidate) BOOL regionalCandidate;
@property(readonly, nonatomic, getter=isOTAWordListCandidate) BOOL OTAWordListCandidate;
@property(readonly, nonatomic, getter=isPunctuationCompletionCandidate) BOOL punctuationCompletionCandidate;
@property(readonly, nonatomic, getter=isPunctuationKeyCandidate) BOOL punctuationKeyCandidate;
- (BOOL)isPunctuation;
@property(readonly, nonatomic, getter=isFacemarkCandidate) BOOL facemarkCandidate;
@property(readonly, nonatomic, getter=isFullwidthCandidate) BOOL fullwidthCandidate;
@property(readonly, nonatomic) unsigned int usageTrackingMask;
@property(readonly, nonatomic, getter=isInlineCompletionCandidate) BOOL inlineCompletionCandidate;
@property(readonly, nonatomic, getter=isCompletionCandidate) BOOL completionCandidate;
@property(readonly, nonatomic, getter=isEmojiCandidate) BOOL emojiCandidate;
@property(readonly, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property(readonly, nonatomic) BOOL isAutocorrection;
@property(readonly, nonatomic) BOOL isForShortcutConversion;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) long long cursorMovement;
@property(readonly, nonatomic) unsigned long long deleteCount;
@property(readonly, nonatomic) unsigned long long wordOriginFeedbackID;
@property(copy, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) BOOL isAddress;
@property(readonly, nonatomic) NSString *responseKitCategory;
@property(readonly, nonatomic) TIProactiveTrigger *proactiveTrigger;
@property(readonly, nonatomic) NSString *candidate;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

