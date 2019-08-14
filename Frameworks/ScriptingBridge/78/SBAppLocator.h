//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScriptingBridge/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface SBAppLocator : NSObject <NSCoding>
{
    struct AEDesc _address;
    BOOL _isCurrentProcess;
    unsigned int _launchFlags;
}

- (id)description;
- (id)sdef;
- (BOOL)isCurrentProcess;
- (BOOL)isRunning;
- (id)bundleIdentifier;
- (id)name;
- (id)path;
- (id)processInformation;
- (void)resetAddress;
- (const struct AEDesc *)addressWithoutLaunching;
- (const struct AEDesc *)address;
- (const struct AEDesc *)launchWithFlags:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end

