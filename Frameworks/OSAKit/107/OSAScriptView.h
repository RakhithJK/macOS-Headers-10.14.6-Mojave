//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSString, OSAScriptViewPrivate;

@interface OSAScriptView : NSTextView
{
    OSAScriptViewPrivate *_private;
}

+ (void)initialize;
- (void)stopScript:(id)arg1;
- (void)runScript:(id)arg1;
- (void)recordScript:(id)arg1;
- (void)compileScript:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)complete:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)autoIndent:(id)arg1;
- (void)copyFont:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (id)menuForEvent:(id)arg1;
- (id)readablePasteboardTypes;
- (void)setTypingAttributes:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)replaceTextStorage:(id)arg1;
@property unsigned long long indentWidth;
@property BOOL indentsWrappedLines;
@property BOOL wrapsLines;
@property unsigned long long tabWidth;
@property BOOL usesTabs;
@property BOOL usesScriptAssistant;
- (void)_ensureScriptAssistant;
@property(copy) NSString *source;
- (id)scriptAssistant;
- (void)setController:(id)arg1;
- (id)controller;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_commonInit;

@end

