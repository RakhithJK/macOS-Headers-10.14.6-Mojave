//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SiriUI/SiriUIBaseSnippetViewController.h>

#import <SiriUI/NSCollectionViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, NSView, NSViewController, SAUIAppPunchOut, SAUIConfirmationOptions;
@protocol SiriUIReusableView, SiriUISnippetViewControllerDelegate;

@interface SiriUISnippetViewController : SiriUIBaseSnippetViewController <NSCollectionViewDelegate>
{
    NSView<SiriUIReusableView> *_headerView;
    NSView<SiriUIReusableView> *_footerView;
    NSView<SiriUIReusableView> *_transparentHeaderView;
    NSView<SiriUIReusableView> *_transparentFooterView;
    BOOL _showAll;
    BOOL _hasPlatter;
    BOOL _hasSash;
    BOOL _stashed;
    BOOL _topKeylineHidden;
    BOOL _wantsConfirmationInsets;
    BOOL _isTransparent;
    BOOL _loading;
    BOOL _confirmed;
    BOOL _cancelled;
    BOOL _virgin;
    BOOL _willAnimateConfirmation;
    BOOL _willAnimateCancellation;
    BOOL _showHeaderChevron;
    BOOL _provisional;
    NSViewController *_supplementaryHeaderViewController;
    NSString *_summaryTitle;
    NSString *_summaryImagePath;
    unsigned long long _minimumVisibleRowCount;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSubtitle;
    NSString *_navigationTitle;
    NSArray *_requestContext;
    SAUIAppPunchOut *_headerPunchOut;
    SAUIAppPunchOut *_snippetPunchOut;
    SAUIConfirmationOptions *_previousConfirmationOptions;
    struct NSEdgeInsets _defaultViewInsets;
}

+ (BOOL)isDragInProgress;
@property(nonatomic, getter=_isProvisional, setter=_setProvisional:) BOOL provisional; // @synthesize provisional=_provisional;
@property(nonatomic) BOOL showHeaderChevron; // @synthesize showHeaderChevron=_showHeaderChevron;
@property(retain, nonatomic, getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:) SAUIConfirmationOptions *previousConfirmationOptions; // @synthesize previousConfirmationOptions=_previousConfirmationOptions;
@property(nonatomic, getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:) BOOL willAnimateCancellation; // @synthesize willAnimateCancellation=_willAnimateCancellation;
@property(nonatomic, getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:) BOOL willAnimateConfirmation; // @synthesize willAnimateConfirmation=_willAnimateConfirmation;
@property(readonly, nonatomic, getter=isVirgin) BOOL virgin; // @synthesize virgin=_virgin;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isConfirmed) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) BOOL wantsConfirmationInsets; // @synthesize wantsConfirmationInsets=_wantsConfirmationInsets;
@property(nonatomic) struct NSEdgeInsets defaultViewInsets; // @synthesize defaultViewInsets=_defaultViewInsets;
@property(retain, nonatomic) SAUIAppPunchOut *snippetPunchOut; // @synthesize snippetPunchOut=_snippetPunchOut;
@property(retain, nonatomic) SAUIAppPunchOut *headerPunchOut; // @synthesize headerPunchOut=_headerPunchOut;
@property(copy, nonatomic) NSArray *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) BOOL topKeylineHidden; // @synthesize topKeylineHidden=_topKeylineHidden;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic, getter=isStashed) BOOL stashed; // @synthesize stashed=_stashed;
@property(nonatomic) unsigned long long minimumVisibleRowCount; // @synthesize minimumVisibleRowCount=_minimumVisibleRowCount;
@property(nonatomic) BOOL hasSash; // @synthesize hasSash=_hasSash;
@property(nonatomic) BOOL hasPlatter; // @synthesize hasPlatter=_hasPlatter;
@property(copy, nonatomic) NSString *summaryImagePath; // @synthesize summaryImagePath=_summaryImagePath;
@property(copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
@property(copy, nonatomic) NSViewController *supplementaryHeaderViewController; // @synthesize supplementaryHeaderViewController=_supplementaryHeaderViewController;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (void)prepareForReuse;
- (unsigned long long)snippetDragSourceTypes;
- (void)confirmButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)headerTapped:(id)arg1;
- (void)_snippetPunchOutButtonTapped;
- (void)reloadData;
@property(nonatomic) BOOL showAll; // @synthesize showAll=_showAll;
@property(readonly, nonatomic) BOOL canBeShortenedWhenStashed;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_transparentFooterView;
- (id)_transparentHeaderView;
- (id)_footerView;
- (id)_headerView;
- (double)desiredHeightForTransparentFooterView;
- (double)desiredHeightForTransparentHeaderView;
- (double)desiredHeightForFooterView;
- (double)desiredHeightForHeaderView;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)_cellDidLayoutSubviews;
- (Class)transparentFooterViewClass;
- (Class)transparentHeaderViewClass;
- (Class)footerViewClass;
- (Class)headerViewClass;
@property(copy, nonatomic) NSString *subtitle;
- (void)setManageBackgroundColor:(BOOL)arg1;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (void)willConfirm;
- (void)willCancel;
- (id)alternativeAceCommandsToPerformIfNotExposingViews;
- (void)_snippetViewControllerWillBeRemoved;
- (id)_privateDelegate;
- (BOOL)_hasConfirmationButtons;
- (BOOL)_hasConfirmationOrCancelledInsets;
- (long long)_replacementAnimation;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (void)_setVirgin:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isFullWindowWidth;
- (BOOL)isMemoryIntensive;
- (BOOL)removedAfterDialogProgresses;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SiriUISnippetViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

