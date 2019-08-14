//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@class HFItem, HMHome, NSSet, UIViewController;
@protocol NSCopying;

@interface HUQuickControlPresentationContext : NSObject <NSCopying>
{
    unsigned long long _colorStyle;
    HFItem<NSCopying> *_item;
    NSSet *_controlItems;
    HMHome *_home;
    UIViewController *_sourceViewController;
    struct CGRect _sourceRect;
}

@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(retain, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long colorStyle; // @synthesize colorStyle=_colorStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

