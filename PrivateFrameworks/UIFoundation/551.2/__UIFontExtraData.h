//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSString;

@interface __UIFontExtraData : NSObject
{
    NSCharacterSet *_coveredCharacterSet;
    double _ascender;
    double _descender;
    double _lineHeight;
    double _lineGap;
    struct {
        unsigned int _isSystemFont:1;
        unsigned int _hasKernPair:1;
        unsigned int _unused:1;
        unsigned int _isIBTextStyleFont:1;
        unsigned int _isIBScaledFont:1;
    } _fFlags;
    NSString *_textStyleForScaling;
    double _pointSizeForScaling;
    double _maximumPointSizeAfterScaling;
}

- (void)dealloc;
- (id)initWithFont:(id)arg1;

@end
