//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSValue;
@protocol NSObject;

@interface NSAccessibilityCustomChooserItemResult : NSObject
{
    id <NSObject> _targetElement;
    NSValue *_targetRange;
    NSString *_descriptionOverride;
}

@property(copy, nonatomic) NSString *descriptionOverride; // @synthesize descriptionOverride=_descriptionOverride;
@property(retain, nonatomic) NSValue *targetRange; // @synthesize targetRange=_targetRange;
@property(nonatomic) __weak id <NSObject> targetElement;
- (void)dealloc;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;

@end
