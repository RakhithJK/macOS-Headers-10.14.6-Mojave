//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HMOutgoingHomeInvitation, NSString;
@protocol HFHomeKitObject;

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying>
{
    HMOutgoingHomeInvitation *_outgoingInvitation;
}

@property(readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation; // @synthesize outgoingInvitation=_outgoingInvitation;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)initWithOutgoingInvitation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

