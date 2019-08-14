//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSMenuItemValidation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSDictationManager : NSObject <NSMenuItemValidation>
{
    long long _lastNotifiedState;
    struct __TISInputSource *_cachedInputSourceRef;
    BOOL _menuKeyEquivalentNeedsUpdating;
}

+ (id)createDictationMenuItem;
+ (BOOL)isDictationSupported;
+ (id)defaultManager;
- (struct __TISInputSource *)_inputSourceRef;
- (BOOL)_dictationIsAllowed;
- (BOOL)_dictationIsEnabled;
- (void)_dictationKeyChanged;
- (void)_updateKeyEquivalentForMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)dictationItemSelected:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

