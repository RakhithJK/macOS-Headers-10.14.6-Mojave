//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

#import "NSApplicationDelegate-Protocol.h"

@class NSString;

@interface CSUtilityApp : NSApplication <NSApplicationDelegate>
{
}

- (void)newUtilityWindow:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (unsigned int)optionalSignature;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

