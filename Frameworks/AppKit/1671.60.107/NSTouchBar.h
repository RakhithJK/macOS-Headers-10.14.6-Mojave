//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAnimatablePropertyContainer-Protocol.h>
#import <AppKit/NSCoding-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTouchBarCustomizableConfiguration, NSTouchBarItem;
@protocol NSTouchBarDelegate;

@interface NSTouchBar : NSObject <NSAnimatablePropertyContainer, NSCoding>
{
    id _configuration;
    NSString *_principalItemIdentifier;
    NSSet *_templateItems;
    id <NSTouchBarDelegate> _delegate;
    NSMutableDictionary *_itemCache;
    long long _visibilityCount;
    unsigned int _isBuildingItems:1;
    unsigned int _suppressesLessFocusedTouchBars:1;
    unsigned int _suppressesMoreFocusedTouchBars:1;
    unsigned int _suppressedByLessFocusedTouchBars:1;
    unsigned int _suppressedByMoreFocusedTouchBars:1;
    id _fbReserved;
}

+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (BOOL)automaticRTLMirroringSupported;
+ (id)keyPathsForValuesAffectingItems;
+ (id)keyPathsForValuesAffectingItemIdentifiers;
+ (void)resetUserDefinedTouchBar;
+ (id)userDefinedTouchBar;
+ (id)pathToUserDefinedTouchBar;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByMoreFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByLessFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesMoreFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesLessFocusedBars;
+ (void)setAllowsTouchesDuringTrackingLoops:(BOOL)arg1;
+ (BOOL)allowsTouchesDuringTrackingLoops;
+ (id)defaultAnimationForKey:(id)arg1;
+ (void)minimizeSystemModalTouchBar:(id)arg1;
+ (void)dismissSystemModalTouchBar:(id)arg1;
+ (void)presentSystemModalTouchBar:(id)arg1 placement:(long long)arg2 systemTrayItemIdentifier:(id)arg3;
+ (void)presentSystemModalTouchBar:(id)arg1 systemTrayItemIdentifier:(id)arg2;
+ (id)keyPathsForValuesAffectingDefaultItems;
+ (id)keyPathsForValuesAffectingCustomizationDefaultItemIdentifiers;
+ (id)keyPathsForValuesAffectingEscapeKeyReplacementItem;
+ (id)touchBarWithDelegate:(id)arg1 customizationIdentifier:(id)arg2 defaultItemIdentifiers:(id)arg3 allowedItemIdentifiers:(id)arg4;
+ (id)touchBarWithDelegate:(id)arg1 itemIdentifiers:(id)arg2;
+ (id)touchBarWithItems:(id)arg1;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly, getter=isVisible) BOOL visible;
- (void)setTouchBarLayoutDirection:(long long)arg1;
- (long long)touchBarLayoutDirection;
- (id)itemForIdentifier:(id)arg1;
- (void)_purgeCacheIfNecessary;
- (BOOL)_didItemsReallyChange:(id)arg1;
@property(copy) NSString *escapeKeyReplacementItemIdentifier;
@property(copy) NSString *principalItemIdentifier;
@property(copy) NSSet *templateItems;
- (id)items;
@property(copy) NSArray *customizationRequiredItemIdentifiers;
@property(copy) NSArray *customizationAllowedItemIdentifiers;
@property(copy) NSString *customizationIdentifier;
@property(copy) NSArray *defaultItemIdentifiers;
@property(readonly, copy) NSTouchBarCustomizableConfiguration *configuration; // @dynamic configuration;
@property(readonly, copy) NSArray *itemIdentifiers;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property __weak id <NSTouchBarDelegate> delegate;
- (id)_playgroundPreviewView;
- (id)_playgroundQuickLookView;
@property(getter=isSuppressedByMoreFocusedTouchBars) BOOL suppressedByMoreFocusedTouchBars;
@property(getter=isSuppressedByLessFocusedTouchBars) BOOL suppressedByLessFocusedTouchBars;
@property BOOL suppressesMoreFocusedBars;
@property BOOL suppressesLessFocusedBars;
@property(readonly) CAMediaTimingFunction *animationTimingFunction;
@property(readonly) double animationDuration;
- (void)_persistWithItemIdentifiers:(id)arg1 toDomain:(id)arg2;
- (void)_resetCustomization;
- (id)animationForKey:(id)arg1;
@property(copy) NSDictionary *animations;
- (id)animator;
- (Class)_animatorClass;
- (double)minWidthGivenVisualCenterX:(double)arg1;
- (void)setDefaultItems:(id)arg1;
- (id)defaultItems;
- (void)setItemIdentifiers:(id)arg1;
- (void)setCustomizationDefaultItemIdentifiers:(id)arg1;
- (id)customizationDefaultItemIdentifiers;
@property(retain) NSTouchBarItem *escapeKeyReplacementItem;

@end

