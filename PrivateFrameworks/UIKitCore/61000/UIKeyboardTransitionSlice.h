//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardTransitionSlice : NSObject
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    UIKBCacheToken *_startToken;
    UIKBCacheToken *_endToken;
    BOOL _shiftContents;
    BOOL _delayCrossfade;
    int _normalization;
}

+ (id)sliceWithStart:(struct CGRect)arg1 end:(struct CGRect)arg2;
@property BOOL delayCrossfade; // @synthesize delayCrossfade=_delayCrossfade;
@property int normalization; // @synthesize normalization=_normalization;
@property(retain) UIKBCacheToken *endToken; // @synthesize endToken=_endToken;
@property(retain) UIKBCacheToken *startToken; // @synthesize startToken=_startToken;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
- (id)description;
@property(readonly) BOOL hasGeometry;
- (void)addStartRect:(struct CGRect)arg1 end:(struct CGRect)arg2;
- (void)dealloc;
- (id)init;

@end

