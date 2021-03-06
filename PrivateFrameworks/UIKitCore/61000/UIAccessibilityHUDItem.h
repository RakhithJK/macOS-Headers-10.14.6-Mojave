//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying>
{
    BOOL _disabledAppearance;
    BOOL _flattenImage;
    BOOL _scaleImage;
    NSString *_title;
    UIImage *_image;
    UIView *_customView;
    struct UIEdgeInsets _imageInsets;
}

+ (id)HUDItemForBarButtonItem:(id)arg1;
+ (id)HUDItemForTabBarItem:(id)arg1;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL scaleImage; // @synthesize scaleImage=_scaleImage;
@property(nonatomic) BOOL flattenImage; // @synthesize flattenImage=_flattenImage;
@property(nonatomic) BOOL disabledAppearance; // @synthesize disabledAppearance=_disabledAppearance;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 scaleImage:(BOOL)arg4;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3;

@end

