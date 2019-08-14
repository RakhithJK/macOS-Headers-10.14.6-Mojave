//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMAction.h>

#import <Automator/NSCopying-Protocol.h>
#import <Automator/NSSecureCoding-Protocol.h>
#import <Automator/NSTokenFieldDelegate-Protocol.h>

@class NSArray, NSBundle, NSMutableDictionary, NSString, NSView;

@interface AMBundleAction : AMAction <NSTokenFieldDelegate, NSCopying, NSSecureCoding>
{
    NSView *_view;
    NSBundle *_bundle;
    NSArray *_topLevelObjects;
    id _reserved;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *_topLevelObjects; // @synthesize _topLevelObjects;
@property(nonatomic) __weak NSView *_view; // @synthesize _view;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *showWhenRunItems;
@property(readonly, nonatomic) NSArray *selectedShowWhenRunItems;
- (id)_itemNameFromString:(id)arg1;
- (id)_getAccessibilityTitleUIElementAttributeForView:(id)arg1;
- (id)_findLabelViewForView:(id)arg1;
- (void)_postLoadView:(id)arg1 withStudioScripts:(id)arg2;
- (id)_scriptWithContentsOfURL:(id)arg1;
- (long long)validate;
- (void)setDisabled:(BOOL)arg1;
- (void)_updateParameters;
- (BOOL)_allowsDarkAppearance;
- (id)iconPath;
- (id)name;
- (void)assignBindingsToVariables;
@property(readonly, nonatomic) BOOL containsVariables;
- (id)evaluateParameterValue:(id)arg1;
- (id)createRuntimeParameters;
- (void)setRuntimeParameters:(id)arg1;
- (id)runtimeParameters;
@property(retain, nonatomic) NSMutableDictionary *parameters;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSString *bundlePath;
@property(retain, nonatomic) NSView *view;
@property(readonly, nonatomic) BOOL _hasNib;
- (BOOL)isViewLoaded;
@property(readonly, nonatomic) BOOL hasView;
- (id)bundleVersion;
- (id)version;
- (void)dealloc;
- (void)_releaseTopLevelObjects;
- (void)_closed;
- (void)generateUUIDs;
- (void)loadPropertyList:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)awakeFromBundle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefinition:(id)arg1 fromArchive:(BOOL)arg2;
- (id)initWithBundle:(id)arg1;
- (BOOL)isAMBundleAction__;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

