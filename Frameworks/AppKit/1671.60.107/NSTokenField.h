//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSCharacterSet;
@protocol NSTokenFieldDelegate;

@interface NSTokenField : NSTextField
{
    BOOL _reserved1;
    BOOL _reserved2;
    BOOL _reserved3;
    BOOL _reserved4;
    long long _trackingRectTag;
    id _reserved5;
    id _reserved6;
    id _reserved7;
}

+ (id)defaultTokenizingCharacterSet;
+ (double)defaultCompletionDelay;
+ (void)initialize;
- (BOOL)displaysTokenWhileEditing;
- (void)setDisplaysTokenWhileEditing:(BOOL)arg1;
- (id)tokenFieldCell;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)tokenFieldCell:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3;
- (BOOL)tokenFieldCell:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenFieldCell:(id)arg1 readFromPasteboard:(id)arg2;
- (id)tokenFieldCell:(id)arg1 _immediateActionAnimationControllerForRepresentedObject:(id)arg2 inTextView:(id)arg3;
- (BOOL)tokenFieldCell:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenFieldCell:(id)arg1 menuForRepresentedObject:(id)arg2;
- (unsigned long long)tokenFieldCell:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenFieldCell:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenFieldCell:(id)arg1 shouldUseDrawingAttributes:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenFieldCell:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenFieldCell:(id)arg1 tooltipStringForRepresentedObject:(id)arg2;
- (id)tokenFieldCell:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenFieldCell:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenFieldCell:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenFieldCell:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
@property __weak id <NSTokenFieldDelegate> delegate;
- (BOOL)_baselineIsSpecialCasingForMiniFont;
@property(copy) NSCharacterSet *tokenizingCharacterSet;
@property double completionDelay;
@property unsigned long long tokenStyle;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)ns_widgetType;

@end
