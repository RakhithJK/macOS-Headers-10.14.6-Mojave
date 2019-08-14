//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRImageProvider, NSArray, NSDictionary, NSString;

@interface MRCAMLLayer : NSObject
{
    double x;
    double y;
    double width;
    double height;
    double duration;
    float color[4];
    BOOL hasColor;
    BOOL hasSublayerTransform;
    BOOL hasTransform;
    struct CGPoint anchorPoint;
    double subScaleX;
    double subScaleY;
    double subScaleZ;
    double subRX;
    double subRY;
    double subRZ;
    double subTX;
    double subTY;
    double subTZ;
    double scaleX;
    double scaleY;
    double scaleZ;
    double rX;
    double rY;
    double rZ;
    double tX;
    double tY;
    double tZ;
    double opacity;
    BOOL hasOpacity;
    BOOL masksToBounds;
    MRImageProvider *contents;
    NSString *name;
    NSArray *animations;
    NSArray *sublayers;
    NSDictionary *states;
    NSArray *masks;
}

@property(retain, nonatomic) MRImageProvider *contents; // @synthesize contents;
@property(retain, nonatomic) NSArray *masks; // @synthesize masks;
@property(retain, nonatomic) NSDictionary *states; // @synthesize states;
@property(retain, nonatomic) NSArray *sublayers; // @synthesize sublayers;
@property(retain, nonatomic) NSArray *animations; // @synthesize animations;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void)dealloc;
- (id)init;

@end
