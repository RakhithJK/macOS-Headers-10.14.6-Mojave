//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDTCCUtilities : NSObject
{
}

+ (struct __CFString *)_TCCServiceForAccountTypeID:(id)arg1;
+ (BOOL)clearAllTCCStatesForAccountTypeID:(id)arg1;
+ (id)allTCCStatesForAccountTypeID:(id)arg1;
+ (BOOL)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(BOOL)arg3;
+ (int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2;
+ (BOOL)TCCSupportedForAccountTypeID:(id)arg1;

@end

