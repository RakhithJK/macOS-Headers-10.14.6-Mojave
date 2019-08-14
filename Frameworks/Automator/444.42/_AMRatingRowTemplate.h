//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSLevelIndicator, NSPopUpButton, NSString;

@interface _AMRatingRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_operatorTypePopup;
    NSLevelIndicator *_ratingIndicator;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
@property(retain) NSLevelIndicator *ratingIndicator; // @synthesize ratingIndicator=_ratingIndicator;
@property(retain) NSPopUpButton *operatorTypePopup; // @synthesize operatorTypePopup=_operatorTypePopup;
@property(retain) NSPopUpButton *leftExpressionPopup; // @synthesize leftExpressionPopup=_leftExpressionPopup;
@property BOOL hasCreatedViews; // @synthesize hasCreatedViews=_hasCreatedViews;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end

