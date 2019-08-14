//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent
{
}

- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (BOOL)getModifierState:(id)arg1;
@property(readonly) int charCode;
@property(readonly) int keyCode;
@property(readonly) BOOL altGraphKey;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL ctrlKey;
@property(readonly) unsigned int keyLocation;
@property(readonly) unsigned int location;
@property(readonly, copy) NSString *keyIdentifier;

@end

