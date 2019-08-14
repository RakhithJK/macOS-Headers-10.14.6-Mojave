//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPLayoutElement.h"

@class NSFont, NSImage, NSString;

@interface APLPFooterElement : APLPLayoutElement
{
    int variant;
    NSString *leftString;
    NSString *rightString;
    NSFont *rightFont;
    NSFont *leftFont;
    NSImage *image;
    unsigned long long page;
    unsigned long long totalPage;
    unsigned long long groupPage;
    unsigned long long totalGroupPage;
}

- (void).cxx_destruct;
- (id)description;
- (void)draw;
- (struct CGSize)optimumSize;
- (id)pageString;
- (BOOL)recursiveEndResolveWithDataSource:(id)arg1 type:(int)arg2;
- (BOOL)resolveWithDataSource:(id)arg1;
- (BOOL)needsEndResolve;
- (BOOL)canGrowVertically;
- (BOOL)canGrowHorizontally;

@end
