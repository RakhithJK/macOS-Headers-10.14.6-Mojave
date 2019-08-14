//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutGuide : UIView <UILayoutSupport>
{
    BOOL _allowsArchivingAsSubview;
    BOOL _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
    NSString *_archivedIdentifier;
}

+ (id)_horizontalLayoutGuide;
+ (id)_verticalLayoutGuide;
+ (id)classFallbacksForKeyedArchiver;
@property(nonatomic, getter=isHorizontal, setter=_setHorizontal:) BOOL _horizontal; // @synthesize _horizontal;
@property(copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier; // @synthesize _archivedIdentifier;
@property(nonatomic, setter=_setAllowsArchivingAsSubview:) BOOL _allowsArchivingAsSubview; // @synthesize _allowsArchivingAsSubview;
@property(copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
- (id)_layoutVariablesWithAmbiguousValue;
- (BOOL)_isFloatingLayoutItem;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) double length;
- (void)_setUpCounterDimensionConstraint;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly) NSLayoutYAxisAnchor *bottomAnchor; // @dynamic bottomAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSLayoutDimension *heightAnchor; // @dynamic heightAnchor;
@property(readonly) Class superclass;
@property(readonly) NSLayoutYAxisAnchor *topAnchor; // @dynamic topAnchor;

@end

