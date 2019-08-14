//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSString, NSValueTransformer;

__attribute__((visibility("hidden")))
@interface _NSBindingInfo : NSObject <NSCoding>
{
    NSString *_binding;
    NSString *_key;
    NSString *_partialControllerKey;
    NSString *_partialObjectKey;
    NSValueTransformer *_valueTransformer;
    NSString *_valueTransformerName;
    id _retainedController;
    id _unretainedController;
    struct __bindingFlags {
        unsigned int _requiresDirectKeyValueCodingCall:1;
        unsigned int _raisesForNotApplicableKeys:1;
        unsigned int _validatesImmediately:1;
        unsigned int _alwaysPresentsApplicationModalAlerts:1;
        unsigned int _archiveNullPlaceholder:1;
        unsigned int _archiveNoSelectionPlaceholder:1;
        unsigned int _archiveMultipleValuesSelectionPlaceholder:1;
        unsigned int _archiveNotApplicablePlaceholder:1;
        unsigned int _binderSpecificFlags:8;
        unsigned int _retainController:1;
        unsigned int _isWeakBinding:1;
        unsigned int _reservedBinding:14;
    } _bindingFlags;
    id _nullPlaceholder;
    id _noSelectionPlaceholder;
    id _multipleValuesSelectionPlaceholder;
    id _notApplicablePlaceholder;
    id _observingBinder;
}

- (id)description;
- (id)observingBinder;
- (void)setObservingBinder:(id)arg1;
- (id)partialObjectKey;
- (id)partialControllerKey;
- (BOOL)requiresDirectKeyValueCodingCall;
- (void)setRequiresDirectKeyValueCodingCall:(BOOL)arg1 partialControllerKey:(id)arg2 partialObjectKey:(id)arg3;
- (BOOL)setParameter:(id)arg1 forOption:(id)arg2;
- (BOOL)isPlaceholderForMarkerExplicitlySet:(id)arg1;
- (id)placeholderForMarker:(id)arg1;
- (void)setPlaceholder:(id)arg1 forMarker:(id)arg2 isDefault:(BOOL)arg3;
- (BOOL)binderSpecificFlagAtIndex:(unsigned long long)arg1;
- (void)setBinderSpecificFlag:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isWeakBinding;
- (void)setWeakBinding:(BOOL)arg1;
- (BOOL)alwaysPresentsApplicationModalAlerts;
- (void)setAlwaysPresentsApplicationModalAlerts:(BOOL)arg1;
- (BOOL)validatesImmediately;
- (void)setValidatesImmediately:(BOOL)arg1;
- (BOOL)raisesForNotApplicableKeys;
- (void)setRaisesForNotApplicableKeys:(BOOL)arg1;
- (id)valueTransformerName;
- (void)setValueTransformerName:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1 retainController:(BOOL)arg2;
- (id)valueTransformer;
- (void)setValueTransformer:(id)arg1;
- (id)key;
- (id)binding;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 retainController:(BOOL)arg2 key:(id)arg3 valueTransformerName:(id)arg4 binding:(id)arg5;
- (id)initWithController:(id)arg1 retainController:(BOOL)arg2 key:(id)arg3 valueTransformer:(id)arg4 binding:(id)arg5;

@end

