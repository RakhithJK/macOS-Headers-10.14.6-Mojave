//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardMenuView.h>

@class NSArray, NSMutableArray, UIInputSwitcherGestureState;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherView : UIKeyboardMenuView
{
    NSMutableArray *m_inputModes;
    NSArray *m_inputSwitcherItems;
    BOOL m_isForDictation;
    UIInputSwitcherGestureState *m_gestureState;
    BOOL _messagesWriteboardFromSwitcher;
    BOOL _fileReportFromSwitcher;
    BOOL _showsSwitches;
}

+ (id)activeInstance;
+ (id)sharedInstance;
@property(nonatomic) BOOL showsSwitches; // @synthesize showsSwitches=_showsSwitches;
@property(nonatomic) BOOL fileReportFromSwitcher; // @synthesize fileReportFromSwitcher=_fileReportFromSwitcher;
@property(nonatomic) BOOL messagesWriteboardFromSwitcher; // @synthesize messagesWriteboardFromSwitcher=_messagesWriteboardFromSwitcher;
@property(readonly, nonatomic) NSArray *inputModes; // @synthesize inputModes=m_inputModes;
- (id)buttonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3 isForDictation:(BOOL)arg4 tapAction:(CDUnknownBlockType)arg5;
- (BOOL)_isHandBiasSwitchVisible;
- (void)switchAction;
- (void)customizeCell:(id)arg1 forItemAtIndex:(unsigned long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSelectedIndex;
- (id)defaultInputMode;
- (id)_itemWithIdentifier:(id)arg1;
- (struct CGSize)preferredSize;
- (unsigned long long)numberOfItems;
- (void)willFadeForSelectionAtIndex:(unsigned long long)arg1;
- (void)willFade;
- (void)willShow;
- (BOOL)shouldShow;
- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;
- (void)selectPreviousInputMode;
- (id)previousInputMode;
- (void)selectNextInputMode;
- (id)nextInputMode;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (BOOL)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)_segmentControlValueDidChange:(id)arg1;
- (void)selectInputMode:(id)arg1;
- (void)setInputMode:(id)arg1;
- (void)fadeWithDelay:(double)arg1;
- (void)selectRowForInputMode:(id)arg1;
- (long long)_indexOfInputSwitcherItemWithIdentifier:(id)arg1;
- (BOOL)shouldShowSelectionExtraViewForIndexPath:(id)arg1;
- (id)selectedInputMode;
- (void)_reloadInputSwitcherItems;
- (void)reloadInputModes;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

