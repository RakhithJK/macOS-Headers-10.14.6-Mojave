//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSTextFieldDelegate-Protocol.h"

@class NSNotification;

@protocol NSComboBoxDelegate <NSTextFieldDelegate>

@optional
- (void)comboBoxSelectionIsChanging:(NSNotification *)arg1;
- (void)comboBoxSelectionDidChange:(NSNotification *)arg1;
- (void)comboBoxWillDismiss:(NSNotification *)arg1;
- (void)comboBoxWillPopUp:(NSNotification *)arg1;
@end

