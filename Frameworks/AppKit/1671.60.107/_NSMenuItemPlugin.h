//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSValueBinderPlugin.h>

__attribute__((visibility("hidden")))
@interface _NSMenuItemPlugin : _NSValueBinderPlugin
{
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (BOOL)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(char *)arg3;
- (id)objectMechanismsRequired;
- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (void)actionHasBegun:(id)arg1 sender:(id)arg2;
- (BOOL)needsAction;

@end

