//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LoginItemsPost : NSObject
{
}

+ (BOOL)addDictToLoginItems:(id)arg1 forUser:(id)arg2 withHomePath:(id)arg3 managedPrefs:(BOOL)arg4;
+ (BOOL)addPathToLoginItems:(id)arg1 forUser:(id)arg2 withHomePath:(id)arg3 managedPrefs:(BOOL)arg4;
+ (void)doLoginItems:(id)arg1 withHome:(id)arg2 withOriginalHomeLoc:(id)arg3 withGroupHomeLoc:(id)arg4 userUID:(unsigned int)arg5;
+ (BOOL)profileLoginItemsPostCompositePrefDomain:(id)arg1 forKey:(id)arg2 withHomeURL:(id)arg3 userHome:(id)arg4 userName:(id)arg5 userUID:(unsigned int)arg6;
+ (BOOL)loginItemsPostCompositePrefFile:(id)arg1 forKey:(id)arg2 withHomeURL:(id)arg3 withGroupVolURL:(id)arg4 destPrefFile:(id)arg5;

@end

