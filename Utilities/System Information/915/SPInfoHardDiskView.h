//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPInfoView.h"

@class NSScrollView, SPInfoDisksView;

@interface SPInfoHardDiskView : SPInfoView
{
    NSScrollView *_scrollView;
    SPInfoDisksView *_baseView;
}

+ (id)createFromNib;
@property(readonly) NSScrollView *disksScroller; // @synthesize disksScroller=_scrollView;
- (void)loadData;

@end

