//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class FilterImageDoc;

@interface FilterImagePrintView : NSView
{
    FilterImageDoc *mImageDoc;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)printJobTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 document:(id)arg2;

@end

