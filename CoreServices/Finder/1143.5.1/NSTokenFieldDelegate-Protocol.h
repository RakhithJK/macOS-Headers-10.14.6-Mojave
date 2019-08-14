//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTextFieldDelegate-Protocol.h"

@class NSArray, NSMenu, NSPasteboard, NSString, NSTokenField;

@protocol NSTokenFieldDelegate <NSTextFieldDelegate>

@optional
- (unsigned long long)tokenField:(NSTokenField *)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 hasMenuForRepresentedObject:(id)arg2;
- (NSMenu *)tokenField:(NSTokenField *)arg1 menuForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 readFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)tokenField:(NSTokenField *)arg1 writeRepresentedObjects:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (id)tokenField:(NSTokenField *)arg1 representedObjectForEditingString:(NSString *)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 editingStringForRepresentedObject:(id)arg2;
- (NSString *)tokenField:(NSTokenField *)arg1 displayStringForRepresentedObject:(id)arg2;
- (NSArray *)tokenField:(NSTokenField *)arg1 shouldAddObjects:(NSArray *)arg2 atIndex:(unsigned long long)arg3;
- (NSArray *)tokenField:(NSTokenField *)arg1 completionsForSubstring:(NSString *)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@end

