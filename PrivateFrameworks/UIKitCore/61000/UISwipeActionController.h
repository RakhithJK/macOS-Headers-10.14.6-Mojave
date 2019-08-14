//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSString, UIScrollView, UISwipeActionsConfiguration, UISwipeHandler, UIView;
@protocol UISwipeActionHost;

@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver>
{
    id <UISwipeActionHost> _swipeActionHost;
    NSIndexPath *_swipedIndexPath;
    unsigned long long _style;
    UISwipeActionsConfiguration *_incomingSwipeActionsConfiguration;
    UIScrollView *_containerView;
    UISwipeHandler *_swipeHandler;
    NSMutableDictionary *_swipeOccurrences;
}

@property(retain, nonatomic) NSMutableDictionary *swipeOccurrences; // @synthesize swipeOccurrences=_swipeOccurrences;
@property(retain, nonatomic) UISwipeHandler *swipeHandler; // @synthesize swipeHandler=_swipeHandler;
@property(nonatomic) __weak UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration; // @synthesize incomingSwipeActionsConfiguration=_incomingSwipeActionsConfiguration;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
@property(nonatomic) __weak id <UISwipeActionHost> swipeActionHost; // @synthesize swipeActionHost=_swipeActionHost;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)swipeHandler:(id)arg1 didConfirmSwipeWithInfo:(CDStruct_8b31afb2)arg2;
- (void)swipeHandler:(id)arg1 didGenerateSwipeWithInfo:(CDStruct_8b31afb2)arg2;
- (void)swipeHandlerDidBeginSwipe:(id)arg1;
- (BOOL)swipeHandler:(id)arg1 mayBeginSwipeAtLocation:(struct CGPoint)arg2 withDirection:(unsigned long long)arg3;
- (void)swipeOccurrenceDidFinish:(id)arg1;
- (void)swipeOccurrence:(id)arg1 willFinishWithDeletion:(BOOL)arg2;
- (BOOL)touchAtLocationShouldDismissSwipedItem:(struct CGPoint)arg1 isTouchUp:(BOOL)arg2;
- (CDStruct_db0d4e35)configureForSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 startingAtTouchLocation:(struct CGPoint)arg3;
- (id)_currentSwipeOccurrence;
@property(readonly, nonatomic) UIView *swipedItemView;
- (void)updateLayout;
- (void)updateSwipedIndexPath:(id)arg1;
- (void)_resetSwipedItemAnimated:(BOOL)arg1 swipeInfo:(CDStruct_8b31afb2)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetSwipedItemAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)swipeItemAtIndexPath:(id)arg1 configuration:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) BOOL swipeEnabled;
- (void)dealloc;
- (id)initWithSwipeActionHost:(id)arg1 style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

