//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingSwipeSequence : NSObject
{
    UIScrollView *_scrollView;
    unsigned long long _headingLock;
    long long _consecutiveSwipeCount;
}

@property(nonatomic) long long consecutiveSwipeCount; // @synthesize consecutiveSwipeCount=_consecutiveSwipeCount;
@property(nonatomic) unsigned long long headingLock; // @synthesize headingLock=_headingLock;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;

@end

