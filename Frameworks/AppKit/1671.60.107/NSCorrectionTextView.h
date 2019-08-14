//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSControl, NSCorrectionPanel, NSCorrectionTextFieldContainer, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface NSCorrectionTextView : NSView
{
    NSCorrectionTextFieldContainer *correctionTextFieldContainer;
    BOOL useDefaultStringAttributes;
    unsigned long long dismissButtonLocation;
    BOOL mouseDown;
    NSControl *controlWithMouseDownEvent;
    NSImage *dismissButtonImage;
    struct CGPoint textOrigin;
    NSCorrectionPanel *correctionPanel;
    NSButton *dismissButton;
    long long correctionPanelType;
}

@property(readonly) long long correctionPanelType; // @synthesize correctionPanelType;
@property NSCorrectionPanel *correctionPanel; // @synthesize correctionPanel;
@property(readonly) unsigned long long dismissButtonLocation; // @synthesize dismissButtonLocation;
@property BOOL useDefaultStringAttributes; // @synthesize useDefaultStringAttributes;
- (id)accessibilityElements;
- (BOOL)selectPreviousCandidate;
- (BOOL)selectNextCandidate;
- (void)setSelectedCandidate:(unsigned long long)arg1;
- (void)setDismissButtonLocation:(unsigned long long)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_dismissButtonIsPressed;
- (BOOL)drawImage:(struct CGRect)arg1;
- (void)setCandidates:(id)arg1 andCorrectionPanelType:(long long)arg2;
- (void)setCorrectionAttributes:(id)arg1;
@property(readonly) BOOL hasSelection; // @dynamic hasSelection;
@property(readonly) NSString *correction; // @dynamic correction;
- (void)_updateFrame;
- (void)_setButtonImage:(id)arg1;
- (double)_extraWidthForViewHeight:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

