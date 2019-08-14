//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface _ABMonogramOptions : NSObject
{
    double _diameter;
    NSColor *_foregroundColor;
    NSColor *_backgroundColor;
    NSColor *_borderColor;
    BOOL _vibrant;
}

@property(getter=isVibrant) BOOL vibrant; // @synthesize vibrant=_vibrant;
@property(copy) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy) NSColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property double diameter; // @synthesize diameter=_diameter;
- (void)dealloc;

@end
