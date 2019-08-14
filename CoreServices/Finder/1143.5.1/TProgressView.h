//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

@interface TProgressView : TUpdateLayerView
{
    struct TNSRef<NSView, void> _statusView;
    struct TNSRef<NSLayoutConstraint, void> _statusViewBottomConstraint;
    struct TNSRef<NSView, void> _errorView;
    struct TNSRef<NSLayoutConstraint, void> _errorViewBottomConstraint;
    struct TNSRef<TUpdateLayerView, void> _separator;
    unsigned long long _timeAddedToWindow;
}

@property(nonatomic) unsigned long long timeAddedToWindow; // @synthesize timeAddedToWindow=_timeAddedToWindow;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hideErrorView;
- (void)showErrorView:(id)arg1 withInitialKeyView:(id)arg2;
- (void)showStatusView:(id)arg1;
- (void)updateConstraints;
@property(readonly, nonatomic) _Bool isShowingStatus; // @dynamic isShowingStatus;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @dynamic separatorHidden;
- (void)initCommon;

@end
