//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSEditorBinder.h>

@class NSResponder;

__attribute__((visibility("hidden")))
@interface NSObjectDetailBinder : NSEditorBinder
{
    NSResponder *_errorPresenter;
    struct __objectDetailBinderFlags {
        unsigned int _handlesContentAsCompoundValue:1;
        unsigned int _deletesObjectsOnRemove:1;
        unsigned int _reservedObjectDetailBinder:30;
    } _objectDetailBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingCategory;
+ (void)initialize;
- (void)_useErrorPresenter:(id)arg1;
- (void)noteContentValueHasChanged;
- (BOOL)setMasterObjectRelationship:(id)arg1;
- (BOOL)setMasterObjectRelationship:(id)arg1 refreshDetailContent:(BOOL)arg2;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)refreshDetailContent;
- (id)_referenceBinding;
- (BOOL)deletesObjectsOnRemove;
- (void)setDeletesObjectsOnRemove:(BOOL)arg1;
- (BOOL)handlesContentAsCompoundValue;
- (void)setHandlesContentAsCompoundValue:(BOOL)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_notifyEditorStateChanged:(BOOL)arg1;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (void)_copyDetailsFromBinder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;

@end

