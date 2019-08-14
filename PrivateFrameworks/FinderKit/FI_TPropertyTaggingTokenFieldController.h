//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyScrollViewController.h>

__attribute__((visibility("hidden")))
@interface FI_TPropertyTaggingTokenFieldController : FI_IPropertyScrollViewController
{
    struct TNSRef<NSArray<FI_TTagInfo *>, void> _origTagInfos;
    struct TNotificationCenterObserver _tokenFieldDidEndEditingObserver;
    struct TNotificationCenterObserver _forceTokenFieldToCommitObserver;
    struct TNSRef<NSArray<NSLayoutConstraint *>, void> _minAndMaxHeightConstraints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)arg1;
- (void)flush;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)setSubview:(id)arg1;
- (void)configureMinRowCount:(double)arg1 maxRowCount:(double)arg2;
- (void)setShowSuggestionsTableInMenu:(_Bool)arg1;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

@end

