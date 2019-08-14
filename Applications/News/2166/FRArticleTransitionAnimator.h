//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class FRNavigationController, NSString, SXVideoPlayerViewController, UIImage, UIImageView, UINavigationBar, UIView;
@protocol FRArticleTransitionAnimatorArticle, FRArticleTransitionAnimatorCell, OS_dispatch_group;

@interface FRArticleTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _fadeInExtraContent;
    BOOL _shouldCrossFade;
    BOOL _isViewObscured;
    BOOL _fullWidthAnimation;
    BOOL _endOfArticle;
    BOOL _topOfFeed;
    BOOL _isVideoCell;
    unsigned long long _transitionType;
    SXVideoPlayerViewController *_videoPlayerViewController;
    UIImage *_thumbnailImage;
    id <FRArticleTransitionAnimatorCell> _cell;
    id <FRArticleTransitionAnimatorArticle> _article;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_group> *_animationGroup;
    CDUnknownBlockType _animationBlock;
    CDUnknownBlockType _cleanupBlock;
    unsigned long long _contentType;
    UIView *_componentView;
    UIView *_componentContentView;
    UIImageView *_thumbnailView;
    FRNavigationController *_feedNavigationController;
    FRNavigationController *_articleNavigationController;
    UINavigationBar *_feedNavigationBar;
    UINavigationBar *_articleNavigationBar;
    UIView *_feedView;
    UIView *_articleView;
    UIView *_feedToolbar;
    UIView *_articleToolbar;
    UIView *_feedSectionsBar;
    UIView *_containerView;
    struct CGRect _thumbnailFrame;
    struct CGRect _thumbnailContentFrame;
    struct CGRect _componentViewFrame;
    struct CGRect _componentViewContentFrame;
    struct CGRect _componentViewCrop;
}

@property(nonatomic) BOOL isVideoCell; // @synthesize isVideoCell=_isVideoCell;
@property(nonatomic) BOOL topOfFeed; // @synthesize topOfFeed=_topOfFeed;
@property(nonatomic) BOOL endOfArticle; // @synthesize endOfArticle=_endOfArticle;
@property(nonatomic) BOOL fullWidthAnimation; // @synthesize fullWidthAnimation=_fullWidthAnimation;
@property(nonatomic) BOOL isViewObscured; // @synthesize isViewObscured=_isViewObscured;
@property(nonatomic) BOOL shouldCrossFade; // @synthesize shouldCrossFade=_shouldCrossFade;
@property(nonatomic) BOOL fadeInExtraContent; // @synthesize fadeInExtraContent=_fadeInExtraContent;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *feedSectionsBar; // @synthesize feedSectionsBar=_feedSectionsBar;
@property(retain, nonatomic) UIView *articleToolbar; // @synthesize articleToolbar=_articleToolbar;
@property(retain, nonatomic) UIView *feedToolbar; // @synthesize feedToolbar=_feedToolbar;
@property(retain, nonatomic) UIView *articleView; // @synthesize articleView=_articleView;
@property(retain, nonatomic) UIView *feedView; // @synthesize feedView=_feedView;
@property(retain, nonatomic) UINavigationBar *articleNavigationBar; // @synthesize articleNavigationBar=_articleNavigationBar;
@property(retain, nonatomic) UINavigationBar *feedNavigationBar; // @synthesize feedNavigationBar=_feedNavigationBar;
@property(nonatomic) __weak FRNavigationController *articleNavigationController; // @synthesize articleNavigationController=_articleNavigationController;
@property(nonatomic) __weak FRNavigationController *feedNavigationController; // @synthesize feedNavigationController=_feedNavigationController;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *componentContentView; // @synthesize componentContentView=_componentContentView;
@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(nonatomic) struct CGRect componentViewCrop; // @synthesize componentViewCrop=_componentViewCrop;
@property(nonatomic) struct CGRect componentViewContentFrame; // @synthesize componentViewContentFrame=_componentViewContentFrame;
@property(nonatomic) struct CGRect componentViewFrame; // @synthesize componentViewFrame=_componentViewFrame;
@property(nonatomic) struct CGRect thumbnailContentFrame; // @synthesize thumbnailContentFrame=_thumbnailContentFrame;
@property(nonatomic) struct CGRect thumbnailFrame; // @synthesize thumbnailFrame=_thumbnailFrame;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *animationGroup; // @synthesize animationGroup=_animationGroup;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <FRArticleTransitionAnimatorArticle> article; // @synthesize article=_article;
@property(retain, nonatomic) id <FRArticleTransitionAnimatorCell> cell; // @synthesize cell=_cell;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(readonly, nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
- (void).cxx_destruct;
- (struct CGRect)_contentsRectForInnerFrame:(struct CGRect)arg1 outerFrame:(struct CGRect)arg2;
- (unsigned long long)thumbnailTransitionType;
- (CDUnknownBlockType)snapshotNavigationBarButtomItems:(id)arg1 navigationBar:(id)arg2 snapshotBarButtomItems:(id *)arg3;
- (void)prepareTransitionWithFeedViewController:(id)arg1 articleViewController:(id)arg2 containerView:(id)arg3;
- (double)_statusBarOffsetForFeedViewController:(id)arg1 articleViewController:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithCell:(id)arg1 article:(id)arg2 fullWidthAnimation:(BOOL)arg3 topOfFeed:(BOOL)arg4 endOfArticle:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

