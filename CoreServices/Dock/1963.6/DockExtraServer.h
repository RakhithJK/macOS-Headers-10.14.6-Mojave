//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ECStatusLabelDescription, NSArray, NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DockExtraServer : NSObject
{
    NSMutableSet *_extras;
    id _identifier;
    const char *_path;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connection_queue;
    unsigned char _connection_uuid[16];
    BOOL _hasMenu;
    double _lastConnectionAttempt;
    unsigned long long _reconnects;
    unsigned long long _reconnectTime;
    BOOL _connecting;
    BOOL _connected;
    BOOL _connectionInvalid;
    ECStatusLabelDescription *_lastLabelDescription;
    id _lastCustomIcon;
}

+ (void)initialize;
@property(readonly, nonatomic) ECStatusLabelDescription *lastStatusLabel; // @synthesize lastStatusLabel=_lastLabelDescription;
@property(readonly, nonatomic) id lastCustomIcon; // @synthesize lastCustomIcon=_lastCustomIcon;
@property(readonly, nonatomic) BOOL hasMenu; // @synthesize hasMenu=_hasMenu;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) BOOL connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)_removeCustomIconMessage:(id)arg1;
- (void)_setCustomIconMessage:(id)arg1;
- (void)_setLabelWithMessage:(id)arg1;
- (void)_disconnect;
- (BOOL)_connectIfNecessary;
@property(readonly, nonatomic) NSArray *clients;
@property(readonly, nonatomic) unsigned long long clientCount;
- (void)scaleFactorChanged:(float)arg1;
- (void)doMenuCommand:(unsigned long long)arg1 tag:(unsigned long long)arg2 modifiers:(unsigned long long)arg3 display:(unsigned int)arg4;
- (id)getMenuArraySynchronous;
- (void)removeExtraClient:(id)arg1;
- (void)addExtraClient:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fileIdentifier:(id)arg2;

@end

