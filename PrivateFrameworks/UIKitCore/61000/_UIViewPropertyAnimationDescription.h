//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIView;

@interface _UIViewPropertyAnimationDescription : NSObject
{
    NSMutableDictionary *_updates;
    UIView *_view;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) NSMutableDictionary *updates; // @synthesize updates=_updates;
- (void).cxx_destruct;
- (void)_addUpdate:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

