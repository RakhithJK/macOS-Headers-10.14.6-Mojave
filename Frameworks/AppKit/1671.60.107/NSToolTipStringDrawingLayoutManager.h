//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLayoutManager;

@interface NSToolTipStringDrawingLayoutManager : NSObject
{
    NSDictionary *_wrappingAttributes;
    NSLayoutManager *_layoutManager;
}

+ (struct CGSize)sizeForDisplayingAttributedString:(id *)arg1;
+ (id)sharedToolTipStringDrawingLayoutManager;
@property(readonly, retain) NSDictionary *wrappingAttributes; // @synthesize wrappingAttributes=_wrappingAttributes;
- (void)dealloc;
- (struct CGSize)_sizeWithSize:(struct CGSize)arg1 attributedString:(id *)arg2;
- (id)_wrappingAttributes;

@end

