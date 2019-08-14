//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSValueBinder.h>

__attribute__((visibility("hidden")))
@interface NSSelectionBinder : NSValueBinder
{
    long long _contentPlacementTag;
    struct __selectionBinderFlags {
        unsigned int _insertsNullPlaceholder:1;
        unsigned int _contentValuesBindingIsInSync:1;
        unsigned int _contentObjectsBindingIsInSync:1;
        unsigned int _needsToSetUpObserving:1;
        unsigned int _isUpdatingObject:1;
        unsigned int _reservedSelectionBinder:27;
    } _selectionBinderFlags;
    id _modelObservingTracker;
}

+ (id)bindingsForObject:(id)arg1;
+ (id)binderClassesSuperseded;
+ (id)bindingCategory;
+ (id)_pluginProtocol;
+ (void)initialize;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType)arg1 selectedObject:(id)arg2;
- (unsigned long long)contentCountWithEditedMode:(struct __NSKeyValueCodingControllerModeType)arg1;
- (id)contentObjectWithEditedMode:(struct __NSKeyValueCodingControllerModeType)arg1 contentIndex:(unsigned long long)arg2;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType)arg1 contentIndex:(unsigned long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_adjustObject:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2 observedController:(id)arg3 observedKeyPath:(id)arg4 context:(void *)arg5 editableState:(char *)arg6 adjustState:(char *)arg7;
- (id)_valueForBindingWithoutResolve:(id)arg1 mode:(struct __NSKeyValueCodingControllerModeType)arg2;
- (id)contentObjectKey;
- (id)contentValueKey;
- (id)preferredPlaceholderForMarker:(id)arg1;
- (id)_preferredPlaceholderForMarker:(id)arg1 onlyIfNotExplicitlySet:(BOOL)arg2;
- (id)_defaultSortDescriptorPrototypeKey;
- (BOOL)_valueClassIsSortableWithBinding:(id)arg1;
- (id)_referenceBinding;
- (BOOL)_observeKeyPathForBindingInfo:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (void)_updateObservingRegistration:(BOOL)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (BOOL)_analyzeContentBindingInSyncWithBinding:(id)arg1;
- (id)availableBindings;
- (void)selectionMechanismWasDismissed:(id)arg1;
- (long long)contentPlacementTag;
- (void)setContentPlacementTag:(long long)arg1;
- (BOOL)insertsNullPlaceholder;
- (void)setInsertsNullPlaceholder:(BOOL)arg1;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (BOOL)_isReferenceBinding:(id)arg1;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (BOOL)isBindingReadOnly:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_init;

@end

