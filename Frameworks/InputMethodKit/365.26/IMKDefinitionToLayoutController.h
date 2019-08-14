//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMKCandidateController, IMKCandidateData, IMKCandidateUIProperties, IMKDefinitionToLayoutConstraint, IMKLayout;

@interface IMKDefinitionToLayoutController : NSObject
{
    BOOL _verticallyAligned;
    Class _layoutUnitClass;
    IMKCandidateController *_candidateController;
    IMKDefinitionToLayoutConstraint *_constraints;
    IMKCandidateData *_candidateData;
    IMKCandidateUIProperties *_UIProperties;
}

@property(retain, nonatomic) IMKCandidateUIProperties *UIProperties; // @synthesize UIProperties=_UIProperties;
@property(retain, nonatomic) IMKCandidateData *candidateData; // @synthesize candidateData=_candidateData;
@property(retain, nonatomic) IMKDefinitionToLayoutConstraint *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) Class layoutUnitClass; // @synthesize layoutUnitClass=_layoutUnitClass;
@property(nonatomic, getter=isVerticallyAligned) BOOL verticallyAligned; // @synthesize verticallyAligned=_verticallyAligned;
@property(nonatomic) IMKCandidateController *candidateController; // @synthesize candidateController=_candidateController;
@property(readonly, nonatomic) IMKLayout *layout;
- (id)layoutForHorizontallyAligned;
- (id)layoutForVerticallyAligned;
- (id)layoutForSingleRowType;
- (id)layoutForSingleRowTypeWithSimilarWidth;
- (id)layoutForSingleRowPressAndHoldType;
- (void)removeLastLineIfEmpty:(id)arg1;
- (void)dealloc;
- (id)init;

@end

