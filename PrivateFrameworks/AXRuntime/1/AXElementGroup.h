//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <AXRuntime/AXGroupable-Protocol.h>

@class AXElement, NSHashTable, NSString;
@protocol AXElementGroupGenerator;

@interface AXElementGroup : NSArray <AXGroupable>
{
    NSArray *_elementStore;
    BOOL _rootGroup;
    id <AXElementGroupGenerator> _generator;
    unsigned long long _groupTraits;
    unsigned long long _userDefinedScanningBehaviorTraits;
    NSHashTable *_groupObservers;
    AXElementGroup *_parentGroup;
    AXElement *_elementCommunity;
    NSString *_label;
    NSString *_identifier;
}

+ (id)groupWithGenerator:(id)arg1;
+ (id)groupWithElements:(id)arg1 label:(id)arg2;
+ (id)groupWithElements:(id)arg1;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) AXElement *elementCommunity; // @synthesize elementCommunity=_elementCommunity;
@property(nonatomic) AXElementGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(retain, nonatomic) NSHashTable *groupObservers; // @synthesize groupObservers=_groupObservers;
@property(nonatomic, getter=isRootGroup) BOOL rootGroup; // @synthesize rootGroup=_rootGroup;
@property(nonatomic) unsigned long long userDefinedScanningBehaviorTraits; // @synthesize userDefinedScanningBehaviorTraits=_userDefinedScanningBehaviorTraits;
@property(nonatomic) unsigned long long groupTraits; // @synthesize groupTraits=_groupTraits;
@property(nonatomic) __weak id <AXElementGroupGenerator> generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (id)debugFullDescription;
- (id)_debugBriefDescription;
- (id)_debugDescriptionForTraits;
- (id)_debugDescriptionForScanningBehaviorTraits;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithLocale:(id)arg1;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (void)unregisterAllGroupObservers;
- (void)unregisterGroupObserver:(id)arg1;
- (void)registerGroupObserver:(id)arg1;
- (id)bottomMostLeafAXElement;
- (id)topMostLeafAXElement;
- (id)rightMostLeafAXElement;
- (id)leftMostLeafAXElement;
- (id)_leafAXElementWithPosition:(long long)arg1;
- (BOOL)containsNativeFocusElement;
- (id)descendantWithNativeFocus;
@property(readonly, nonatomic) unsigned long long numberOfElements;
@property(readonly, nonatomic) BOOL allowsVisualGroupingOfChildren;
@property(readonly, nonatomic) BOOL shouldBeUngrouped;
@property(readonly, nonatomic) BOOL allowsChangingExistingGroupingOfContents;
@property(readonly, nonatomic) BOOL canBeReplacedByChildren;
@property(readonly, nonatomic) BOOL canBeGroupedWithOtherGroupables;
- (BOOL)isKeyboardRow;
- (BOOL)isKeyboardContainer;
- (id)keyboardContainer;
- (id)keyboardRow;
- (id)keyboardContainerRows;
- (void)enumerateLeafDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstLeafDescendant;
- (id)ancestorPassingTest:(CDUnknownBlockType)arg1;
- (id)descendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)firstDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (id)firstChildPassingTest:(CDUnknownBlockType)arg1;
- (id)firstChildMatchingItem:(id)arg1;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(char *)arg2;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(char *)arg2;
- (id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(char *)arg3;
- (id)lastChild;
- (id)firstChild;
- (void)_generateGroupsIfNeeded;
- (BOOL)isGroup;
- (id)highestAncestorGroup;
@property(readonly, nonatomic) struct CGRect frame;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)arg1;
- (void)_transferStateToGroup:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (void)dealloc;
- (void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3;
- (id)initWithGenerator:(id)arg1;
- (id)initWithElements:(id)arg1 label:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

