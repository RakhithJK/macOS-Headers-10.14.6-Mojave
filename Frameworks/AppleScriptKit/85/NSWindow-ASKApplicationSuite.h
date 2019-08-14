//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface NSWindow (ASKApplicationSuite)
- (id)handleShowScriptCommand:(id)arg1;
- (id)handleUpdateScriptCommand:(id)arg1;
- (id)handleRegisterScriptCommand:(id)arg1;
- (id)handleHideScriptCommand:(id)arg1;
- (id)handleCenterScriptCommand:(id)arg1;
- (id)handleActivateScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (unsigned long long)objectIndex_ask;
- (id)valueInDrawersWithUniqueID:(long long)arg1;
- (void)removeMouseTracker:(id)arg1;
- (void)addMouseTracker:(id)arg1;
- (void)enableEventHandler_ask:(id)arg1;
- (id)views;
- (id)textViews;
- (id)textFields;
- (id)tabViews;
- (id)tableViews;
- (id)tableHeaderViews;
- (id)steppers;
- (id)splitViews;
- (id)sliders;
- (id)secureTextFields;
- (id)scrollViews;
- (id)scrollers;
- (id)rulerViews;
- (id)progressIndicators;
- (id)popupButtons;
- (id)outlineViews;
- (id)openGLViews;
- (id)matrices;
- (id)imageViews;
- (id)forms;
- (id)controls;
- (id)comboBoxes;
- (id)colorWells;
- (id)clipViews;
- (id)buttons;
- (id)browsers;
- (id)boxes;
- (void)setMinSize_ask:(id)arg1;
- (id)minSize_ask;
- (void)setMaxSize_ask:(id)arg1;
- (id)maxSize_ask;
- (void)setSize_ask:(id)arg1;
- (id)size_ask;
- (void)setPosition_ask:(id)arg1;
- (id)position_ask;
- (void)setBounds_ask:(id)arg1;
- (id)bounds_ask;
- (void)setIsReleasedWhenClosed:(BOOL)arg1;
- (void)setIsOpaque:(BOOL)arg1;
- (void)setIsMainWindow:(BOOL)arg1;
- (void)setIsKeyWindow:(BOOL)arg1;
- (void)setIsExcludedFromWindowsMenu:(BOOL)arg1;
- (void)setIsDocumentEdited:(BOOL)arg1;
- (void)setIsAutodisplay:(BOOL)arg1;
- (void)setFirstResponder:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)currentFieldEditor;
- (BOOL)needsDisplay;
- (id)objectName_ask;
@end

