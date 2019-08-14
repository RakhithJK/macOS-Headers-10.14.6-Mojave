//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRArticlePageViewControllerTransitioning-Protocol.h"
#import "FRScrollPositionProviding-Protocol.h"
#import "FRStoryboardRestorableViewController-Protocol.h"

@class FCArticle, FRArticleViewContext, FRArticleViewHeadlineContext, NSString, UIColor, UIScrollView;
@protocol FRArticleContentViewControllerDataSource, FRArticleContentViewControllerDelegate, FRFeldsparContext, NSCoding;

@interface FRArticleContentViewController : UIViewController <FRStoryboardRestorableViewController, FRArticlePageViewControllerTransitioning, FRScrollPositionProviding>
{
    BOOL _isActiveArticleViewController;
    BOOL _prefersChromeHidden;
    BOOL _transparentNavigationBar;
    id <FRArticleContentViewControllerDelegate> _delegate;
    FCArticle *_article;
    FRArticleViewHeadlineContext *_articleHeadlineContext;
    FRArticleViewContext *_articleViewContext;
    FRArticleViewHeadlineContext *_visitableItem;
    id <FRArticleContentViewControllerDataSource> _dataSource;
    id <NSCoding> _scrollPositionObject;
    id <FRFeldsparContext> _context;
    struct UIEdgeInsets _surroundingToolbarInsets;
}

+ (id)storyboardIdentifier;
@property(nonatomic) BOOL transparentNavigationBar; // @synthesize transparentNavigationBar=_transparentNavigationBar;
@property(readonly, nonatomic) id <FRFeldsparContext> context; // @synthesize context=_context;
@property(retain, nonatomic) id <NSCoding> scrollPositionObject; // @synthesize scrollPositionObject=_scrollPositionObject;
@property(readonly, nonatomic) __weak id <FRArticleContentViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets surroundingToolbarInsets; // @synthesize surroundingToolbarInsets=_surroundingToolbarInsets;
@property(readonly, nonatomic) FRArticleViewHeadlineContext *visitableItem; // @synthesize visitableItem=_visitableItem;
@property(readonly, nonatomic) FRArticleViewContext *articleViewContext; // @synthesize articleViewContext=_articleViewContext;
@property(readonly, nonatomic) FRArticleViewHeadlineContext *articleHeadlineContext; // @synthesize articleHeadlineContext=_articleHeadlineContext;
@property(retain, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(nonatomic) __weak id <FRArticleContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL prefersChromeHidden; // @synthesize prefersChromeHidden=_prefersChromeHidden;
@property(nonatomic) BOOL isActiveArticleViewController; // @synthesize isActiveArticleViewController=_isActiveArticleViewController;
- (void).cxx_destruct;
- (void)presentSourceChannelForLoadedHeadline;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setupWithPreviousScrollPosition:(id)arg1;
- (void)scrollPositionObjectWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)scrollIdentifier;
@property(readonly, nonatomic) UIColor *documentColor;
- (void)increaseTextSizeWithFontCategory:(id)arg1;
- (void)decreaseTextSizeWithFontCategory:(id)arg1;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (BOOL)canShowMoreArticles;
- (void)switchToMoreArticles;
- (id)referencedArticleID;
- (id)articleID;
- (void)setupContentWithArticle:(id)arg1 headlineContext:(id)arg2 context:(id)arg3 articleViewContext:(id)arg4 dataSource:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

