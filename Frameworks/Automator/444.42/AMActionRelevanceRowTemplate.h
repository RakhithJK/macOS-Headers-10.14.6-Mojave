//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton;

@interface AMActionRelevanceRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *leftExpressionPopup;
    NSPopUpButton *operatorPopup;
    NSPopUpButton *rightExpressionPopup;
    BOOL hasCreatedViews;
}

@property(retain) NSPopUpButton *rightExpressionPopup; // @synthesize rightExpressionPopup;
@property(retain) NSPopUpButton *operatorPopup; // @synthesize operatorPopup;
@property(retain) NSPopUpButton *leftExpressionPopup; // @synthesize leftExpressionPopup;
@property BOOL hasCreatedViews; // @synthesize hasCreatedViews;
- (void).cxx_destruct;
- (double)matchForPredicate:(id)arg1;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;

@end

