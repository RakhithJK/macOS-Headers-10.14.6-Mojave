//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
{
    BOOL _hasBeenUsed;
    id <UISplitViewControllerImpl> _impl;
}

@property(readonly, nonatomic, getter=_hasBeenUsed) BOOL hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic, getter=_impl, setter=_setImpl:) __weak id <UISplitViewControllerImpl> impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (void)_wasUsed;
- (SEL)action;
- (id)target;
- (void)_setOwningNavigationItem:(id)arg1;

@end

