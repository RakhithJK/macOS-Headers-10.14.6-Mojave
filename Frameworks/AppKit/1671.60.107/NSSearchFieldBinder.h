//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewStateBinder.h>

#import <AppKit/NSMenuDelegate-Protocol.h>

@class NSMenu, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSSearchFieldBinder : NSViewStateBinder <NSMenuDelegate>
{
    struct __searchFieldBinderFlags {
        unsigned int _numberOfPredicateBindings:7;
        unsigned int _ignoreUpdates:1;
        unsigned int _bindingCountDidChange:1;
        unsigned int _reservedSearchFieldBinder:23;
    } _searchFieldBinderFlags;
    NSMutableDictionary *_predicateBindingTable;
    NSString *_selectedPredicateBinding;
    NSMenu *_searchMenuTemplate;
}

+ (id)_enumeratedPredicateBindings:(unsigned long long)arg1;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingCategory;
+ (id)bindingsForObject:(id)arg1;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (void)updateSearchFieldWithPredicate:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)check:(id)arg1;
- (void)deactivateMenuItemsInMenu:(id)arg1;
- (id)searchMenuTemplate;
- (void)performAction:(id)arg1;
- (void)searchFieldCellOrControlDidClearRecents:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (id)_predicateOptionPairForBinding:(id)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_init;
- (id)_cellForObject;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (id)availableBindings;
- (void)removeBinding:(id)arg1;
- (void)_removeBinding:(id)arg1;
- (void)addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformer:(id)arg4 options:(id)arg5;
- (void)_countBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

