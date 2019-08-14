//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSLayoutItem-Protocol.h>

@class NSISEngine, NSISVariable, NSLayoutConstraint, NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMutableArray, NSObservation;

@protocol _UILayoutItem <NSLayoutItem>
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
- (void)_faultInGuidesForConstraint:(NSLayoutConstraint *)arg1;
- (BOOL)_uili_isFocusGuide;
- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (NSISVariable *)_minYVariable;
- (NSISVariable *)_minXVariable;
- (NSISEngine *)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
- (BOOL)_uili_requiresObservationForVariable:(NSISVariable *)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1 forVariable:(NSISVariable *)arg2;
- (NSMutableArray *)_uili_existingBaseFrameVariables;
- (NSMutableArray *)_uili_existingObservationEligibleLayoutVariables;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_minXVariable;
- (void *)_referenceView;

@optional
- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;
@end
