//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_init;
- (id)init;

@end

