//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXComponentAnchor-Protocol.h>

@class NSString;

@interface SXJSONComponentAnchor : SXJSONObject <SXComponentAnchor>
{
}

- (long long)anchorAlignmentForString:(id)arg1;
- (long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2;
- (long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long originAnchorPosition; // @dynamic originAnchorPosition;
@property(readonly, nonatomic) struct _NSRange range; // @dynamic range;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long targetAnchorPosition; // @dynamic targetAnchorPosition;
@property(readonly, nonatomic) NSString *targetComponentIdentifier; // @dynamic targetComponentIdentifier;

@end
