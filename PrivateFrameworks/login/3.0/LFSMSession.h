//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LFSMSession : NSObject
{
    int _sessionID;
}

+ (id)sessionWithSessionID:(int)arg1;
+ (id)defaultOptions;
+ (id)sessionWithOptions:(id)arg1;
+ (id)sessionByListener:(id)arg1 withOptions:(id)arg2;
+ (void)signalSessionReady;
+ (id)sessionForUser:(unsigned int)arg1;
+ (id)sessionWithCGSessionID:(unsigned int)arg1;
+ (BOOL)isThisSessionOnConsole;
+ (id)currentSession;
+ (id)allSessions;
@property int sessionID; // @synthesize sessionID=_sessionID;
- (id)initWithSessionID:(int)arg1;
- (id)properties;
- (int)close;
- (void)bringOnConsoleWithOptions:(id)arg1;

@end

