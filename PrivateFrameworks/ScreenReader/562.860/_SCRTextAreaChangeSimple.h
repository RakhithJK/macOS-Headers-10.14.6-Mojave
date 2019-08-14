//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRTextAreaChange.h>

@class NSString, SCRTextMarker;

__attribute__((visibility("hidden")))
@interface _SCRTextAreaChangeSimple : SCRTextAreaChange
{
    BOOL _truncated;
    long long _editType;
    NSString *_value;
    SCRTextMarker *_marker;
    unsigned long long _length;
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(retain, nonatomic) SCRTextMarker *marker; // @synthesize marker=_marker;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) long long editType; // @synthesize editType=_editType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containedByRange:(id)arg1 forUIElement:(id)arg2;
- (void)addValueToOutputRequest:(id)arg1 typingEchoPreference:(long long)arg2;
- (BOOL)isCandidateForWordEchoWithTypingEchoPreference:(long long)arg1;
- (BOOL)isCandidateForCharacterEchoWithTypingEchoPreference:(long long)arg1;
- (id)description;
- (BOOL)isTruncated;

@end

