//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject
{
    UIViewController *_viewController;
    long long _level;
}

@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 atLevel:(long long)arg2;

@end

