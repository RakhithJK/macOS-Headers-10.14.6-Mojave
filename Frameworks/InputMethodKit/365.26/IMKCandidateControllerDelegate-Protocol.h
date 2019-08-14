//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IMKCandidateController, IMKCandidateData, IMKCandidateDefinitionUnit, NSArray, NSAttributedString, NSString, NSView;

@protocol IMKCandidateControllerDelegate
- (id)textClient;
- (long long)windowType;
- (NSString *)displayMethod;
- (NSArray *)sortingMethods;
- (NSArray *)candidatesForSortingMethod:(NSString *)arg1;

@optional
- (BOOL)selectionShouldBeReflectedInTouchBar;
- (NSString *)selectedCandidateKey:(IMKCandidateController *)arg1;
- (void)shouldUpdateForPressAndHold:(IMKCandidateDefinitionUnit *)arg1;
- (BOOL)touchesEndedOutsideView;
- (void)touchesEnded;
- (void)scrubbedCandidate:(IMKCandidateDefinitionUnit *)arg1;
- (NSAttributedString *)currentInlineText;
- (NSArray *)localizedSortingMethods;
- (double)candidateThicknessForFontSize:(double)arg1;
- (NSString *)defaultDisplayMethod;
- (NSView *)informationView;
- (struct CGPoint)topWindowPositionForFrame:(struct CGRect)arg1;
- (BOOL)shouldUpdateExistingCandidates;
- (void)didHandleCandidateSelectionChanged:(IMKCandidateDefinitionUnit *)arg1;
- (void)didHandleCandidateSelected:(IMKCandidateDefinitionUnit *)arg1;
- (IMKCandidateData *)candidateDataForDisplayMethod:(NSString *)arg1 candidateController:(IMKCandidateController *)arg2;
- (IMKCandidateData *)candidateDataForSortingMethod:(NSString *)arg1;
@end

