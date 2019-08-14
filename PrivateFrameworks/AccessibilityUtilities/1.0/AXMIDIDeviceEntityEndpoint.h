//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMIDIDeviceEntity, NSNumber, NSString;

@interface AXMIDIDeviceEntityEndpoint : NSObject
{
    unsigned int _midiEndpoint;
    AXMIDIDeviceEntity *_entity;
}

@property(nonatomic) __weak AXMIDIDeviceEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) unsigned int midiEndpoint; // @synthesize midiEndpoint=_midiEndpoint;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *driverName;
@property(readonly, nonatomic) NSNumber *isPrivate;
@property(readonly, nonatomic) NSNumber *isOffline;
@property(readonly, nonatomic) NSNumber *isBroadcast;
@property(readonly, nonatomic) NSNumber *isEmbedded;
@property(readonly, nonatomic) NSNumber *transmitChannels;
@property(readonly, nonatomic) NSNumber *receiveChannels;
@property(readonly, nonatomic) NSNumber *uniqueID;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (id)initWithMIDIEndpoint:(unsigned int)arg1 entity:(id)arg2;

@end

