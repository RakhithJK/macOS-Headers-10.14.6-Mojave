//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class NSAttributedString, NSNumber, NSString, UIColor, UIImage, _UIGraphicsLetterpressStyle;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying>
{
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSNumber *drawingStroke;
}

@property(retain, nonatomic) NSNumber *drawingStroke; // @synthesize drawingStroke;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor;
@property(retain, nonatomic) UIImage *background; // @synthesize background;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isEmpty; // @dynamic isEmpty;

@end

