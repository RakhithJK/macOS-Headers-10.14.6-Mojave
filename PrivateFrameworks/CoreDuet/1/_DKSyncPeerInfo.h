//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject
{
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
    NSString *_transportsString;
}

@property(retain, nonatomic) NSString *transportsString; // @synthesize transportsString=_transportsString;
@property(nonatomic) long long transports; // @synthesize transports=_transports;
@property(retain, nonatomic) _DKSyncPeer *peer; // @synthesize peer=_peer;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;

@end

