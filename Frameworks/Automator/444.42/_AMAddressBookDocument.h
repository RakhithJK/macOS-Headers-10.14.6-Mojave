//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSString, NSURL;

@interface _AMAddressBookDocument : SBObject
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(id)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly, copy) NSURL *file;
@property(readonly) BOOL modified;
@property(readonly, copy) NSString *name;

@end

