//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying>
{
    UIFont *_font;
    double _minimumFontSize;
    double _actualFontSize;
    double _lineSpacing;
    long long _lineBreakMode;
    long long _baselineAdjustment;
    double _trackingAdjustment;
    double _minimumTrackingAdjustment;
    double _actualTrackingAdjustment;
    long long _alignment;
    BOOL _includeEmoji;
    struct CGRect _truncationRect;
    BOOL _drawUnderline;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

