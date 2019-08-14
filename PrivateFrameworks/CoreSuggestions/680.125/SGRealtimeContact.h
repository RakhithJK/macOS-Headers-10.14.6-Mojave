//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGRealtimeSuggestion-Protocol.h>

@class NSString, SGContact;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>
{
    BOOL _isHarvested;
    int _state;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    unsigned long long _extractionType;
}

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(id)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isHarvested; // @synthesize isHarvested=_isHarvested;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(readonly, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionType;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToRealtimeContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedAsHarvested;
- (id)initWithState:(int)arg1 contact:(id)arg2 identifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

