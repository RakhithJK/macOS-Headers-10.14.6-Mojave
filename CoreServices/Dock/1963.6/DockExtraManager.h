//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DockExtraManager : NSObject
{
    NSMapTable *_serversByFileID;
}

+ (id)sharedExtraManager;
- (void).cxx_destruct;
- (void)doMenuCommand:(unsigned int)arg1 tag:(unsigned long long)arg2 modifiers:(unsigned int)arg3 display:(unsigned int)arg4 forExtra:(id)arg5;
- (id)menusForExtra:(id)arg1;
- (void)scaleFactorChanged:(float)arg1 forExtra:(id)arg2;
- (void)discardExtra:(id)arg1;
- (id)cloneExtra:(id)arg1 delegate:(id)arg2;
- (id)dockExtraForURL:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

