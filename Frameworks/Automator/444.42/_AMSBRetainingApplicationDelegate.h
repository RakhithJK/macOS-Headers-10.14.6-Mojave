//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/SBApplicationDelegate-Protocol.h>

@class NSError;

@interface _AMSBRetainingApplicationDelegate : NSObject <SBApplicationDelegate>
{
    NSError *_error;
}

+ (id)applicationDelegate;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)eventDidFail:(const struct AEDesc *)arg1 withError:(id)arg2;

@end

