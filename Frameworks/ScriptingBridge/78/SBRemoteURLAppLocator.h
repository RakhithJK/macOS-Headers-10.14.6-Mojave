//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBAppLocator.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SBRemoteURLAppLocator : SBAppLocator
{
    NSURL *_url;
}

- (id)description;
- (id)sdef;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)path;
- (id)initWithURL:(id)arg1;

@end
