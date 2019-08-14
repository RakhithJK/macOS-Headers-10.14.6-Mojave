//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    BOOL _fadeInComponents;
    BOOL _enableViewportDebugging;
    BOOL _testingConditionEnabled;
    NSString *_contentSizeCategory;
    unsigned long long _presentationMode;
    struct CGSize _canvasSize;
}

@property(nonatomic) BOOL testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(nonatomic) BOOL enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) BOOL fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) BOOL fadeWhenTransitioning;

@end

